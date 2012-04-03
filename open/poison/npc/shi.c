#include <ansi.h>
#include "/open/open.h"
inherit NPC;
   
void create()
{
	set_name("绯雨闲丸", ({"shizumaru"}) );
	set("title","浪人");
	set("age",18);
	set("str",50);
	set("cps",33);
	set("cor",36);
	set("per",39);
	set("int",31);
	set("spi",30);
	set("con",36);
	set("kar",30);
	set("attitude","heroism");
	set("gender", "男性");
	set("class", "fighter");
	set("long", "一个远从东瀛扶桑国而来的武士,为了磨练自身的武技,来此地寻找
对手挑战。\n");
	set_skill("dodge", 150);
	set_temp("apply/armor", 30);
	set_temp("apply/dodge", 20);
	set_temp("apply/attack", 20);
	set_skill("parry", 150);
	set_skill("dragon-blade",90);
	set_skill("blade", 200);
	set_skill("force", 70);
	set_skill("move", 100);
	set_skill("nine-steps", 120);
	//map_skill("parry","dragon-blade");
	map_skill("move","nine-steps");
	map_skill("dodge","nine-steps");
	//map_skill("blade","dragon-blade");
	set("inquiry" ,([
	"侍魂" : "ㄜ.那次的比武已经过好久了，还提它做甚，想跟我较量吗?",
]));
	set("combat_exp", 2000000);
	set("chat_chance",10);
	set("chat_msg",({
	"绯雨闲丸玩弄着刀鞘上的穗。\n",
	"绯雨闲丸对着你说:想不想切搓一下武艺呢。\n",
}));
	set("chat_chance_combat", 50),
	set("chat_msg_combat",({
		(: this_object(), "special_att" :),
}));
	set("sen",10000);
	set("max_sen",10000);
	set("gin", 10000);
	set("kee", 10000);
	set("max_gin", 10000);
	set("max_kee", 10000);
	set("force",1000);
	set("max_force",1000);
	set("force_factor",10+random(5));
	setup();
        carry_object("/open/poison/obj/sandals.c")->wear();
	carry_object("/open/poison/obj/esword.c")->wield();
	carry_object("/open/poison/obj/cloak.c")->wear();

}
 int special_att()
{
	object *me,one;
	int i;
	me=this_player()->query_enemy();
	i=sizeof(me);
	one=enemy[random(i)];
	message_vision( HIB "
	绯雨闲丸大叫:看我的必杀技\n\n"
	HIR"              一～～～文～～～字～～～斩\n\n"NOR,one);
	message_vision("绯雨闲丸将刀急速的拔出，向$N身上斩去，再急速的将刀收回\n",one);
	one->receive_wound("kee",random(300+200));
	 COMBAT_D->report_status(one);
        return 1;
}

	
