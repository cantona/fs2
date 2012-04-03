// Room: /open/marksman/room/room2-1
inherit ROOM;

void create ()
{
  set ("short", "草原");
  set ("long", @LONG
一望无际的大草原，身旁的草长的都比人还高了，
    草中还有少许小动物，跑来跑去的，走起路来
    可要小心一点啰。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/main/room/s33",
  "south" : __DIR__"room2-2",
]));
  set("outdoors", "/open/marksman");

  setup();
}
