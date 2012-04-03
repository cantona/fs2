//written by acelan...../u/a/acelan/ghost/room/ghost15.c

inherit ROOM;

void create()
{
        set("short", "墓穴");
        set("long", @LONG
墓穴内光线昏暗, 阴气森森, 但见四周空空旷旷, 一无所有, 不
过近处却不时有嘎嘎声响传出, 偏偏你又什么东西都看不见, 顿时觉
得毛骨悚然, 全身不寒而栗。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost22.c",
       "east"  : __DIR__"ghost16.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
