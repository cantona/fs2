// 让位指令 cinherit.c by Chan 10/31/98
// 提供给帮主让位用!!!!
#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string str)
{
        object  ob;
        if( !str )
                return notify_fail("指令格式：cinherit <id>\n");
//本来的程式段有bug,若你要让位的对像不在同一间房间,会找不到ob,所以做以下的增加by bss 2000,05,06
        if(!ob=present(str,environment(me)))
                return notify_fail("这里没有"+str+"这个人!!!\n");
        if( !ob = present(str, environment(me)) || !userp(ob)
         || !living(ob) || ob == me )
                return notify_fail("请不要乱开玩笑。\n");
        if(ob==me) return notify_fail("让位给自己。\n");
       	if( !me->query("clan" ) )
		return notify_fail( "您没有加入任何帮派。\n" );
        if( me->query("clan/rank") > 1 )
	        return notify_fail("您无权使用此指令。\n");
        if( ob->query("clan/id") != me->query("clan/id"))
                return notify_fail("您所要让位的人并非贵帮弟子。\n");
        if( ob->query("combat_exp") < 5000000)
                return notify_fail("对方的江湖历练不足以胜任此职务。\n");

        ob->set("clan/passwd",me->query("clan/passwd"));
        ob->set("clan/title", me->query("clan/title"));
        ob->set("clan/rank",1);
        CLAN_D->change_clan_master( me->query("clan/id"), ob->query("id") );
        me->delete("clan/passwd");
        me->set("clan/rank", 5);
        me->set("clan/title", "帮派弟子");

	CHANNEL_D->do_channel(me, "ct",
		"\n\t我 -「"HIW+me->query("clan/title")+HIY"”郑重的宣布……\n\t"+
		"将帮主之位，传给"+HIC+ob->query("name")+HIY+"。\n"NOR);
        return 1;

}

int help(object me)
{
        write(@HELP

格式说明:cinherit <ID>

这是将帮主的位置让给帮派里的人,记得在让位之后要把帮派密码转给新帮主!!!

HELP    );
        return 1;
}

