// 焚天魔王 by roger
// 焚天在修正 by chan
#include <ansi.h>
inherit NPC;
   
void create()
{
        set("long","
莫无愁，天下第一黑道盟主，擅长暗杀，靠奖金为生!!!!!
接收各帮派委任!!若有被帮派追缉的人出现在他的面前!!!绝对是杀无赫!!!!
其武功为极火功及极火掌!!!来历不祥!!!!
");
        set("gender","男性");
        set("class","fighter");
        set("nickname",HIR"极道杀手"NOR);
        set("title","黑道盟主");
        set_name("莫无愁",({"wu"}));
        set("combat_exp",15500000);
        set("attitude","hero");
        set("bellicosity",10000);
        set("age",45);
        set("max_force",250000);
        set("force",240000);
        set("max_kee",33000);
        set("kee",34000);
        set("max_gin",14000);
        set("max_sen",14000);
        set("str", 35);
        set("cor", 35);
        set("cps", 30);
        set("per", 30);
        set("int", 30);
        set("force_factor",45);
        set_skill("dodge",220);
        set_skill("force",250);
        set("clan_kill",1);     //不能派杀手追杀
        set_skill("move",280);
        set_skill("parry",250);
        set_skill("mogi-steps",200);
        set_skill("firestrike",220);
        set_skill("unarmed",220);
        set_skill("literate",200);
        set_skill("fireforce",250);
        set_temp("armor_vs_force",5000);
        map_skill("force","fireforce");
        map_skill("unarmed","firestrike");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("parry","firestrike");

        set("functions/gold-fire/level",100);
        set("quest/gold-fire",1);
        set("quest/new_gold_fire",1);
        setup();
        carry_object("/data/autoload/mogi/fire-armor")->wear();
        carry_object("/data/autoload/mogi/fire-cloud-boots")->wear();
        carry_object("/data/autoload/mogi/fire-belt")->wear();
        carry_object("/data/autoload/mogi/daemon-cloak")->wear();
        carry_object("/data/autoload/mogi/fire-dragon")->wield();
        add_money("gold",1000);
}

void greeting(object ob)
{
 if(ob->query("ckill"))
  {
    command("say 哈!!哈!!又一个来送死的!!看掌!!");
    command("perform fireforce.gold-fire");
    kill_ob(ob);
    ob->start_busy(2);
  }

}
