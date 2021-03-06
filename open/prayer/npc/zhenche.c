#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

object ob1=this_object();
int have_say;

void create()
{
set_name("箫扬", ({"shin young","shin","young"}));
set("gender","男性");
set("age",30);
set("class","prayer");
set("family/master_name","林宏升");
set("nickname","智慧之星");
set("attitude","heroism");
set("long",@LONG
    此人乃是阵势门门主,他身上流着西域人和中原人的血统,
    刚踏入圣火教就被圣火教军师骆芝芝欣赏,骆芝芝并把一
    生所学的谋略和武学传授给箫扬,让圣火教有人继军师的
    的职位,他因为先天的聪明和后天的教导,使他几乎超过骆
    芝芝,神机妙算,料事如神,使他被各大长老和门主教徒称
    为[智慧之星],因而如此被教皇封他为[阵势门]门主。

LONG);

set("combat_exp",1000000);
set("title","阵势门主");
set("kee",6200);
set("max_kee",6200);
set("force",9000);
set("max_force",9000);
set("max_gin",4000);
set("max_sen",4000);
set("force_factor",5);
set_skill("canon",80);
set_skill("holy-force", 70);
set_skill("superforce", 80);
set_skill("cure", 50);
set_skill("dodge", 70);
set_skill("force", 70);
set_skill("move",70);
set_skill("parry", 70);
set_skill("unarmed", 70);
set_skill("literate", 90);
set_skill("shift-steps",70);
set_skill("universe", 80);
map_skill("force","superforce");
map_skill("dodge","shift-steps");
map_skill("move","shift-steps");
map_skill("parry","universe");
map_skill("unarmed","universe");
set("chat_chance",5);
set("chat_msg",({
HIW+"箫扬说道：兵者，国之大事，生死之地，存亡之道，不可不察也。\n"+NOR,}));

setup();

carry_object("/open/prayer/obj/emery-robe")->wear();
carry_object("/open/prayer/obj/hat")->wear();
carry_object("/open/prayer/obj/emery-armband")->wear();
carry_object("/open/prayer/obj/emery-belt")->wear();
carry_object("/open/prayer/obj/emery-firer")->wield();
add_money("gold",5);

create_family("阵势门",5,"门主");
}

void attempt_apprentice(object ob)
{
    if(!ob->query_temp("allow_8"))
  { command("say 没有教主的同意，我不敢擅自做主让你进门！");
    return 0;
  }
  command("smile");
  command("say 进入阵势门之后，你就必需对本教忠心不二，不可怀有私心！知道吗！！");
  command("recruit "+ob->query("id"));
  ob->set("marks/圣火八天门",1);
  this_player()->set("title","圣火教阵势门俗家弟子");
}
void greeting(object ob)
{
  if (ob->query_skill("poison",1))
//if ((present("five poison", ob)) || (present("drak poison",ob)) || (present("faint poison", ob)) || (present("rose poison", ob)))
  {
   command("say 教主有令！！凡是学有毒术之人，杀无敕！！");
   kill_ob(ob);
  }
   if(ob->query("class") == "dancer" )
     {
      command("say 教主有令，见到舞者----格杀勿论！！");
      kill_ob(ob);
     }
   return;
}
