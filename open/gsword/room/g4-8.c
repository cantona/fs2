// Room: /open/gsword/room/g4-8.c
inherit ROOM;

void create()
{
 set("short", "丽景轩");
  set ("long", @LONG
这里是郑士欣跟至友下棋饮茶的地方 ,阵阵的花香飘来 ,令人精神格
外清爽, 鸟语嗤喳 ,更让人觉得与世隔绝 .

LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"g4-13",
]) );

set("objects",([
  "/open/gsword/npc/lu.c" : 1,
]));
  setup();
}
