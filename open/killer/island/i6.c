inherit ROOM;

void create ()
{
  set ("short", "船舱通道");
  set ("long", @LONG
房间一, 叙述未想....
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"i5.c",
  "south" : __DIR__"i7.c",
]));

  setup();
}
