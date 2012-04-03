#include </open/open.h>
#include <ansi.h>

inherit NPC;

void create()
{
      set_name("乞丐",({"pauper"}) );
      set("long",@LONG
一个衣衫褴褛的乞丐，沿街在向人乞讨着。年纪似乎便只有卅出头，手上却拿着一只
拐杖(crutch)；你突然心念一动，莫非...
LONG
      );
      set("age",32);
      set("attitude","friendly");
      set("gender","男性");

      set_skill("unarmed",30);
      set_skill("dodge",30);
      set_skill("parry",30);
      set("combat_exp",450);

      set("inquiry",([
          "拐杖" : "你不给我钱便罢了，你问这干嘛？\n",
          "crutch" : "你这么喜欢啊？一两黄金，不要拉倒。\n",
          "盲眼人" : "你...我不知道你在问啥啦！\n",
      ]) );

      set("chat_chance",2);
      set("chat_msg",({
          (:random_move:),
          "乞丐拉了拉你的衣角，向你乞讨。\n",
          "乞丐说道：好心的老爷啊．．\n",
      }) );

      setup();

      carry_object("/obj/cloth")->wear();
}

int accept_object(object me,object ob)
{
      object crutch;
      me=this_player();
      if( ob->value()>=10000 ) {
            tell_object(me,"乞丐喜道：哈！这么多钱，要十只拐杖也给你了。\n");
            message_vision("乞丐拿给$N一根拐杖。\n",me);
            crutch = new(BAD_OBJ"crutch");
            crutch -> move(me);
            tell_object(me,"乞丐得意的说：下次想买拐杖时，记得找我啊。哈！\n");
            return 1;
      }
      else
      return notify_fail("乞丐嫌道：喂！拜托，这点钱哪够啊？有诚意点嘛！\n");
}
