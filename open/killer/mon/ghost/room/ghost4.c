//written by acelan...../u/a/acelan/ghost/room/ghost4.c

inherit ROOM;

void create()
{
        set("short", "墓园小径");
        set("long", @LONG
这是一条在墓园中的小径, 四通八达, 可以通往各个坟墓, 小径
向北不断地延伸, 西边则是一大片的土馒头, 而东边看起来则像是尚
未整好的墓地, 想来应该是没有人埋在里面吧。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost7.c",
       "south" : __DIR__"ghost1.c",
       "west"  : __DIR__"ghost3.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
