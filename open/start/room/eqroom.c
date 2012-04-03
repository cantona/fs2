// Room: /open/start/room/eqroom
inherit ROOM;

void create()
{
  set ("short", "儒门储藏室");
  set ("long", @LONG
这里是专让儒门子弟堆一些东西的房间。
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"small_house",
]));
  set("no_clean_up", 1);
  setup();
}
