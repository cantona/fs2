//written by acelan...../u/a/acelan/ghost/room/ghost35.c

inherit ROOM;

void create()
{
        set("short", "黑风组总部");
        set("long", @LONG
这里是黑风组的总部, 黑风组员一个个神色木然, 看起来颇不易
与, 四周空荡荡的, 除了墙上钉了几把千古恨外, 便再无其他东西了
, 看来黑风组并不富裕。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "west"  : __DIR__"ghost34.c",
   ]));
   set("no_clean_up", 0);

   setup();
}

