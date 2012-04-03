#include <ansi.h>
inherit NPC;
 
void create()
{
      set("title","晚月庄第二代舞者");
      set_name("水灵儿",({"linr"}) );
      set("gender","女性");
      set("age",20);
      set("attitude","friendly");
      set("class","dancer");
      set_skill("unarmed",100);
      set_skill("dodge",100);
      set("combat_exp",9999990);
 
      set("chat_chance",1);
 
      set("inquiry",([
           "明月" : "就是这次我找他签名的这个巫师啊!!\n",
           "tide" : "tide=明月，do you know...?\n",
           "FS"   : "这你都不知道，那你现在是在玩哪个MUD呢??\n",
           "ode"  : "就是明月的师父啊!!明月的本事都是他教的呢!!\n",
           "wade" : "FS的天神啊!!听说明月蛮崇拜他的耶!!\n",
       ]));
 
      setup();
 
      carry_object("/obj/cloth")->wear();
}
 
void init()
{
      object me;
      ::init();
      if( interactive( me=this_player()) && !is_fighting() ) {
        if( me->query("id")=="lum" ) {
          write ("周会敏喜道：哇！明月来了！签名、签名。\n");
        }
        if( me->query("id")=="lopo" ) {
          write ("周会敏感激道：哇！是风灵耶....谢谢你那么帮明月。谢谢！\n");
          command("kiss "+me->query("id"));
        }
        if( me->query("id")=="oda" ) {
          write ("周会敏惊道：你...你不是tide的师父？久仰、久仰...\n");
          message_vision(HIC"周会敏盈盈的向$N磕了个头，说道：我代tide谢谢你。\n"NOR,me);
          command("thank "+me->query("id"));
        }
        remove_call_out("greeting");                                                 remove_call_out("greeting");
        call_out("greeting",2,me);
      }
}
 
void greeting(object me)
{
      if( !me||environment(me)!=environment() ) return;
      switch ( random(3) ) {
      case 0:
      write("周会敏问道：你也是来找明月签名的吗？还是有啥事。\n");break;
      case 1:
      write("周会敏说道：我先来的喔，待会儿明月来时，我是第一让他签名的喔。\n");
      break;
      case 2:
      write("周会敏喜道：啊！我认识你，你也是FS的巫师嘛。签名、签名！\n");
      break;
      }
}
