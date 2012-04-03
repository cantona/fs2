// Room: /open/capital/room/h12.c

inherit ROOM;

void create ()
{
  set ("short", "芝麻胡同");
  set ("long", @LONG
芝麻胡同的名称由来连老一辈的人都不知道了, 只知道大家都是这
么叫这条胡同的, 这里既没有种芝麻, 也没有卖芝麻, 两旁只是普通的
民宅而已。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"h11",
  "east" : __DIR__"r70",
]));
  set("outdoors", "/open/capital");

  setup();
}
