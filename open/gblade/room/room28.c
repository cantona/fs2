// Room: /u/m/moner/tree/room28.c
inherit ROOM;

void create ()
{
  set ("short", "映阳坡");
  set ("long", @LONG

高耸的山势至此直转而下， 一抹清渠随着坡道奔向前方，顺着山势往下
流去。两旁的坡道上长满了野生的杏花，映着阳光，如喷花蒸雾一般，攀藤抚
树而下，只见水上落花越多，其水越清澈，往前直走，水识越快，耳旁隐隐听
到万马奔腾的声音。

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room29.c",
  "east" : __DIR__"room27.c",
]));

  setup();
}
