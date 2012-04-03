// master_tor.c made by adam..
// 让他死前会靠邀-by nike-
#include <ansi.h>
#include <marksman.h>
inherit NPC;
inherit F_MASTER;
string s_att();

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
set("cor",30);
        set("int", 40);
        set("kar", 16);
set("combat_exp",2000000);
set("bellicosity",5000);
set("force",8000);
set("max_force",8000);
set("max_atman",5000);
set("atman",5000);
set("force_factor",30);
        set("score"       , 200000);
set_skill("force",80);
set_skill("archery",120);
set_skill("god-shooting",100);
set_skill("magic",20);
set_skill("move",70);
set_skill("parry",70);
set("functions/ten_kee/level",100);
set("functions/m-archery/level",100);
set_skill("dodge",70);
set_skill("literate",40);
set_skill("unarmed",20);
        set_skill("iceforce",100);
set("no_lyssa",1);
        set_skill("rain-steps",100);
set_skill("riding",80);
        map_skill("force", "iceforce");
        map_skill("dodge", "rain-steps");
        map_skill("parry", "rain-steps");
        map_skill("archery","god-shooting");
        map_skill("move","rain-steps");
set("chat_chance_combat",100);
                set("chat_msg_combat", ({
(: s_att :)
        }));


        create_family("射日派", 2, "掌门人");


        setup();
carry_object(C_OBJ"/arrow-8");
carry_object(C_OBJ"/dragon_bow")->wield();   
        add_money("gold",10);
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
message("system",HIR "李广笑道 :\n
      "HIW"" +this_player()->name()+ ""NOR""HIR"拜入我门下 !\n
      他日必可成为一代神射手!\n
      成为武林至尊!!\n\n"NOR,users());

}
int accept_kill(object ob)
{
 command("say 老夫最近没练武了，那就来动一动吧!");
 command("say 纳命来!!");
 command("cmd holdup arrow with bow");
 kill_ob(ob);
command("perform archery.ten_kee");
command("supershoot");
return 1;
}
int accept_fight(object ob)
{
command("say 那好吧!!老夫就来会会你");
command("cmd holdup arrow with bow");
 fight_ob(ob);
command("perform archery.ten_kee");
command("supershoot");
return 1;
}
void heart_beat()
{
object me,room,*target;
int i,j;
me=this_object();
if( me->is_fighting() && random(100) > 60 && !me->query_temp("fast-dest") )
{
message_vision(HIC"\n李广吃起药丸补充血气。\n"NOR,me); 
me->receive_curing("kee",1500);
me->receive_heal("kee",1500);
me->delete_busy();
me->clear_condition();
   }
     ::heart_beat();
}
void greeting(object ob)
{
ob=this_player();
if(ob->query("family/family_name")=="射日派")
{


if(!present("bow",ob))
{
new(C_OBJ"/bow-1")->move(ob);
command("hmm");
command("say 弓怎么不见啦!!");
command("say 再给你一把，不要弄丢啦!");
}
}
}
void die()                                                                 
{    
        object winner = query_temp("last_damage_from");

        tell_object(users(),HIW"
    忽然自"GRN"长沙城"HIW"之中射出一道白光，映着朝日，直窜达天际～～～\n
        射日派掌门人－"HIY"李广"HIW"临死前喟然叹道～～～\n
            「啊～～～罢了...想我堂堂一名"HIC"飞将军"HIW"，居然是如此不堪一击...”\n
                名动天下的"HIC"「飞将军”"HIY"李广"HIW"，竟被"HIR"‘"+winner->name()+"’"HIW"给一招击毙于"HIY"广义堂"HIW"内...\n
\n\n"NOR);
        ::die();
}
string s_att()
{
if(random(2)) {
command("perform archery.ten_kee");
command("supershoot");
} else {
command("perform archery.m-archery");
command("supershoot");
}
}
