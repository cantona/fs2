#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","总坛大厅右翼");
  set ("long", @LONG
这里是黑牙联总坛大厅右翼，也是通往黑牙联最强的红叶暗杀组的通道。
这样的设计是为了保护大厅的安全，然而没有叶秀杀命令，他们也不敢主动保护。
然而，必须小心的是不知道何时会有人从你背后冒出来，然后给你一刀。
目前的通道，极为狭长，两旁似乎隐藏了不少机关。
要是有人想进攻此处，必定会在此遭到夹击。
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west":__DIR__"ru4",
  "north":__DIR__"ru8",
]));

/*  set("objects",([
        "/open/killer/npc/hu_fa1.c" : 1,
        ]));  */
  setup();
}