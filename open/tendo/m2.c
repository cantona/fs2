// Room: /d/oldpine/epath2.c

inherit ROOM;

void create ()
{
	set ("short", "道路");
  set ("long", @LONG
沿着道路行走，往西望去即是绵亘不绝的昆仑山脉。沧茫的
景色和略带着几分寒意的冷风，让你不自觉的多加了几件衣服。

LONG);

  set("objects", ([ /* sizeof() == 1 */
//"/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
"west" : "/open/tendo/m3",
"south" : "/open/tendo/m1",
]));

  setup();
}
