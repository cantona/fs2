//written by acelan...../u/a/acelan/ghost/room/ghost9.c

inherit ROOM;

void create()
{
        set("short", "墓园小径");
        set("long", @LONG
这是一条在墓园中的小径, 四通八达, 可以通往各个坟墓, 在小
径东方的尽头, 有一座好大的坟墓, 看来这条小径就是专为那个坟墓
所辟的, 而北边则是一堆小坟墓。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east"  : __DIR__"ghost10.c",
       "west"  : __DIR__"ghost8.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black4.c" : 1,
  "/open/killer/mon/ghost/npc/black5.c" : 1,
]));
   setup();
}
