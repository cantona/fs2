// Room: /open/badman/room/b15
inherit ROOM;

void create ()
{
  set ("short", "恶人谷南街");
  set ("long", @LONG
恶人谷南街由这儿开始转成东西向。与其它地方不同的是，你
隐约感觉到街道上有股不寻常的气息。也不知道为甚么，你感觉到
在行人熙熙攘攘的此处，竟好像有着丝说不出的压迫感。
 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/pauper.c" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"b16",
  "north" : __DIR__"b14",
]));

  setup();
}
