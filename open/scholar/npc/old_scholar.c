//copy from cage,re-edit from ccat

#include <ansi.h>
inherit NPC;


void create()
{
        set("title","学识厅长老");
        set_name("万识通", ({"old scholar","old","scholar"}));
        set("age",65);
        set("long","他乃儒门之长老，曾追随邢千书，并学得儒门秘技之一.\n");
        set("gender","男性");
        set("family/family_name","儒门");
        set("str",43);
        set("con",33);
        set("max_kee",2000);
        set("kee",2000);
        set("combat_exp",800000);
set("max_force",2500);
   set("force",2500);
        set("force_factor",10);
        set_skill("dodge",80);
        set_skill("force",80);
        set_skill("winter-steps",100);
        set_skill("stabber",100);
        set_skill("parry",80);
        set_skill("knowpen",100);
        set_skill("poetforce",80);
        map_skill("stabber","knowpen");
        map_skill("force","poetforce");
        map_skill("parry","knowpen");
        map_skill("dodge","linpo-steps");
        set("chat_chance_combat",25);
        set("chat_msg_combat",({
        (: perform_action,"stabber.movedown" :)
        }));
        set_temp("apply/armor",100);
        set_temp("apply/damage",80);
        setup();
        add_money("gold",25);
carry_object("/open/scholar/obj/literate_pen")->wield();
}
 

   
