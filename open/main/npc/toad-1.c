#include <ansi.h>
#include "/open/open.h"
inherit NPC;
  inherit F_MASTER;
void create()
{
        set_name("癞蛤蟆", ({ "toad" }) );
        set("race", "野兽");
        set("age", 5);
        set("guild_master",1);
        set("long", "一只恶心的癞蛤蟆.\n");
        set("str", 10);
        set("per", 1);
        set("cor", 35);
        set("limbs", ({ "头部", "身体", "前脚" , "后脚" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp",100);
        set("max_kee",99000);
        set("kee",99000);
        set("force",20000);
        set("max_force",20000);
        set_skill("dodge",40);
        set_skill("force",50);
        set_skill("linpo-steps",40);
        set_skill("parry",20);
        set_temp("apply/armor", 10);
        set_temp("apply/attact", 10);
        set("chat_chance",10);
        map_skill("dodge","linpo-steps");
        setup();
        carry_object("/open/gsword/obj/ring-1")->wear();

}
