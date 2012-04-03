//written by acelan...../u/a/acelan/ghost/room/ghost27.c

inherit ROOM;

void create()
{
        set("short", "墓园小径");
        set("long", @LONG
这是一条在墓园中的小径, 四通八达, 可以通往各个坟墓, 小径
向北延伸只到这里为止, 往西是尸骨散落满地的乱葬岗, 东边则是一
若有若无的小径, 看起来挺诡异的。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : __DIR__"ghost20.c",
       "east"  : __DIR__"ghost28.c",
       "west"  : __DIR__"ghost26.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
