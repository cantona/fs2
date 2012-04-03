// Room: /u/m/moner/room/room13.c
inherit ROOM;

void create ()
{
  set ("short", "小路");
  set ("long", @LONG

这市一条由青石铺成的羊长小径, 往前通往后院, 往南是内室, 两旁
种植着芳草凄树, 阵阵的香味伴着你前行。
    清风一阵阵的吹拂着你, 不知名的鸟鸣吱吱的传来。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room14.c",
  "south" : __DIR__"room10.c",
]));
  set("outdoors", "wind");

  setup();
}
