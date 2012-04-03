#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set("title","黑牙联前代兵器使");
set_name("完颜宏烈",({"hou-la","hou","la"}));
set("long","他是陷害柴荣叛变得背德小人，令人不耻，但你还是得小心一点。\n");
set("gender","男性");
        set("attitude","aggressive");
set("age",60);
set("int",30);
set("per",30);
set("str", 15);
set("con", 30);
set("force",400);
set("max_force",400);
set("combat_exp", 250000);
set_skill("force",50);
set_skill("dodge",50);
set_skill("parry",50);
setup();
add_money("gold",5);
}

int accept_kill(object who)
{
   say("小家伙，你也想对付我？太自大了！！\n"
        +"我至少也是黑牙联的兵器使呀！！!\n");
   setup();
   return 1;
}

void die()
{
   object head;
   object killer=query_temp("last_damage_from");
   
 if ( !present("menu",killer) )  //检查玩家是否有杀人名单
{
   say(HIG"可恶！天魔解体大法给你吧！\n"NOR);
   message_vision(HIG"他一溜烟的消失了，只留下那一本天魔解体大法....\n",this_object());
   message_vision("正当得意，取的天魔解体大法时，忽然一道气劲来袭，\n让你气血翻腾，快昏倒了，在昏倒前听到\n"NOR,this_object());
   message_vision(HIY"受了(魔气杀之伤)你是保不住的，可恶的叶。。。\n"NOR,this_object());
   killer->set_temp("hurt",1);
   killer->move("/open/killer/room/outr4.c");
   destruct(this_object());
}
 else
 {
  say(HIG"为了杀人名单来杀我？..........可恨呀....居然会死于你的手上....含恨呀....\n"NOR);
   head=new("/open/killer/obj/hou_head.c");
   head->move(this_object());
 }
::die();
}
