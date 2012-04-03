#include <ansi.h>

inherit NPC;

void create()
{
      set_name("长臂猿",({"gibbon"}));
      set("long",@LONG
一只在树上的长臂猿，正以它长长的手臂在树与树之间荡来荡去；见你来了也不
以为意，只是龇牙裂嘴的扮个鬼脸罢了。
LONG
      );

      set("race","野兽");
      set("gender","雄性");
      set("age", 5);
      set("attitude","peaceful");

      set("limbs",({"头部","腹部","前腿","尾巴","后腿"}));
      set("verbs",({"bite","claw"}));

      set_skill("dodge",30);
      set_temp("apply/armor",20);
      set_temp("apply/attack",30);
      set("combat_exp",3850);


      set("chat_chance",1);
      set("chat_msg",({
          (:random_move:),
          "长臂猿从身上抓了个东东(小百科:应是盐份之类)，便放进了嘴里。\n",
          "长臂猿抓了抓头，瞧了你几眼。\n",
      }));

      setup();
}

void die()
{
      object killer;
      killer=query_temp("last_damage_from");
      killer->set_temp("blood",1);
      message_vision("几滴鲜血溅到了$N的衣服上。\n",killer);
      ::die();
}
