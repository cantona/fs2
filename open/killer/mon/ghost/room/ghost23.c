//written by acelan...../u/a/acelan/ghost/room/ghost23.c

inherit ROOM;

void create()
{
        set("short", "石棺");
        set("long", @LONG
眼前出现了一座石棺, 寒气森森, 更骇人的是, 石棺上竟然还有
一滩血迹, 旋即你又发现四周散落着女生的小衣小裤, 和一些衣服碎
片, 忽然又听见一女子哀嚎声, 令人不寒而栗, 毛骨悚然。
LONG);
   set("exits", ([ /* sizeof() == 1 */
       "south" : __DIR__"ghost16.c",
       "east"  : __DIR__"ghost24.c",
       "west"  : __DIR__"ghost22.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/bghost.c" : 1,
]));
   setup();
}
