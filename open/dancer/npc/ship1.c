// /open/dancer/npc/ship1.c
#include "/open/open.h"
inherit NPC;
int time=0;
void create()
{
	set_name("弯月舫", ({ "ship" }) );
	
	set("long", @LONG
雕饰着云女玩月图的弯月舫, 船体是由千年神木所輮制而成,
是当今京城首富赠与双月姊妹的礼物, 只为能够欣赏一次她们媲美
天仙的技艺. 姊妹偶尔会乘着弯月舫游湖赏景, 但通常都是让弟子
们外出购物用.
LONG);
	set("attitude", "friendly");
	
	setup();
	set_heart_beat(1);	
}
void init()
{
	add_action("do_look","look");
	add_action("do_look","l");
}

void heart_beat()
{
 time++;
 if(time==1)
 {
 say("前往枫林港的渡船到啰 , 请赶快搭(board)船 !\n");
 }
 if(time==11)
 {
 say("开船啰 , 没搭上的人下次请早 !\n");
 destruct(this_object());
 }
} 

int do_look(string str)
{
	if(str=="ship")
	{
	write("雕饰着云女玩月图的弯月舫, 船体是由千年神木所輮制而成,
是当今京城首富赠与双月姊妹的礼物, 只为能够欣赏一次她们媲美
天仙的技艺. 姊妹偶尔会乘着弯月舫游湖赏景, 但通常都是让弟子
们外出购物用.\n");
	return 1;
	}
return 0;
}
int accept_fight(object me)
{
	return notify_fail("看清楚 , 那并不是生物 !\n");
}
int accept_kill(object me)
{
	return notify_fail("看清楚 , 那并不是生物 !\n");
}
