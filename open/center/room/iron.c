// Room: /u/p/powell/room/iron.c

inherit ROOM;

void create ()
{
  set ("short", "驿站铁铺");
  set ("long", @LONG
这是一间小铁铺, 平常以帮农夫村妇们打造菜刀、锄具并修理坏掉的铁
制器具为主, 由于最进马贼强盗为害, 店主也开始卖起些重型或轻型的防身
武器来, 甚至还兼营起武器、防具的买卖。如果你对武器、防具有兴趣, 开
口问问店主吧!
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/center/room/road2",
]));

  set("light_up", 1);

  setup();
}
