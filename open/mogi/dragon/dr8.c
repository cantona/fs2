// Room: /u/p/poloer/dragon/dr8
inherit ROOM;

void create ()
{
  set ("short", "郊外小路");
  set ("long", @LONG
  一条被野草覆盖的小路，使你不得用手拨开草丛才能通
  行，并得小心亦亦的往前。前方似乎是个山谷似的，不过四
  周却没有任何生物，真是太奇怪了。

LONG);

  set("no_transmit", 2);
  set("outdoors", "/u/p");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"dr9",
  "east" : __DIR__"dr7",
]));

  setup();
}
