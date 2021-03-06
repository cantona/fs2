#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
inherit SSERVER;

void create()
{
        set_name("乔峰",({"master jo","jo"}));
        set("long","丐帮第十八代掌门人。\n");
        set("gender","男性");
        set("class","beggar");
        set("nickname","侠情铁汉");
        set("combat_exp",2234789);
        set("attitude","heroism");
        set("age",26);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("max_gin",3500);
        set("s_kee",1000);
        set("max_s_kee",1000);
        set("sec_kee","god");
        set("force",3000);
        set("max_force",3000);
        set("max_kee",3000);
        set("kee",3000);

        set_skill("literate",40);
        set_skill("cure",50);
        set("force_factor",30);
        set_skill("force",80);
        set_skill("dodge",70);
        set_skill("dragonfist",100);
        map_skill("unarmed","dragonfist");
        set_skill("parry",70);
        set_skill("siseforce",100);
        map_skill("force","siseforce");
        map_skill("parry","dragonfist");
        set_skill("unarmed",120);
        set_skill("move",70);
        set_skill("staff",120);
        set_skill("tiger-steps",100);
        map_skill("dodge","tiger-steps");
        set_skill("pd-staff",100);
        map_skill("staff","pd-staff");
        set_skill("staff",120);
        set("chat_chance_combat", 60);
        set("chat_msg_combat",({
        (: perform_action,"unarmed.kang_s" :),
        (: perform_action,"unarmed.wave" :)
        }));
        setup();
        create_family("丐帮",18,"弟子");
        carry_object("/obj/cloth")->wear();
        carry_object("/open/beggar/obj/gstaff")->wield();
        add_money("gold",10);
}

  void attempt_apprentice(object ob)
{
        if(this_player()->query("class")!="beggar")
        {
                command("say 你又不是乞丐......去去去，别来烦我\n");
                return;
        }
        command(":)");
          command("recruit "+ob->query("id"));
}







