// Room: /open/main/room/s15.c

inherit ROOM;

void create ()
{
  set ("short", "草原");
  set ("long", @LONG
这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/wolf" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s19",
  "west" : __DIR__"r20",
  "north" : __DIR__"r14",
  "east" : __DIR__"s16",
]));

  setup();
}
