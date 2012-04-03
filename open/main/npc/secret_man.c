//secret_vendor.c
//神秘小贩...只卖替身
void do_patrol();
inherit NPC;
void create()
{
        set_name("神秘小贩",({"vendor"}));
        set("gender", "男性" );
        set("age", 27);
set("long", @LONG
狂想传说中的神秘小贩,听说他经营替身人偶(standby)的买卖,若你要的话可以打(want standby)跟他买!!!!
或是打(sell standby)把身上的替身人偶卖掉!!!!!

LONG
        );
        set("combat_exp",10000000);
        set("chat_chance",2000);
        set("chat_msg",({
            (: do_patrol :),
        }));
        set("attitude", "friendly");
        set("max_kee",7000);
        set("max_sen",6000);
        set("max_gin",5000);
        set("standby",99999);
        set_skill("dodge",500);
        set_skill("parry",500);
        set_skill("unarmed",500);
        set_skill("move",500);
        set_skill("force",500);
        set_skill("universe",500);
        set_skill("superforce",500);
        set_skill("ghost-steps",500);
        map_skill("unarmed", "universe");
        map_skill("parry","universe");
        map_skill("force", "superforce");
        map_skill("dodge", "ghost-steps");
        map_skill("move", "ghost-steps");
        setup();
}
void init()
{
  add_action("do_want","want");
  add_action("do_sell","sell");
  add_action("do_follow","follow");
  add_action("do_perform","perform");

}

int do_want(string arg)
{
 object me,ob;
 me=this_player();
 if( arg!="standby")
  {
    write("你只能买替身(standby)!!\n");
    return 1;
  }
 if(me->query("bank/coin") < 2000000000)
  {
    write("你在钱庄的钱不够,需要二十万两黄金!!\n");
    return 1;
  }
 else
  {
    me->set("bank/coin",0);
    write("你向神秘小贩买到了一个保命金身(standby)!!!\n");
    me->add("standby",1);
    return 1;
  }
}
int do_sell(string arg)
{
 object me,ob;
 me=this_player();
 if( arg!="standby")
  {
    write("你只能买替身(standby)!!\n");
    return 1;
  }
 if(me->query("standby") < 1)
  {
    write("你身上没有替身人偶了说!!\n");
    return 1;
  }
 else
  {
    if( me->query("bank/coin") != 0)
      return notify_fail("请先将钱庄的 coco 都领出来，不然钱庄会暴掉喔!!!\n");
    me->add("bank/coin",2000000000);
    write("你卖了一个替身给小贩,共二十万两黄金!!!\n");
    me->add("standby",-1);
    return 1;
  }
}

int do_follow(string arg)
{
 object me,ob;
 me=this_player();
 if( arg!="vendor")
    return 1;
 write("神秘小贩使出超绝轻功......瞬间脱离你的视线了........!!\n");
 this_object()->move("/u/c/chan/workroom.c");
 return 1;
}
int accept_fight(object who)
{
 command("say ...偶!偶!偶!..讨厌打架..。\n");
 return 0;
}
int accept_kill(object who)
{
  command("say 找死!!!\n");
  write("小贩身上发出强大的真气,压迫你不知道如何是好\n");
  who->start_busy(2);
  kill_ob(who);
  return 1;
}
int do_perform(object who)
{
  who=this_player();
  command("say 找死!!!\n");
  write("小贩身上发出强大的真气,压迫你不知道如何是好\n");
  who->start_busy(2);
  kill_ob(who);
  return 1;
}

void do_patrol()
{
  if( random(6) == 1)
        command("go north");
  else if( random(6) == 2)
        command("go south");
  else if( random(6) == 3)
        command("go east");
  else if( random(6) == 4)
        command("go up");
  else if( random(6) == 5)
        command("go down");
  else  command("go south");
return;
}
