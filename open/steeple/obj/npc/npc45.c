inherit NPC;
#include <ansi.h>
void create()
{
        set("nickname",HIW"黑白双刹"NOR);
        set_name("白刹艳女", ({"white-ghost","ghost"}));
        set("age",8710);
        set("long","焚天魔王的两大护法之一，长得极其美艳的女妖，练有阴毒邪\功「发天杀”和「乱雪冰天”\n");
        set("title",HIW"～幻影～"NOR);
        set("gender","女姓");
        set("str",35);
        set("con",35);
        set("cor",30);
        set("cps",30);
        set("attitude","aggressive");
        set("bellicosity",2000);
        set("max_gin",14000);
        set("gin",14000);
        set("max_sen",14000);
        set("sen",14000);
        set("max_kee",100000);
        set("kee",100000);
        set("combat_exp",14000000);
        set("max_force",500000);
        set("force",1000000);
        set("force_factor",40);
        set("clan_kill",1);
        set_skill("dodge",100);
        set_skill("force",100);
        set_skill("badforce",100);
        set_skill("mogi-steps",120);
        set_skill("unarmed",100);
        set_skill("mogi-strike3",120);
        set_skill("parry",100);
        set_skill("literate",180);
        set_skill("move",100);
        map_skill("unarmed","mogi-strike3");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        map_skill("parry","mogi-strike3");
  
        set_temp("apply/armor",70);
        set_temp("apply/damage",70);
        setup();
        add_money("gold",25);
        
}

void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,ghost;
 ob=this_object();
 ghost=present( "ghost",environment(ob) );
 if(str=="askgod ghost" || str=="askgod white-ghost"){
 write(HIY"白刹艳女冷笑：「在魔王的地盘上面前求神问卜!?先问问魔王还差不多。”去死吧!!\n"NOR);
 ghost->kill_ob(who);
 return 1;                                                 
                  }
}

int accept_fight(object who)
{
return notify_fail("白刹艳女说道 : 我没空陪你玩。\n");
}


void heart_beat()
{
 object env,mob,*enemy,target;
 int i,j,force;
 mapping exit;
 string *exit_name;
 
 mob = this_object();
 
 env = environment(mob);
 
 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 30)
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"\n                        ～幻～影～心～诀～

"HIW"
瞬间, 冷雪纷纷, 阴风惨惨, 白霜如星落, 银萃如光转, 仿佛冻结
了血液一般, 凝止了一切
只见$N左手轻轻一拂, 漫天冰雪疾飞狂转, 一式"HIB"「乱雪冰天”"HIW"
朝着所有有温度之物袭去
\n"NOR,mob);
	mob->add("kee",3000);
      for(j=0;j < i;j++){
      enemy[j]->start_busy(2);
      enemy[j]->add("kee",-3000);
      COMBAT_D->report_status(enemy[j], 1);
                        }
    }
        }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}
int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"系统：战斗停止，$N回收中，。\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}
void unconcious ()
{
 object me=query_temp("last_damage_from");
if(!present("fight_card",me))
{
tell_object(me,"\n\n系统：由于你没携带晶片，所以无法记录战绩。\n");
destruct (this_object ());
}
else
if(!me->query("quest/start_game"))
{
tell_object(me,"\n\n系统：由于你没有正式登记，资料无法传输。\n");
destruct (this_object ());
}
else
if(me->query("quest/start_game")< 46)
       {
        tell_object(users(),HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第四十五层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第四十六层试炼□塔"HIG"’"HIW"。
	"NOR);
	me->set("quest/start_game",46);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}