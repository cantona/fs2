inherit ROOM;

void create ()
{
  set ("short", "茅草屋");
  set ("long", @LONG
这是一间小小的茅草屋，这里有个老头，似乎正在哀嚎，不知道
所为何事？
LONG);

  set("objects", ([
  "/open/doctor/npc/oldman" : 1,
]));
  set("exits", ([
  "east" : __DIR__"m23",
]));
  setup();
}