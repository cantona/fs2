//written by acelan...../u/a/acelan/ghost/room/ghost1.c

inherit ROOM;

void create()
{
        set("short", "墓园入口");
        set("long", @LONG
这里是杀手墓园的入口, 看起来怪恐怖的, 眼前耸立着一做石碑
, 大约有两丈高, 上面刻着七个字－杀手第十三公墓。不知道里面都
埋些什么东西。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost4.c",
       "west" : "/open/killer/mon/room/wood22.c",
   ]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black5.c" : 2,
]));
   setup();
}
