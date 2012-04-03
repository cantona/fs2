// Room: /open/badman/room/t5.c

inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG
前头似乎有一点光线，不知道是不是出口快到了，你不禁加快
了脚步，想早一点离开这个令人作呕的地道。这里的空间好像比刚
才宽敞了一点，显得比较好走。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/badman/room/t4",
  "north" : "/open/badman/room/t6",
]));

  setup();
}
