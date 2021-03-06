inherit NPC;
#include <ansi.h>

mapping *action = ({
([     "action"     :   "$N双手一扬"HIY"‘求生有道’"NOR"，刹那间天地云气狂涌，$n已被重重的云气所包围，命在旦夕！",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    250,
                "force"      :    250,
                "damage_type":   "暗伤",
           ]),
([     "action"     :   "$N随风轻扬一式"HIY"‘逃生无门’"NOR"，环伺于$n令$n捉摸不定！",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    350,
                "force"      :    350,
                "damage_type":   "内伤",
           ]),
([     "action"     :   "$N喑喑叹道："HIY"‘生命有时尽’"NOR"，何苦呀！何苦呀！$n就乖乖的束手就范吧！！",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    300,
                "force"      :    450,
                "damage_type":   "重伤",
           ]),
([     "action"     :   "$N叹道："HIY"‘生不逢时’"NOR"可叹！可悲呀！招式似有似无的向$n！",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    250,
                "force"      :    350,
                "damage_type":   "暗伤",
           ]),
([     "action"     :   "$N杀的性起，使出一式"HIY"‘杀生无悔’"NOR"，瞬间已经到达无我之境，杀的$n伤痕累累！",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    350,
                "force"      :    250,
                "damage_type":   "内伤",
           ]),
([     "action"     :   "$N轻笑道：遇到我算$n"HIY"‘三生有幸’"NOR"，但仍不留情地向$n攻去！",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    500,
                "force"      :    500,
                "damage_type":   "重伤",
           ]),
([     "action"     :   "$N姿势立稳，一式"HIY"‘生生不息’"NOR"，一招一式已向$n重重的袭去！",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    450,
                "force"      :    350,
                "damage_type":   "暗伤",
           ]),
([    "action"     :    "$N喝道：使出至极一式"HIY"‘普渡众生’"NOR"，通通给我下地狱去吧！！！",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    600,
                "force"      :    600,
                "damage_type":   "无名之伤",
            ]),
   });

void create()
{
        set("nickname",HIM"残生梦醒"NOR);
        set("title",HIY"【生】冥王"NOR);
        set_name("梦风儿", ({"ghost life","ghost","life"}));
        set("age",30);
        set("long","死灵骨魔的两大护法之一，负责掌管【生】，生的柔媚多姿，甚是得死灵骨魔的宠爱。\n");
        set("gender","女性");
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
        set("max_kee",15000);
        set("kee",15000);
        set("combat_exp",10000000);
        set("max_force",90000);
        set("force",1000000);
        set("force_factor",40);
        set("clan_kill",1);
        set_skill("dodge",300);
        set_skill("force",200);
        set_skill("fireforce",150);
        set_skill("mogi-strike1",220);
        set_skill("mogi-steps",220);
        set_skill("unarmed",200);
        set_skill("parry",300);
        set_skill("literate",180);
        set_skill("move",200);
        map_skill("parry","mogi-strike1");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("force","fireforce");
  
        set_temp("apply/armor",600);
        set_temp("apply/damage",200);
        setup();
        add_money("cash",50);

        set("default_actions", (: call_other, __FILE__,"query_action" :));
        reset_action();

}

mapping query_action()
{
        return action[random(sizeof(action))];
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
 write(HIY"生冥王冷笑：「别在我面前占卜了，省省吧！”\n"NOR);
 ghost->kill_ob(who);
 who->start_busy(1);
 return 1;                                                 
                  }
}

int accept_fight(object who)
{
return notify_fail("生冥王说道 : 别烦我，快走开！。\n");
}

int accept_kill(object who)
{
 who = this_player();
 kill_ob(who);
 return 1;
}

void heart_beat()
{
 object env,mob,*enemy,target;
 int i,j,force,count;
 mapping exit;
 string *exit_name;
 mob = this_object();
 env = environment(mob);
 count = random(100);
  
 if(count < 5)
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"
一声轻笑，千柔万媚的$N施展"HIM"「回眸一笑百媚生”"HIW"，以
"HIM"「沉鱼落雁”"HIW"之姿迷惑了$n，$n禁不住迷惑产生混乱，
当场被$N无情的攻击着，全无招架之力！！
\n"NOR,mob,(enemy[j]));
      for(j=0;j < i;j++){
      message_vision(HIR"$N禁不住这样的迷惑，渐渐丧失心志，疯狂的向周围的人狂扑！！\n"NOR,(enemy[j]));
      enemy[j]->start_busy(2);
      enemy[j]->add("kee",-800);
      enemy->apply_condition("mess",random(2)+1);
      COMBAT_D->report_status(enemy[j], 1);
                        }
    }
        }
 }  

 if(count > 85)
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"
$N冷冷的注视着$n，"HIM"「"HIC"森然凛烈"HIM"”"HIW"一道森寒的气息渐渐的
袭向$n，刹时间，在$n四周的空气为之凝结！
\n"NOR,mob,(enemy[j]));
      for(j=0;j < i;j++){
      message_vision(HIR"$N为之一愕，以被凛烈的气息所伤！！\n"NOR,(enemy[j]));
      enemy[j]->start_busy(2);
      enemy[j]->add("kee",-800);
      enemy->apply_condition("cold",random(5)+10);
      COMBAT_D->report_status(enemy[j], 1);
                        }
    }
        }
 }  

   set_heart_beat(1);
   ::heart_beat();
   
}

