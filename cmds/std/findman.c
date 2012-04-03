#include <ansi.h>
inherit F_CLEAN_UP;

int help(object me);
int main(object me, string arg)
{
        object who,room;
        string out;

        seteuid(getuid(me));


        if(!arg) return help(me);
        if(me->query("sen") <50) return notify_fail("风之精灵听不到你任何的呼唤!!\n");
        printf(HIC"你请风之精灵帮你找寻%s这个人!!\n"NOR,arg);
        who=find_player(arg);
        if(!who)
          who= FINGER_D->acquire_login_ob(arg);
        if(!who)
          return notify_fail("风之精灵回答你:在狂想的世界中似乎没有这号人物的存在!!\n");
        if(wizardp(who) && !wizardp(me)){
          tell_object(who,sprintf(HIY"风之精灵告诉你:%s 这个人似乎在找你喔!!\n"NOR,geteuid(me)));
          return notify_fail("风之精灵回答你:在狂想的世界中似乎没有这号人物的存在!!\n");
        }
        if(find_player(arg))
        tell_object(who,sprintf(HIY"风之精灵告诉你:%s 这个人似乎在找你喔!!\n"NOR,geteuid(me)));
        printf("
风之精灵回答你说: 找到 %s 这个人了
%s 的名字叫做: %s
%s 是一位 %s
",arg,arg,who->query("name"),arg,RANK_D->query_rank(who));
        if(me->query("family/master_id")==arg && find_player(arg)){
          room=environment(who);
          printf("%s(%s) 目前人在%s!!\n",who->query("name"),arg,room->query("short"));
        }
        else if(find_player(arg))
          printf("%s(%s) 目前在狂想的世界修炼中!!\n",who->query("name"),arg);
        else
          printf("%s(%s) 目前在虚无漂渺间!!\n",who->query("name"),arg); 

        me->add("sen",-20);        
        return 1;
}
 
int help(object me)
{
        write(@HELP
指令格式 : findman id
指令说明 :
           你可以请风之精灵帮你找找狂想中的人物, 不过需费一点神喔
           如果神不够那风之精灵是听不到你任何的呼唤的
HELP
    );
    return 1;
}


