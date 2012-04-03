// master_tor.c made by adam..

#include <ansi.h>
#include <marksman.h>
inherit NPC;
inherit F_MASTER;


void create()
 {
        set("class", "marksman");
set_name("李广", ({ "master lee", "master", "lee" }) );
        set("title","射日派第二代掌门人");
        set("nickname",HIC "心定穿石"NOR);
        set("gender", "男性");
set("max_kee",5000);
        set("age", 55);
        set("attitude", "heroism");
        set("long","李广为古代名将之一，曾在一次打猎中，把箭射进石头里，谓之赞叹..\n");
        set("str", 18);
        set("cps", 30);
        set("per", 10);
        set("int", 40);
        set("kar", 16);
set("combat_exp",2000000);
set("bellicosity",5000);
set("force",8000);
set("max_force",8000);
set("force_factor",30);
        set("score"       , 200000);
set_skill("force",80);
set_skill("archery",120);
set_skill("god-shooting",100);
set_skill("move",70);
set_skill("parry",70);
set("functions/ten_kee/level",100);
set_skill("dodge",70);
set_skill("literate",40);
        set_skill("iceforce",100);
        set_skill("rain-steps",100);
set_skill("riding",80);
        map_skill("force", "iceforce");
        map_skill("dodge", "rain-steps");
        map_skill("parry", "rain-steps");
        map_skill("archery","god-shooting");
        map_skill("move","rain-steps");
set("chat_chance_combat",5);
                set("chat_msg_combat", ({
(: perform_action("archery.ten_kee") :)
        }));


        create_family("射日派", 2, "掌门人");


        setup();
carry_object(C_OBJ"/bow-9")->wield();
carry_object(C_OBJ"/arrow-8");
        add_money("gold",10);
}


void init()
{
add_action("do_level","level");
}

int do_level(int lv,object me)
{
me = this_player();
lv = me->query("combat_exp")/100000;
if(me->query("level") < lv)
{
write("李广说: 你还不够升级，再努力吧!!\n");
}else{
write("李广说: 恭喜你升级了。\n");
me->set("level",lv);
}
return 1;
}

void attempt_apprentice(object ob)
{
        if(this_player()->query("class")!="marksman")
        {
                command("sigh");
                command("say 你不是射手，我不能收你。\n");
                return;
        }
      if((int)ob->query("str") <16 )
{
          command("sigh");
          command("say 你的膂力不够，拿起弓来一定会颤抖..\n敝人观之"+ RANK_D->query_respect(ob) + "的资质似乎不宜！\n");

return;
        }

      command("hmm");
new(C_OBJ"/bow-1")->move(ob);
command("say 给你把弓，可不要用不见啦!");
      command("pat" + ob->query("id"));
      command("recruit "+ob->query("id"));
ob->set("appraise",random(5));
message("system",HIR "李广笑道 :\n
      "HIW"" +this_player()->name()+ ""NOR""HIR"拜入我门下 !\n
      他日必可成为一代神射手!\n
      成为武林至尊!!\n\n"NOR,users());

ob->set("Lbird-shop","YES");
}
int accept_kill(object ob)
{
 command("say 老夫最近没练武了，那就来动一动吧!");
 command("say 纳命来!!");
 command("cmd holdup arrow with bow");
 command("kill"+ob->query("id"));
command("perform archery.ten_kee");
return 1;
}
int accept_fight(object ob)
{
command("say 那好吧!!老夫就来会会你");
command("cmd holdup arrow with bow");
return 1;
}
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
     ::heart_beat();
}
void greeting(object ob)
{
if(ob->query("family/master_name")=="李广")
{

if(!present("come",ob))
{
new(C_OBJ"/come")->move(ob);
command("hmm");
command("say 哨子呢?不见了?");
command("say 再给你一个。");
}
/*
if(!present("bow",ob))
{
new(C_OBJ"/bow-1")->move(ob);
command("hmm");
command("say 弓怎么不见啦!!");
command("say 再给你一把，不要弄丢啦!");
}
*/
}
}

