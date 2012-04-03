// Room: /open/capital/room/h11.c

inherit ROOM;

void create ()
{
  set ("short", "芝麻胡同");
  set ("long", @LONG
这里种了一棵大树, 树荫笼罩了整条大街, 因此附近的居民在中午
大太阳的时候都喜欢搬个椅子到树下坐坐, 聊聊天, 生活还挺惬意的样
子。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"h10",
  "east" : __DIR__"h12",
]));
  set("outdoors", "/open/capital");

  setup();
}
