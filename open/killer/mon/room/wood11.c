//written by acelan...../u/a/acelan/room/wood11.c

inherit ROOM;

void create()
{
        set("short", "森林的小径");
        set("long", @LONG
这里是森林的东侧, 有一条由树叶构成的小径向前延伸, 似乎可
以带你走出这片恐怖的森林。两旁树木高耸, 排列有致, 强风迎面吹
来, 不禁令你打了个冷颤。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : "/open/killer/mon/room/wood15.c",
       "west"  : "/open/killer/mon/room/wood10.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc3.c":2,
       "/open/killer/mon/npc/spy5.c":1,
   ]));
        setup();
 }
