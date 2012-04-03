// Room: /open/main/room/M19.c

inherit ROOM;

void create ()
{
  set ("short", "少室山");
  set ("long", @LONG
你身处横贯大陆的天山山脉的一支，嵩山。由于千年古刹--少林寺
就是在北边的山头上，所以又叫少室山。从这儿远远往北边的山头看过
去，你可以发现隐隐约约出现一座山门，不过因为太远了看不到门上面
到底写了些什么，不过你猜想，应该是少林寺字样吧。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/main/room/M20",
  "northup" : "/open/main/room/M15",
]));

  setup();
}
