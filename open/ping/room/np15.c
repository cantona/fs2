inherit ROOM;

void create ()
{
  set ("short", "回廊");
  set ("long", @LONG
长长的走道向前延伸, 这儿有许多房间, 是段家子弟的居所, 在
此切勿大声喧哗, 免的引人反感。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"np2",
  "north" : __DIR__"np14",
]));
  set("light_up", 1);

  setup();
}
