//written by acelan...../u/a/acelan/ghost/room/ghost13.c

inherit ROOM;

void create()
{
        set("short", "墓园小径");
        set("long", @LONG
这是一条在墓园中的小径, 四通八达, 可以通往各个坟墓, 小径
向北不断地延伸, 西边是一座大坟墓, 看起来似乎是新冢, 而东边则
是一堆小坟墓, 看起来杂乱无章的。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost20.c",
       "south" : __DIR__"ghost7.c",
       "east"  : __DIR__"ghost14.c",
       "west"  : __DIR__"ghost12.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
