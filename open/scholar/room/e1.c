// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
这是通往儒门学识厅的一条走道，走道的两旁挂满着
许许多多的画，且画中有诗，儒生们喜欢一边看着画，一
边互相考考彼此的文学造诣。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r20.c",
  "east" : __DIR__"e2.c",
]));

  setup();
}
