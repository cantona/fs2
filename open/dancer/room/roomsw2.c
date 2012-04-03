// Room: /open/dancer/room/roomsw2.c :cgy

inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
夜梦小筑的走廊，东边可到练舞场，南北两旁的墙上雕塑
着许多美丽的雕像，令你不禁驻足观赏，向西则是梦月阁想要
生上的必需品的话就到那吧....


LONG);
  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/dancer/room/roomsw1.c",
  "west" : "/open/dancer/room/roomsw3.c",
]));

  set("light_up", 1);

  setup();
}
