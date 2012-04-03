// Room: /u/d/dhk/questsfan/room10
inherit ROOM;

#include <room.h>
#include <ansi.h>
void create ()
{
  set ("short", "晶谷入口");
  set ("long", @LONG
你定神一看，吓了一跳。刚刚在木栅外看此地外观像
足一座小山岭，岂知一通过木栅后，映入眼帘的竟是一座
山谷而呈旋涡状向下。由此地整个鸟瞰下，所见之奇景，
四周闪烁着各色的光华，各色似水晶的珍矿实所生平未见
。
LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"room11",
  "out" : __DIR__"qroom/room5",
]));

set("need_key/out",1);
create_door("out",HIY"大木栅栅门"NOR,"enter",DOOR_LOCKED);
  setup();
}
