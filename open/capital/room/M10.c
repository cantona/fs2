// Room: /open/capital/room/M10.c

inherit ROOM;

void create ()
{
  set ("short", "达布政司");
  set ("long", @LONG
达布政司, 专门管理城内柴米油盐酱醋茶以及房屋租售的问题，若
你想买个家，这里将会提供你完整的资讯。
    墙上挂着一幅布告(note)。

LONG);

set("item_desc", ([
"note" : "ㄜ...还没有巫师开始写耶, 不好意思。  :P\n",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r58",
]));
  set("light_up", 1);

  setup();
}
