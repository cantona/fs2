// Room: /u/u/unfinished/room/j1.c
inherit ROOM;

void create()
{
  set ("short", "界港");
  set ("long", @LONG
就港口ㄇㄟ.......先随便打一打...
LONG);

  set("exits", ([ /* sizeof() == 1 */
  0 : __DIR__"quest",
]));
  set("outdoors", "/u/u");
  setup();
}
