#include <ansi.h>

inherit NPC;
void create()
{
	set_name("邢千书",({"sing chens","chens"}));
	set("title","儒生");
	set("nickname",HIY "指剑才子" NOR);
	set("long",@LONG
眼前你所见者乃是儒门第十五代掌门，因受好友独孤愁之托而来雪苍。
LONG);
	set("gender","男性");
	set("combat_exp",2000000);
	set("attitude","heroism");
	set("age",30);
	set_skill("parry",100);
	set_skill("force",100);
	set_skill("stabber",100);
	set_skill("knowpen",150);
	set_skill("dodge",100);
	set_skill("poetforce",100);
	map_skill("force","poetforce");
	set_skill("winter-steps",100);
	map_skill("stabber","knowpen");
	map_skill("dodge","winter-steps");
	set("kee",10000);
	set("max_kee",10000);
	set("sen",10000);
	set("max_sen",10000);
	set("gen",10000);
	set("max_gen",10000);
	set("force",3500);
	set("max_force",3500);
	set("force_factor",20);
	set_temp("apply/damage",60);
	set_temp("apply/armor",60);
	setup();
	carry_object("/open/start/obj/ten_pen")->wield();
}
