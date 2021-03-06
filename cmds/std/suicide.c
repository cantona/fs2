// suicide.c
// 不让巫师可以自杀了, wade 3/17/1996
// 为了不让自杀使帮派系统乱掉.帮派的人不能自杀。
#include <ansi.h>
 
inherit F_CLEAN_UP;
 
int main(object me, string arg)
{       
        if( !arg || (arg!="-f" && arg!="-n"))
                return notify_fail("自杀有两种，您是要永远死掉还是重新投胎？\n");
 
        // 不让巫师可以自杀了, wade 3/17/1996
        // 但让 wiz 能藉重新投胎以更新身区。 lys 5/2/1996
        if( me->query("clan/name"))
                return notify_fail("加入帮派的人请先脱帮后再自杀!!!\n");
        if (wizardp(me) && arg!="-n") {
          write ("巫师请您以 post 或寄信给 manager 的方式自杀.\n\n");
          return 1;
        }
 
        if (arg == "-n") {
                write("你真的要重新投胎吗? 放弃一切成为新生儿吗? (y/n)");
                input_to("confirm_reborn",me);
                return 1;
                }
        else if(arg == "-f") {
                write(
                "如果您选择永远死掉的自杀方式，这个人物的资料就永远删除了，请务必\n"
                "考虑清楚，确定的话请输入您的密码：");
                input_to("check_password", 1, me, 1);
                return 1;
        }
}
 
void confirm_reborn(string yn, object me)
{
 
        if( yn=="") {
                write("你真的要重新投胎吗? 放弃一切成为新生儿吗? (y/n)");
                input_to("confirm_reborn",me);
                return;
        }
        if( yn[0] != 'Y' && yn[0] != 'y' ) {
                write("你能想开真好, 继续努力吧, 相信明天会更好!\n");
                return;
        }
 
        write(
               "如果你选择重新投胎，将会清除你所有的资料，并重设属性。\n"
               "考虑清楚，确定的话请输入您的密码：");
        input_to("check_password", 1, me, 0);
        return;
}
int reset_body(object me)
{       string sui_str;
        object new_body, old_link = me->query_temp("link_ob");
        new_body = LOGIN_D->make_body(old_link);
        new_body->set("gender",me->query("gender"));
		log_file("suin",sprintf("%s重生于%s\n",
        me->query("id"),ctime(time())));
        exec(old_link,me);
        destruct(me);
        new_body->set("str",0);
        new_body->set("cps",0);
        new_body->set("int",0);
        new_body->set("cor",0);
        new_body->set("con",0);
        new_body->set("spi",0);
        new_body->set("per",0);
        new_body->set("kar",0);
        write("重新调整你的天覆赋, 请好好选择设定。\n");
        write ("请问您希望的膂力" +
               "是多少? 合法的值是 10-30, 目前剩下 160 : ");
        input_to("get_points",old_link,new_body);
 
}
void get_points( string points, object ob, object user)
{       
        LOGIN_D->get_points(points, ob, user, 160, "str", 1);
        shout ("西方红光乍现，"+user->name()+"重新转生于世。\n");
        return;
}
void check_password(string passwd, object me, int forever)
{
        object link_ob;
        string old_pass,id,sui_str;
        int stage;
 
        link_ob = me->query_temp("link_ob");
        old_pass = link_ob->query("password");
        if( crypt(passwd, old_pass)!=old_pass ) {
                write("密码错误！\n");
                return;
        }
 
        if (forever) {
                tell_object( me,
                        HIR "\n\n你决定要自杀了，永别了!!!!\n\n\n" NOR);
		log_file("suif",sprintf("%s自杀于%s\n",
        me->query("id"),ctime(time())));
        link_ob = me->query_temp("link_ob");
        if( !link_ob ) return 0;
        seteuid(getuid());
        rm( link_ob->query_save_file() + __SAVE_EXTENSION__ );
        rm( me->query_save_file() + __SAVE_EXTENSION__ );
 
        // 处理信件
        id =  me->query("id");
        rm( DATA_DIR + "mail/" + id[0..0] + "/" + id+".o");
 
        write("好吧，永别了:)\n");
        shout (me->name() + "自杀了，以后你再也看不到这个人了。\n");
		
        destruct(me);
        return 0;
        }
        else
                reset_body(me);
}

int slow_suicide(object me)
{
        string  id;
        object link_ob;
        int stage;
 
        stage = me->query_temp("suicide_countdown");
        me->add_temp("suicide_countdown", -1);
        if( stage > 0 ) {
                tell_object(me, HIR "你还有 " + (stage-1) + " 秒的时间可以后悔。\n" NOR);
                return 1;
        }
 
        link_ob = me->query_temp("link_ob");
        if( !link_ob ) return 0;
 
        seteuid(getuid());
        rm( link_ob->query_save_file() + __SAVE_EXTENSION__ );
        rm( me->query_save_file() + __SAVE_EXTENSION__ );
 
        // 处理信件
        id =  me->query("id");
        rm( DATA_DIR + "mail/" + id[0..0] + "/" + id+".o");
 
        write("好吧，永别了:)\n");
        shout (me->name() + "自杀了，以后你再也看不到这个人了。\n");
        destruct(me);
        return 0;
}
 
int help (object me)
{
        write(@HELP
指令格式 : suicide [-f || -n]
指令说明 : 
             如果因为某种原因你不想活了, 你可以选择自杀.
             自杀分两种:
 
suicide -n : 重新投胎 (清除一切资料，重新设定属性。)
suicide -f : 永远的除去玩家资料, 系统会要求你
             输入密码以确认身份.
 
请慎重选择 :)
HELP
);
        return 1;
}
