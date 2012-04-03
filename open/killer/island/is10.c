// Room: /u/u/unfinished/room/is10.c
inherit ROOM;

void create ()
{
  set ("short", "树林");
  set ("long", @LONG
你身在茂盛的树林之中, 树叶遮蔽了阳光, 森林中一片黑暗, 从四周不时传
来奇异动物的叫声, 在这阴暗的空间听起来格外阴森诡异. 在野兽的嚎叫声中,
你隐约听见在你的东边有些许流水的声音. 东边的地势似乎比较高耸, 而在北边
久是树林的出口.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"is14.c",
  "east" : __DIR__"is11.c",
  "south" : __DIR__"is6",
]));

  setup();
}
