#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
	set_name("毒蛇",({"poison snake","snake"}) );
	set("gender","雄性");
	set("age",10);
	set("race","野兽");
	set("limbs",({"头部","尾巴","腹部"}) );
	set("verbs",({"bite"}) );
	set_skill("dodge",10);
	set("long","一只带有剧毒的蛇，牠正对着你昂首吐信。\n");
	set("attitude","aggressive"); 
	set_skill("unarmed",10);
	set("chat_chance_combat",10);
	set("chat_msg_combat", ({
	(: this_object(),"special_att" :),
}) );
	setup();
	carry_object("/open/poison/obj/gall.c")->set_amount(1);
	
}
int special_att()
{
	object me=this_object()->query_enemy();
if(me->query("family/family_name")!="冥蛊魔教")
{

	tell_room(me,"毒蛇突然扑上来向你狠狠的咬了一口。\n");
	me->apply_condition("snake_poison",2+me->query_condition("snake_poison"));
	return 1;
}
}
 
