// Room: /open/hall/h_room3.c

inherit ROOM;

void create()
{
        set("short", "县官的寝室");
        set("long", @LONG
当执事退堂后，这里就是他休息的地方。这地方并没有什么特殊之
处，在你面前有一张大桌子(table)，不过你推不动它。
LONG);
        set("exits", ([ /* sizeof() == 1 */
  "southeast" : __DIR__"hall_3",
]));

        set("item_desc", ([ /* sizeof() == 1 */
  "table" : "  一张由黑檀木所制成的桌子, 上面披了一面红布。\n",
 ]));

        setup();
}
