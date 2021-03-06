#include <ansi.h>

inherit NPC;
void do_special();
void use_poison(object me, object viction);
 
mapping *action = ({
        ([
                "action"     :  "$N怒吼一声，用庞大的身躯向$n直扑而来",
                "dodge"      :  -20,
                "parry"      :  -20,
                "damage"     :   25,
               "damage_type":  "骨折"
        ]),
        ([
                "action"     :  "$N抽身一跃，双手抱膝成球状撞向$n，威力万钧，正是一招‘火龙金魔体’",
                "dodge"      :  -30,
                "parry"      :   25,
                "damage"     :   40,
                "damage_type":  "骨折",
        ]),
        ([
                "action"     :   "$N身法忽变，一招‘魔风鬼爪’身体随风而动，飘乎不定，巨爪出手诡异，抓向$n",
                "dodge"      :   -35,
                "parry"      :    15,
                "damage"     :    65,
                "damage_type":   "抓伤",
            "post_action"    :   (: use_poison :)
        ]),
        ([
                "action"     :   "$N高声长啸，一招‘魔音穿脑’，震得$n七孔渗血", 
                "dodge"      :   -20,
                "parry"      :    25,
                "damage"     :    90,
                "damage_type":   "内伤"
        ]),
        ([
                "action"     :   "$N双膝微屈，做跪拜投降之势，却趁机双爪猛攻$n下盘，正是一招‘鬼魅拜月’",
                "dodge"      :    30,
                "parry"      :   -30,
                "damage"     :    160,
                "force"      :    160,
                "damage_type":   "抓伤",
            "post_action"    :   (: use_poison :)
        ]),
        ([
                "action"     :   "$N身形一转使出‘恶鬼招魂’，霎时风声鹤唳，爪影重重，忽的一爪成弧状划向$n的喉咙",
                "dodge"      :   -50,
                "parry"      :    15,
                "damage"     :    130,
                "force"      :    60,
                "damage_type":   "割伤",
                "weapon"     :   "毒爪",
            "post_action"    :   (: use_poison :)
        ]),
         ([     "action"     :   "$N狂啸一声，使出‘灭天绝地暴风掌’，刹那间掌影已拢罩$n的全身",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    230,
                "force"      :    200,
                "damage_type":   "内伤",
           ]),
          ([    "action"     :   "$N脸色一沈，集全灵之力，使出必杀招‘魔极之源’",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    200,
                "force"      :    180,
                "damage_type":   "割伤",
                "weapon"     :   "毒爪",
            "post_action"    :   (: use_poison :)
            ]),
   });
 
void create()
{
        set_name("秦广明王",({"king chin kuang","king","chin","kuang"}));
        set("race", "妖魔");
	set("age",1000);
        set("long","你看的一个威严的老者，正手捻胡须，双目精光逼视着你，仿佛要看进你内心深处\n");
        set("str",30);
        set("cps",30);
        set("kar",20);
        set("spe",20);
        set("int",20);
        set("cor",30);
        set("limbs", ({"头部", "胸部", "腿部", "手臂"}) );
        set("verbs", ({ "bite"}));
 
        set("attitude","herosim");
        set("combat_exp",100000);
        set_skill("dodge",260);
        set_skill("unarmed",200);
        set("chat_chance",10);
        set("chat_msg",({

          "有心为善，虽善不赏;无心为恶，虽恶不罚。\n",
          "既然来到地狱，就该有接受酷刑的准备。\n",
        }));

        set("chat_chance_combat",200);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set_temp("apply/defend",100000);
        set_temp("apply/armor",100000);
        setup();
        set("default_actions", (: call_other, __FILE__,"query_action" :));
	reset_action();
}
 
mapping query_action()
{
        return action[random(sizeof(action))];
}
void use_poison(object me, object viction)
{
// here can write many thing u want
   viction->apply_condition("dark_poison",100+viction->query_condition("dark_poi
son") );
}
void do_special()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];

                message_vision(
        HIY "\n夜叉大喝一声，看我的‘夜叉独门绝技’～～～毒  龙  钻\n",target);
                message_vision(
        HIB "\n夜叉手上的双爪突然快速旋转由意想不到的位置攻击!!\n"NOR,target);
                target->receive_wound("kee",random(50+100));
                COMBAT_D->report_status(target);

  }
