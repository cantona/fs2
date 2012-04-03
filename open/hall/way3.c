// Room: /open/hall/way3.c

inherit ROOM;

void create()
{
        set("short", "箱房走道");
        set("long", @LONG
古老的木板走道，是由几根木质梁柱所支撑，柱上刻了几只不知名
的花草和虫子。看起来有股十分古老的气息，不过整根柱子没有虫蛀，
似乎还很耐用的样子。
LONG);
        set("exits", ([ /* sizeof() == 3 */
  "north":__DIR__"h_room12",
  "west" : __DIR__"h_room1",
  "south" : __DIR__"way2",
]));

        setup();
}
