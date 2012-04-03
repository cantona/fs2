#include <ansi.h>
#include <combat.h>
inherit NPC;
string magic1();
string magic2();
#define bell_big 400
#define bell_small 200
#define SPELLLVL 100
#define MANACOST 150
#define INVCOST 18
int special_att ();
object room2;

void create()
{
     set_name("镇塔明王",({"tower king","king"}));
     set("title",HIW"天界之神"NOR);
     set("long","他奉命下凡镇守锁妖塔.........\n");
     set("gender","男性");
     set("class","taoist");
     set("age",1200);
     set("str",70);
     set("kar",70);
     set("per",50);
     set("cps",70);
     set("cor",70);
     set("combat_exp",500000);
     set("spi",70);
     set("int",70);
     set("max_kee",1800);
     set("kee",1800);
     set("max_sen",3000);
     set("sen",3000);
     set("max_force",2000);
     set("force",2000);
     set("gin",2000);
     set("max_mana",2500);
     set("mana",2500);
     set("max_atman",2500);
     set("atman",2500);
     set_skill("force",80);
     set_skill("gforce",80);
     map_skill("force","gforce");
     set_skill("dodge",80);
     set_skill("g-steps",80);
     map_skill("dodge","g-steps");
     set_skill("magic",80);
     set_skill("gmagic",80);
     map_skill("magic","gmagic");
     set_skill("whip",90);
     set_skill("gwhip",100);
     map_skill("whip","gwhip");
     set_skill("parry",80);
     map_skill("parry","gwhip");
     set_skill("spells",80);
     set_skill("necromancy",80);
     map_skill("spells","necromancy");
     set("force_factor",10);
     set("chat_chance_combat",50);
     set("chat_msg_combat", ({
     (: special_att :),
     (: magic1 :),
     (: magic2 :),

}));
setup();
     carry_object("/open/tendo/room/tower/obj/kwhisk")->wield();
     carry_object("/open/tendo/room/tower/obj/karmband")->wear();
     carry_object("/open/tendo/room/tower/obj/kbelt")->wear();
     carry_object("/open/tendo/room/tower/obj/kcape")->wear();
     carry_object("/open/tendo/room/tower/obj/kcloth")->wear();
     carry_object("/open/tendo/room/tower/obj/khat")->wear();
     carry_object("/open/tendo/room/tower/obj/klegging")->wear();
     add_money("gold",10);
     command("wield all");
     command("wield all");
}
string magic1()
{
 if (this_object ()->query ("sen") >30) {
 "/daemon/class/taoist/necromancy/invocation"->cast_soldier(this_object(),"lumob");
}
return "\n";
}
string magic2()
{
if(random(2))
command("cast feeblebolt");
else command("cast missible");
return "\n";
}
int spell ()
{
  return SPELLLVL;
}

int manacost ()
{
  return MANACOST;
}

int invcost ()
{
  return INVCOST;
}

int special_att ()
{
  object me = this_object ();
  object *enemy = query_enemy (), victim;
  int i = sizeof (enemy), damage;
  victim = enemy[random(i)];
      message_vision(HIB+
"              镇塔明王怒气狂提，不顾身上的伤口，不断地将内力运至十二成。\n        
                          "HIR"镇塔明王身上发出一股强大的杀意\n
                 "HIY"镇塔明王的全身开始聚起强烈的"HIW"寒冰"HIW"与"HIR"烈火"HIY"两道环身气劲，\n
                      "HIW"～ 两道气劲源源不断的向手上凝聚！ ～\n
                              "HIY"倏地镇塔明王大喝一声\n
                 "HIY"左手使出一招"RED"天书"MAG"绝学"HIY"中之终极奥义 - -"HIW"寒 冰 劲"HIY"－-\n
                 "HIC"右手一翻使出"RED"天书"MAG"绝学"HIC"中之武学秘技 ～～"HIR"烈 火 劲"HIC"～～ \n　
                   "HIB"只见寒冰与烈火两道气劲如狂风暴雨般地击向$N\n
                        "HIW"此乃天书之不秘之传"HIC" ‘"HIW"寒冰"HIR"烈火"HIW"劲"HIC"’\n"+NOR,me);

  if (random (2) >= 1)
    {
      damage = 30+(victim->query ("max_kee") / 8);
   if (damage < 40)
        damage = 40;
      if (damage > 250)
        damage = 250;
message_vision(HIR"$N闪躲不及,被寒冰烈火两道气劲透体而过,全身上下被烈火及寒冰包围着,不停的嘶吼!\n"NOR,victim);
      victim->apply_condition ("bleeding", random (i * i));
      victim->receive_damage ("kee", damage, me);
      COMBAT_D->report_status (victim, 0);
    }
  else
    {
message_vision(HIW"只可惜离$N差了一点, 劈到地上, 轰的一声巨响, 地皮顿时裂了开来.\n"NOR,victim);
    }
  start_busy (1);
  return 1;
}
 int accept_fight(object me)
 {
  if((int)me->query("combat_exp")<=380000)
  {
  command("say 阁下还没有实力与我较量..");
  return 0;
  }
  command("say 请指教！");
  return 1;
 }

int accept_kill(object ob)
{
	message_vision( HIR "$n使出[1;37m天界绝学[0m之定身术使$N不能动弹。\n",this_player(),this_object());
	set("no_sword",1);
	this_player()->start_busy(3);
	return 1;
}
void die()
{
        object winner = query_temp("last_damage_from");
        tell_object(users(),
HIW"\n镇塔明王咽下最后一口气唉道:\n\n
                 "HIR"～ ～ ～天   啊～ ～ ～我～的～任～务～呀～\n
          "HIC"今日竟然会断送于"HIW""+winner->query("name")+""HIC"之手！！\n"NOR);


        :: die();
}

      


