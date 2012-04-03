// Room: /open/ping/room/soldier4
inherit ROOM;

void create ()
{
  set ("short", "大营");
  set ("long", @LONG
你走进了一座朴素的帐棚里,雄雄的炉火在棚中点着,书卷,
兵器随地的摆着,棚中还摆着一张檀木桌,这的主人必然不讲就
生活.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"soldier3",
]));
  set("objects", ([
      "/open/ping/npc/general.c" : 1,
     ]) );
  set("light_up", 1);

  setup();
}
