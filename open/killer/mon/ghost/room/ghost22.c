//written by acelan...../u/a/acelan/ghost/room/ghost22.c

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
       "south" : __DIR__"ghost15.c",
       "east"  : __DIR__"ghost23.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black3.c" : 2,
]));
   setup();
}
