// tell.c

#include <ansi.h>
#include <dbase.h>
#include <net/dns.h>

inherit F_CLEAN_UP;
inherit F_DBASE;

int help(object me);

        void create() {seteuid(getuid());}

int main( object me, string arg )
{
        int len;
        string target, msg, mud;
        string stat;
        object obj;

        if( !arg || sscanf(arg, "%s %s", target, msg)!=2 ) return help(me);
        target = lower_case (target);

        if( sscanf(target, "%s@%s", target, mud)==2 ) {
          // 自己写一写又拿掉了
          // if (wizardp (me)) {
                GTELL->send_gtell(mud, target, me, msg);
                write("网路讯息已送出，可能要稍候才能得到回应。\n");
                return 1;
          // }
          // else
          //   return notify_fail ("【系统】: 玩家不能用跨网 tell\n");
        }

        obj = find_player(target);
        if( !obj )
        	return notify_fail("没有这个人...\n");
//asin自己说希望可以关掉tell,所以就帮他关by bss
        	
        if( obj->query("id") == me->query("id") )
        	return notify_fail("自言自语?!\n");        	

        if(!wizardp(me)&&wizardp(obj)&&wizhood(obj)!="(manager)"&&wizhood(obj)!="(admin)"&&wizhood(obj)!="(arch)")
                return notify_fail("玩家不能对大巫师以下的人用 tell。\n");
        if( obj->query("env/no_tell") && wiz_level(me) <= wiz_level(obj)&&!me->query("env/can_tell_wiz"))
		if( wiz_level(obj) > 1 )
           		return notify_fail("没有这个人...\n");
          	else if(!me->query("env/can_tell_wiz"))
           		return notify_fail(obj->name()+"现在不想受打扰。\n");
        if( obj->query_temp("netdead") )
          return notify_fail (GRN+ obj->name(1)+"断线中...\n" NOR);

        stat = "";
        if( in_input(obj) )
          stat = obj->name(1)+"输入文字中...\n";
        if( in_edit(obj) )
          stat = "编辑档案中...\n";
        if( interactive(obj) && query_idle( obj ) > 120 )
          stat = "发呆中...\n";
write("‘"+HIW+"密谈"+NOR+"’"HBRED+stat + "你用千里传音告诉" + obj->name(1) +": " + msg+"\n"NOR); 
tell_object(obj, sprintf("‘"HIW"密谈"NOR"’"HBRED"%s用千里传音告诉你: %s\n"NOR,
                me->name(1)+"("+me->query("id")+")", msg));
	if( obj->query("away") )
    {
    len=sizeof(obj->query("away"));
		if( obj->query("away")[0..0]=="1" )
		        tell_object( me, sprintf( HBGRN"%s用千里传音告诉你: %s\n"NOR,
                    obj->name(1)+"("+obj->query("id")+")", obj->query("away")[1..len-1] ));

    }
        obj->set_temp("reply", me->query("id"));
        return 1;
}

int remote_tell(string cname, string from, string mud, string to, string msg)
{
        object ob;

        if( ob = find_player(to) ) {
                if( cname )
                        tell_object(ob, sprintf(HIG "%s(%s@%s)告诉你：%s\n" NOR,
                                cname, capitalize(from), mud, msg ));
                else
                        tell_object(ob, sprintf(HIG "%s@%s 告诉你：%s\n" NOR,
                                capitalize(from), mud, msg ));
                ob->set_temp("reply", from + "@" + mud);
                return 1;
        } else
                return 0;
}

int help(object me)
{
        write(@HELP
指令格式 : tell <某人> <讯息>
指令说明 :
           你可以用这个指令和其他地方的使用者说话。
其他参考 :
           reply
HELP
        );
        return 1;
}
