#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;
void create()
{
        set_name("葛辉", ({"ka hui","hui","ka"}));
        set("long",@LONG
        天枢门的门主！道地的西域人士，因为本身对于圣火教非常
        的崇信，所以自年轻时便投入教内的工作．虽然功劳并不是
        很显赫，可是为教牺牲的精神被教主所欣赏，因而提拔他成
        为八天门的门主之一！
LONG);
        set("gender","男性");
        set("class","prayer");
        set("family/master_name","林宏升");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",51);
        set("title","天枢门主");
        set("kee",6000);
        set("max_kee",6000);
        set("force",9000);
        set("max_gin",4000);
        set("max_sen",4000);
        set("max_force",9000);
        set("force_factor",5);
        set_skill("holy-force", 60);
        set_skill("superforce", 80);
        set_skill("cure", 40);
        set_skill("dodge", 80);
        set_skill("force",60);
        set_skill("move", 60);
        set_skill("parry", 80);
        set_skill("canon", 80);
        set_skill("unarmed",70);
        set_skill("literate",50);
        set_skill("shift-steps",80);
        set_skill("universe",60);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("functions/white/level",40);
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: exert_function("white") :),
        }));
        setup();
    carry_object("/open/prayer/obj/emery-robe")->wear();
    carry_object("/open/prayer/obj/hat")->wear();
    carry_object("/open/prayer/obj/emery-armband")->wear();
    carry_object("/open/prayer/obj/emery-belt")->wear();
    carry_object("/open/prayer/obj/emery-firer")->wield();
    add_money("gold",5);
        create_family("天枢门",5,"门主");
}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_2"))
        {
        command("say 没有教主的同意,我不敢擅自做主让你进门!");
        return 0;
        }
        command("smile");
        command("say 进入天枢门之后,你就必需对教牺牲,奉献!知道吗??");
        command("recruit "+ob->query("id"));
        ob->set("marks/圣火八天门",1);
        this_player()->set("title","圣火教天枢门俗家弟子");
        }
void greeting(object ob)
{
        if (ob->query_skill("coldpoison", 1))
//      if ((present("five poison", ob)) || (present("dark poison", ob)) || (present("faint poison", ob)) || (present("rose poison", ob)) )
      {
       command("say 教主有令！！凡是学有毒术之人，杀无敕！！");
        kill_ob(ob);
     }
       if( ob->query("class")=="dancer")
        {
        command("say 教主有令，见到舞者-----格杀勿论！！");
        kill_ob(ob);
     }
    return;
}
