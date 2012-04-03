#include <ansi.h>

inherit NPC;

void create()
{
      set_name("醉汉",({"drinker"}));
      set("long","一个满身酒气的醉汉，正醉倒在这个巷道中。\n");
      set("age",40);
      set("attitude","friendly");
      set("gender","男性");

      set_skill("unarmed",80);
      set_skill("dodge",80);
      set("combat_exp",300000);

      set("chat_chance",2);
      set("chat_msg",({
          "醉汉叹道：啊~~世事如棋啊...\n",
          "醉汉叹道：人生事，难尽如意啊~~\n",
      }));

      setup();
      carry_object("/obj/cloth")->wear();
}

int accept_fight(object me)
{
      write("醉汉摇了摇头说道：嘿!命只有一条，何必呢??\n");
      return 0;
}
