inherit NPC;
#include <ansi.h>
void create()
{
        set("nickname",HIW"黑白双刹"NOR);
        set_name("黑刹郎君", ({"black-ghost","ghost"}));
        set("age",8710);
        set("long","焚天魔王的两大护法之一，练有极其阴寒的「葬列剖坟手”和「四焰魂舌”\n");
	set("title",HIW"～幻影～"NOR);
        set("gender","男姓");
        set("str",35);
        set("con",35);
        set("cor",30);
        set("cps",30);
        set("attitude","aggressive");
        set("bellicosity",6000);
        set("max_gin",7000);
        set("gin",7000);
        set("max_sen",7000);
        set("sen",7000);
        set("max_kee",100000);
        set("kee",100000);
        set("combat_exp",18000000);
        set("max_force",800000);
        set("force",4000000);
        set("force_factor",45);
        set("clan_kill",1);
        set_skill("dodge",130);
        set_skill("force",130);
        set_skill("badforce",130);
        set_skill("mogi-steps",130);
        set_skill("unarmed",150);
        set_skill("literate",200);
        set_skill("mogi-strike5",120);
        set_skill("parry",140);
        set_skill("move",140);
        map_skill("unarmed","mogi-strike5");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        map_skill("parry","mogi-strike5");
  
        set_temp("apply/armor",70);
        set_temp("apply/damage",70);
        setup();
        
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
 if(str=="askgod ghost" || str=="askgod black-ghost"){
 write(HIY"黑刹郎君冷笑：「在魔王的地盘上面前求神问卜!?先问问魔王还差不多。”去死吧!!\n"NOR);
 ghost->kill_ob(who);
 return 1;                                                 
                  }
}

int accept_fight(object who)
{
return notify_fail("黑刹郎君说道 : 我没空陪你玩。\n");
}


void heart_beat()
{
 object env,mob,*enemy,target;
 int i;

 mob = this_object(); 
 env = environment(mob);
 
 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 27)
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"\n                        ～幻～影～心～诀～

"HIM"\n
$N四指一擦，紫黑色的魔界之火轰然而生, 仿佛不吸尽所有的光亮
绝不停止 
就在光线消失殆尽之际，$N踩影而遁，使出一式"HIR"「四焰魂舌”"HIM"朝
$n的眉心直直指去
\n"NOR,mob,target);
      target->receive_wound("force",10000);
      target->receive_wound("kee",4000);
      COMBAT_D->report_status(target, 1);
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
if(me->query("quest/start_game")< 49)
       {
        tell_object(users(),HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第四十八层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第四十九层试炼□塔"HIG"’"HIW"。
	"NOR);
	me->set("quest/start_game",49);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}