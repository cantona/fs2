#include <ansi.h>
inherit NPC;
void create() {
        
        set_name("赤衣魔将",({"seven-dark"}));
        set("long",
   "\n血气红衣, 霸气不掩, 忠义之心直率的表露于外, 好个魔界汉子。\n");

        set("age",3121);
        set("str",35);
        set("cor",35);
        set("race","人类");
        set("gender","雄性");
        set("title",HIW"～幻影～"NOR);
        set("attitude","aggressive");
        set("class","fighter");
        set("bellicosity",1500);
        set("max_gin",9000);
        set("max_kee",50000);
        set("max_sen",9000);
        set("max_force",500000);
        set("force",500000);
        set("force_factor",38);
        set("combat_exp",13000000);
        set_skill("blade",120);
        set_skill("dodge",120);
        set_skill("mogi-steps",120);
        set_skill("move",80);
        set_skill("parry",120);
        set_skill("literate",150);
        set_skill("mogi-strike6",150);
        set_skill("force",130);
        set_skill("badforce",90);
        map_skill("blade", "mogi-strike6");
        map_skill("dodge","mogi-steps");
        map_skill("parry","mogi-strike6");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        set("clan_kill",1);
        set("limbs",({"头部","胸部","背部","腰部"}));
        setup();
        carry_object("/open/mogi/castle/obj/blade-1")->wield();
 }
void heart_beat()
{
 object env,mob,*enemy,target;
 int i,hellfire;

 mob = this_object(); 
 env = environment(mob);
 
 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 20)
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
    hellfire = target->query_condition("hellfire",1);
    if( env == environment(target) )
    {
      message_vision(HIW"\n                        ～幻～影～心～诀～

"HIR"\n
炎血之气激出红色的魔雾开始在空气中沸腾，$N的力量随着血气激
增，而$n却被血雾牵制得无法动弹
在$N的力量到达最高点的时候，只听$N大喝‘"HIW"破日天涡太阳断"HIR"’， 
暴走的魔气幻化成血龙奔向$n
\n"NOR,mob,target);
	mob->add("kee",1400);
      target->receive_damage("kee",1400);
      COMBAT_D->report_status(target, 1);
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
if(me->query("quest/start_game")< 32)
       {
        message_vision(HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第三十一层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第三十二层试炼□塔"HIG"’"HIW"。
	"NOR,me);
	me->set("quest/start_game",32);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}
