// Room: /open/gsword/room/gsword3-7.c
inherit ROOM;
#include <ansi.h>
 int done;
void create ()
{
    seteuid(getuid());    // 不是说要加这一行吗?
  set ("short", "藏剑室");
  set ("long", @LONG
一入房门 ,你马上感到寒气扑面而来 ,略一凝神 ,只见左首一个平台上 ,一个
暗绿色的盒子散发出无比的寒气 .而右首的墙壁上倒是挂者许许多多灿烂夺目
的宝剑. 两边倒是成为明显的对比.

LONG);


  set("exits", ([ /* sizeof() == 2 */
  "east":"/open/gsword/room/sproom.c"  
]));

  set("light_up", 1);
  set("no_clean_up",1);

  setup();
}

 void init()
{
 add_action("open_box","open");
 }
 
  int open_box(string str)
 {
  object me,ob;
  me =this_player();
  if( done== 0 )
      {
         message("system","[1;31m只见蜀山上空一道红光划空而过[0m\n",users());
         message_vision("惊愕之余 ,那道红光已渐渐的凝聚在$N手中\n",me);
ob=new("/open/gsword/obj/spsword-1.c");
         ob->move(me);
       }
    
   else
    message_vision("箱内竟是空无一物 ,你不禁呆了一会\n",me);
  done=1;
  return 1;
  } 
