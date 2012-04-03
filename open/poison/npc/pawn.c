
#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
	set_name("当铺老板",({"pawn"}) );
	set("long","
本店的老板，听说他以前还是京城一著名当铺的当家朝奉，告老还乡之后却
不知为何又在此地开起当铺来。\n");
	set("no_kill",1);
	set("age",70);
	set("gender","男性");
	set("str",25);
	set("con",24);
	set("max_kee",350);
        setup();
}
void greeting(object me)
{
	if(!me || environment(me)!=environment()) return;
{
	command("grin "+me->query("id"));
	command("say 客人好，想当些东西吗");
}
}
