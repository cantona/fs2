//written by acelan...../u/a/acelan/room/wood28.c

inherit ROOM;

void create()
{
        set("short", "树林上的密道");
        set("long", @LONG
在前方不远处, 你发现有一朵灵芝, 在灵芝的四周杂草不生, 似
乎是难得一见的千年灵芝, 不过颇为奇怪的是这棵灵芝身上五彩斑斓
, 或许它身怀剧毒, 还是不吃为妙。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east" : "/open/killer/mon/room/wood29.c",
       "west" : "/open/killer/mon/room/wood27.c",
   ]));

        set("no_clean_up", 0);

        setup();
}
