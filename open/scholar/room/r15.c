// /u/j/judd/room/r15.c
inherit ROOM;

void create ()
{
  set ("short", "中堂东侧");
  set ("long", @LONG
来到此处，只见一个指向东北方箭标画在墙上==>>风室图书馆，
而地上有一条亮白色的道路通往东北方，到底儒门的四大图书馆各有
什么不同，只有全部都看过了才会知道，也许风室图书馆会有教人如
何借东风的方法也说不定.........
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"r11.c",
  "south" : __DIR__"r18.c",
]));
  set("light_up", 1);

  setup();
}
