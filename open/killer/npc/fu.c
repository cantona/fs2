#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set("title","金刀门弟子");
set_name("凤姑",({"fu-kou","fu","kou"}));
set("long","她是前黑牙联杀手，但是背叛组织加入金刀门，目前被派来查探杀手总坛。\n");
set("gender","女性");
        set("attitude","friendly");
set("age",35);
set("int",30);
set("per",30);
set("str", 40);
set("con", 30);
set("force",400);
set("max_force",400);
set("combat_exp", 350000);
set_skill("force",30);
set_skill("dodge",75);
set_skill("parry",75);
setup();
add_money("gold",2);
}

int accept_kill(object who)
{
   say(HIY"糟糕！被发现了！！\n"NOR);
   setup();
   return 1;
}

void die()
{
   object head,killer;
 
   killer=query_temp("last_damage_from");
   if(killer->query_temp("kill_fu") != 1 )
   {
     message_vision(HIY"可恶！居然会败在你的手下,无法完成任务了\n"NOR,this_object());
     message_vision("说完之后他就倒下了。。。。\n",this_object());
     head=new("/open/killer/obj/fu_head.c");
     head->move(this_object());
   }
   if (killer->query_temp("kill_fu") == 1)
   {
     message_vision(HIY"居然为了一个香包，我会死在黑牙联。。。含恨呀！\n"NOR,this_object());
     message_vision("说完之后他就倒下了。。。。\n",this_object());
     head=new("/open/killer/obj/fu_page.c");
     head->move(this_object());
   }
   ::die();
}