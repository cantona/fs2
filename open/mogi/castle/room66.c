inherit ROOM;
#include <ansi.h>
#include <castle.h>
void create ()
{
  set ("short", "锁仙室");
  set ("long", @LONG
甫进此房间，你就感到一股魔气袭人，缠绕得你浑身不舒服。看来这里
就是焚天魔王用来拘禁风青云的所在，在这种地方待越久，身上就会沾
染越多魔气，终至魔气蒙心，本性全失。
LONG);

  set("evil", 1);
  set("no_auc", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yan" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room64",
//  "up" : "/open/god/sky/sky_start.c",
]));
  set("no_transmit", 1);

  setup();
}
