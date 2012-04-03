// Room: /u/u/unfinished/room/is6.c
inherit ROOM;

void create ()
{
  set ("short", "斜坡");
  set ("long", @LONG
一条南北向的斜坡, 西边汹涌的海水不断的拍打着岩壁. 此地有许多树木,
东方即是茂盛的树林. 便地的碎石子让你感到移动不便. 在你的北方是一大片树
林, 看起来若要往北行就不得不穿过这片阴暗的树林, 最好备妥照明用具, 以免
在阴暗的树林中迷失.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"is1",
  "north" : __DIR__"is10.c",
]));
  set("outdoors", "/u/u");

  setup();
}
