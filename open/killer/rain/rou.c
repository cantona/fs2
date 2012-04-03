#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string do_trial();

int accept_object (object me,object ob)
{
  object ob2;

  if (me->query_temp("rain_3") != 1)
  {
    command ("say 神经病，你给我这个干嘛！\n");
    return 0;
  }
  if(ob->query("id") == "low_letter") 
  {
     message_vision(" 柴荣将信收下来，将信拆开，仔细阅读\n",me);
     message_vision(" 看完信后，柴荣将信受入怀中\n",me);
     command("say 很好，你想找天魔解体大法，我就告诉你吧！\n");
     command("say 在总坛一楼，宿舍那里有一个往地下一楼的密道\n");
     command("say 有一个叛徒在那里，天魔解体大法就是被他取走\n");
     destruct(ob);
     me->set_temp("rain_4",1);
     return 1;
  }
  if(ob->query("id") == "evil_god") 
  {
     if (me->query_temp("rain_4") != 1)
     {
       command ("say 投机取巧，请别人拿！作弊！你给我滚！看掌\n");
       message_vision(" $N被柴荣一掌打飞，不知去向\n",me);
       me->move("/open/killer/home/firstrm.c");
       destruct(ob);
       return 0;
     }
     message_vision(" 柴荣仔细阅读了天魔解体大法之后，仰天长啸\n",me);
     command("shout 太好了，我们杀手后继有人，我就传你霸雨式吧！\n");
     destruct(ob);
     me->set("quest/rain",1);
     me->set_temp("rain_4",0);
     return 1;
  }
  return 0;
}

void create()
{
        set_name("柴荣",({"chil-rou","rou"}));
        set("long","传说此人曾为魔教的一员，后来因故加入黑牙联，又因故脱离。\n
                     因此擅长两家之长，又会杀手密技--霸雨式\n");
        set("gender","男性性");
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
        "阎影匕首" : "叶秀杀，叫你来的吗？可以，通过(试炼)再说吧\n",
        "试炼" : (: do_trial :),
        "庄静柔"   : "我对不起她。\n",
        ]));
        setup();
        carry_object("/open/killer/obj/lustar")->set_amount(100);
        add_money("gold",20);
}

string do_trial()
{
  object me = this_player();

   if(me->query("quest/rain") == 1)
   {
        command("say 有志气！不过试炼要很久哦。。。\n");
        // me->move("/open/killer/trail/beginrm.c");
        return"say 唉。。此谜还没做好，你请回吧\n";
   }
   command("sm "+me->query("id"));
   return "哼！不知道\n";
}
