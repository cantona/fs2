// Room: /open/hall/h_room4.c

inherit ROOM;

void create()
{
        set("short", "议事厅");
        set("long", @LONG
这儿是县衙的议事厅，三位像是参谋级的人物，正不知为啥吵的不
可开交!!其中一个样子蛮斯文的家伙，突然拿起桌上的杯子，砸向主席
台!!这种情境似乎常常发生，好像在哪见过喔～～
LONG);
        set("exits", ([ /* sizeof() == 1 */
  "southwest" : __DIR__"hall_3",
  "south" : __DIR__"h_room5",
]));

        setup();
}
