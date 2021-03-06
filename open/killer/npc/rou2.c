// open/killer/npc/rou2.c	2001/12/11
// 这一个版本的柴荣是针对幻之忍杀开发出来的
// 因为柴荣将在幻之忍杀之后的杀手占有很重要的部分
// 为了降低程式的复杂度，所以另外做一个版本
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string do_trial();
string ask_step();

int accept_object (object me,object ob)
{//到时候这里要处理有关绿毛密令的部分，所以先不砍掉
  object ob2;

  if (me->query_temp("firstpart") != 11)
  {
    command ("say 神经病，你给我这个干嘛！\n");
    return 0;
  }
  if(ob->query("id") == "green_ring") 
  {
     message_vision(" 柴荣将金铃收下来，仔细的检查了一下\n",me);
     message_vision(" 点点头说，没错，这就是失落十几年的金铃\n",me);
     message_vision(" 就让我传授你分功化影身法吧....\n",me);
     message_vision(" 说完后柴荣快速的将身法的要点指导给你，并且演练\n",me);
     message_vision(" 因为你早有幻星步的基础，所以很快的就大有领悟\n",me);
     me->set_skill("dark-steps",50);
     command("say 为了要通过东瀛神风，你可以使用清风术来度过");
     command("say 你可以使用 perofrm dodge.wind-steps 来驱动");
     command("say 我想到此，第一阶段的谜题已经完成");
     destruct(ob);
     me->set("ninja/firstpart",1);
     me->set("dark-steps/wind-steps",1);
     return 1;
  }
  return 0;
}

void create()
{
        set_name("柴荣",({"chil-rou","rou"}));
        set("long","传说此人曾为魔教的一员，后来因故加入黑牙联，又因故脱离。\n
                     因此擅长两家之长，又会杀手密技--魔气杀\n");
        set("gender","男性");
        set("class","poisoner");
        set("nickname", HIR "神秘杀手" NOR);
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",27);
        set("str", 50);
        set("cor", 35);
        set("cps", 18);
        set("per", 30);
        set("int", 20);
        set("force",1000);
        set("max_force",800);
        set_skill("move",90);
        set_skill("force",60);
        set_skill("dodge",80);
        set_skill("parry",80);
        set_skill("poison",80);
        set_skill("whip",40);
        set_skill("throwing",100);
        set_skill("rain-throwing",110);
        set_skill("poisonforce",40);
        set("force_factor",10);
        set_skill("coldpoison",80);
        set_skill("nine-steps",80);
        map_skill("throwing","rain-throwing");
        map_skill("dodge","nine-steps");
        map_skill("move","nine-steps");
        set_skill("ming-snake",60);
        set("inquiry",([
        "试炼" : (: do_trial :),
        "特殊身法" : (: ask_step :),
        ]));
        setup();
        carry_object("/open/killer/obj/lustar")->set_amount(100);
        add_money("gold",20);
}

string do_trial()
{
  object me = this_player();

   if(!me->query("ninja/firstpart"))
   {//玩家必须要解过第一部份才可以解试炼的部分
        command("say 你想太多了，就连分功化影都的清风术都没学到，你想接受试炼？\n");
        return"say 好好的把该学的学到再说吧\n";
   }
   else
   {
   	command("sm "+me->query("id"));
   	//移动到练妖壶内的世界
   	//me->move("/open/killer/ninja/trailbeginrm.c");	
   	return "哼！不知道\n";
   }
}

string ask_step()
{
  object me = this_player();

   if(me->query_temp("firstpart") ==11)
   {//玩家必须要解过第一部份才可以解试炼的部分
        command("say 想要知道？把绿毛金铃给我再说\n");
        return"give green_ring to rou\n";
   }
   else
   {
   	command("sm "+me->query("id"));
   	me->set_temp("firstpart",6);
   	command("say 我不知道，你滚吧!\n");
   	me->move("/open/killer/room/pillrm.c");	
   	return "你别想知道!!!!\n";
   }
}

void init()
{
    object ob;
    ::init();
  if( interactive(ob = this_player())&& !is_fighting() ) {
    remove_call_out("greeting");
  call_out("greeting",1 , ob);   }
}

void greeting(object ob)
{
   if((ob->query_temp ("firstpart") !=5) && (ob->query_temp ("firstpart") !=11))
   {
    command("sm "+ob->query("id"));  
    command("say 你怎么来到这里的？说？!!"); }
   else 
    command("say 找我干嘛？!!！ \t");
}
