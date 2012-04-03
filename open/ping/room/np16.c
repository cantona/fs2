#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "回廊");
  set ("long", @LONG
走进这里, 是一条长廊, 往西通往大师兄柳毅风的住处, 往南则
是前庭及回廊, 回廊上铺着上好的大红地毯, 衬托出一股庄严的气氛。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"np17",
  "west" : __DIR__"np21",
  "east" : __DIR__"np13",
]));
  set("light_up", 1);

  setup();
}
