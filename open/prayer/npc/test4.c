#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;
void create()
{
        set_name("戒律长老", ({"behavior_elder","behavior","elder"}));
        set("long","圣火教历代的三位长老皆是由教主亲自遴选出来的．戒律长老顾名思义
，便是专门负责监督圣火教内各人的言行举止．大凡教主，小是厨师，跑堂均要遵守教规的
规戒．如有不服从者，戒律长老便会以轻重加以处份！\n");
        set("gender","男性");
        set("class","prayer");
        set("family/master_name","林宏升");
        set("combat_exp",2700000);
        set("attitude","heroism");
        set("age",61);
        set("title","圣火教");
        set("kee",7800);
        set("max_kee",7800);
        set("force",10000);
        set("max_force",10000);
        set("force_factor",25);
        set("max_gin",2800);
        set("max_sen",2800);
                set_skill("superforce", 150);
                set_skill("holy-force", 110);
                set_skill("cure", 110);
                set_skill("dodge", 95);
        set_skill("force",130);
                set_skill("move", 100);
                set_skill("parry", 105);
                set_skill("stick",110);
                set_skill("unarmed",95);
                set_skill("array",40);
                set_skill("literate",120);
        set_skill("fire-catch",110);
        set_skill("shift-steps",110);
                set_skill("universe",110);
                map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
                map_skill("stick","fire-catch");
                map_skill("unarmed","universe");
                set("functions/black/level",60);
        set("chat_chance_combat", 40);
                set("chat_msg_combat", ({
                (: exert_function("black") :),
        }));
        setup();
        add_money("gold",10);
        create_family("圣火教",4,"长老");
}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_11"))
        {
        command("say 没有教主的同意,我不敢擅自做主收你为入室弟子!");
        return 0;
        }
        command("smile");
        command("say 既然是教主的意思,以后你就跟我好好学吧!");
        command("recruit "+ob->query("id"));
        ob->set("marks/圣火三长老",1);
        }

int accept_kill(object ob)
{
        int i;
        object ob1, hu_fa;
        ob1 = this_object();

        if( !present("hu_fa", environment(ob)) ) {
        tell_room(environment(ob),HIW"\n突然！冲出两位护法!!\n\n"NOR);
     for(i=0;i<2;i++)
     {
        hu_fa = new("/open/prayer/npc/hu_fa");
        hu_fa->move(environment(ob));
        hu_fa->command("guard behavior_elder");
        hu_fa->command("follow "+ob->query("id"));
        hu_fa->kill_ob(ob);
        }}
     tell_object(users(),HIR "护法纵身飞扑过来叫道：大胆狂徒！长老你也敢动！！\n" NOR);
        return 1;
}

void greeting(object ob)
{
        if (present("five poison", ob))
      {
       command("say 想用毒,门都没有!!");
        kill_ob(ob);
     }
    else
     {
     command("say 这里不是你该来的地方!快离开!!");
    }
    return;
}
