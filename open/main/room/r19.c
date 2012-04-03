// Room: /open/main/room/r19.c

inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
这里是从驿站通往北卢关必经的要道, 往南就是中央驿站, 人来人
往, 在这儿似乎还可以听到声音.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/main/room/F12",
  "north" : "/open/main/room/r12",
  "south" : "/open/center/room/road1",
]));

  set("outdoors", "/open/main");

  setup();
}
