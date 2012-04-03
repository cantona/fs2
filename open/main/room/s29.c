// Room: /open/main/room/s29.c

inherit ROOM;

void create ()
{
  set ("short", "草原");
  set ("long", @LONG
这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"L25",
  "south" : __DIR__"s36",
	"north" : "/open/main/room/[3]",
  "east" : __DIR__"s30",
]));
  set("outdoors", "/open/main");

  setup();
}
