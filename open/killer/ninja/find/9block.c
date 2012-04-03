// open/killer/ninja/find/9block.c
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short","九宫迷阵起点");
  set ("long", @LONG
  
    看来你来到了一个奇怪的地方，一旁有一个告示牌
    ‘此为九宫迷阵的起点，往北将正式进入迷宫
      如果在迷宫中发生任何错误，将会退回到起点’
    
LONG);
 
  set("exits", ([ /* sizeof() == 1   */
      "north" : __DIR__"9block2.c",   ]));
  set("no_transmit",2);
  setup();
}

void init()
{
    this_player()->delete_temp("wrongway");
}
