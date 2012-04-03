// Room: /open/main/room/F10.c

inherit ROOM;

void create ()
{
  set ("short", "密林");
  set ("long", @LONG
这里是一片浓密的森林，高大的树木，交织的枝叶，竟将
天日给遮敝了，你仔细聆听，似忽有野兽正在咆啸，你想你最
好离开这里.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"F9",
  "east" : __DIR__"F11",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/lion" : 1,
]));

  setup();
}
