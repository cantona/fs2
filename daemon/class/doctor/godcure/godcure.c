
// godcure.c
// 10                           ->内伤药(health-medicine)
// 10                           ->去春丸(flower-medicine) 
// 20                           ->调气丹(force-medicine)
// 30                           ->蛇毒的解药(snake-medicine)
// 30                           ->火玫瑰毒的解药(rose-medicine)
// 40                           ->外伤药(outhealth-medicine)
// 50 十年梗树茎(tree item)     ->碧灵丹(bilin pill)
// 50 九节菖蒲(nine item)       ->九转金丹(nine pill)
// 50 太乙山青草(taii item)     ->太乙青冥丹(taii pill)
// 60 百年人蔘(seng item)       ->人蔘伏灵露(fulin pill)
// 70 人灵草(human item)        ->人灵丹(human pill)
// 80 地灵草(ground item)       ->云龟破气散(ugeposisan)
// 90 天灵草(sky item)          ->天灵散(sky pill)
//100 (天,地,灵草三草合一)      ->未定(预定是力量增强济)
#include <ansi.h>
inherit SKILL;
mapping make = ([
	             "force": ([
		                   1:"gold stone",
		                   2:"flower iron",
                       		   3:"green stone",
		                                    ]),
         	     "health": ([]),
	             "outhealth": ([]),
	             "rose": ([]),
	             "snake": ([]),
	             "flower": ([]),
                     "fulin":([ 0:"seng item",    ]),
                     "bilin":([ 0:"tree item",    ]),
                     "nine":([ 0:"nine item",    ]),
                     "taii":([ 0:"taii item",    ]),
                     "sky":([ 0:"sky item",     ]),
                     "ugeposisan":([ 0:"ground item",  ]),
                     "human":([ 0:"human item",   ]),
                     "dragon":([ 0:"sky item",
                                1:"ground item",
                                2:"human item",   ])
               ]);

mapping make_improve = ([
                              "force" : 1,
                              "health": 1,
                              "outhealth": 1,
                              "rose"  : 1,
                              "snake" : 1,
                              "flower": 1,
                              "fulin" : 2,
                              "bilin" : 1,
                              "nine"  : 1,
                              "taii"  : 1,
                              "sky"   : 2,
                              "ugeposisan": 2,
                              "human" : 2,
                              "dragon"  : 2.5,
                         ]);

mapping make_name = ([
                              "force": "调气丹",
	                      "health": "内伤药",
         	              "outhealth": "外伤药",
	                      "rose": "火玫瑰毒的解药",
	                      "snake": "蛇毒的解药",
	                      "flower": "去春丸",
                              "fulin":"人参茯苓露",
                              "bilin":"碧灵丹",
                              "nine":"九转金丹",
                              "taii":"太乙青冥丹",
                              "sky":"天灵丹",
                              "ugeposisan":"云龟破气散",
                              "human":"人灵丹",
                              "dragon":"神龙活气丸",
                    ]);
mapping make_need_lv = ([
                              "force" : 20,
                              "health": 10,
                              "outhealth": 40,
                              "rose"  : 30,
                              "snake" : 30,
                              "flower": 10,                              
                              "bilin" : 50,
                              "nine"  : 50,
                              "taii"  : 50,
                              "fulin" : 60,
                              "human" : 70,
                              "ugeposisan": 80,
                              "sky"   : 90,
                              "dragon": 100,
                    ]);

int valid_enable(string usage)            {
        return (usage=="cure");
        }
int valid_learn(object me)                {
        return 1;
        }
int practice_skill(object me)             {
        return notify_fail("华陀医术只能用学的。\n");
        }
int make(object me,string name)
{
        object medicine;
        int i;
        mapping dict;
        string pstr="";
        if(!make[name])
                return notify_fail("华陀医术中没有这种药耶。\n");
        if(me->query_skill("godcure",1)<make_need_lv[name])
                return  notify_fail("你的华陀医术程度不够，无法练制这种药。\n");
        dict=make[name];
        for(i=0;i<sizeof(dict);i++)
        {
              if(!present(dict[i],me))
                return notify_fail("你的配料不足，无法练制。\n");
              medicine=present(dict[i],me);
              pstr+="("+medicine->name()+")";
        }
        message_vision(
        "$N用"+pstr+"来做"+make_name[name]+"。\n",me);
        for(i=0;i<sizeof(dict);i++)
                destruct(present(dict[i],me));
        for(i=0;i<5;i++)
        {
                medicine = new("obj/medicine/"+name+"_medicine");
                medicine->set("medicine_power",me->query_skill("cure")/10);
                medicine->move(me);
        }
  if(me->query_skill("godcure",1) < 100)
  {
    i = me->query("int")/3
        + make_improve[name]*(me->query_skill("cure",1)/20);
    me->improve_skill("godcure",random(i));
  }
   return 1;
}
string perform_action_file(string action) {
        return CLASS_D("doctor")+"/godcure/"+action;
        }


