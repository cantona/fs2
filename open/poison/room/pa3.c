// Room: /u/r/ranko/room/pa1.c
inherit ROOM;

void create ()
{
  set ("short", "小路");
  set ("long", @LONG
这是一条弯弯曲曲的小路，路上石子不少，踩在脚底怪不舒服
的，不时还得注意地上以免被拌倒了，两旁杂草丛生，似乎欠缺人
来打理。西边通往农田，东边则通往晒谷场，往北走则是一间土地
公庙。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/child.c" : 2,
]));
  set("outdoors", "/open/poison");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"f8.c",
  "south" : __DIR__"pa2.c",
  "east" : __DIR__"pl8.c",
]));

  setup();
}
