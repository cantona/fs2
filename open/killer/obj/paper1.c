#include <ansi.h>
inherit ITEM;
void create()
{
        set_name("老旧的牛皮", ({ "papers" }) );
        set("long","好老旧的牛皮，或许可以（watch)吧！\n");
        set_weight(10);
        set("unit", "张");
        set("value", 0);
        set("no_sell", 1);
        set("no_give", 1);
}

void init ()
{
 add_action ("do_watch","watch");
}

int do_watch(string arg)
{
   int sk;
   object ob,me,target;
   string str;
   me = this_player();
   ob = this_object();

   if( arg != "papers" )
       return notify_fail("你想看什么呀？？\n");
   if (me->query("class") != "killer")
   {
      tell_object(me,"作弊！去死吧！！你发现自己有点发昏，然后就不醒人事了！\n"); 
       me->move("/open/death/start");
      return 1;
   }

   if( me->query_temp("mission3") != 2)
   {
     tell_object(me,"你看了一眼，居然发现自己有点发昏，然后就不醒人事了！\n"); 
     me->move("/open/killer/room/masterm.c");

     me->delete_temp("mission3");
     destruct(this_object());

     return 1;
   }
   tell_object(me,"往旭日升起的方向，走三步\n"); 
   tell_object(me,"往山之阴的方向，走一步\n"); 
   tell_object(me,"不往东南北的方向，走两步\n"); 
   tell_object(me,"往陆地最多的方向，走一步\n"); 
   tell_object(me,"往总坛在京城的方向，走两步\n"); 
   me->set_temp("mission3",3);
return 1;
}
