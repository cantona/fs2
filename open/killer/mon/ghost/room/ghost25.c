//written by acelan...../u/a/acelan/ghost/room/ghost25.c

inherit ROOM;

void create()
{
        set("short", "乱葬岗");
        set("long", @LONG
这里是杀手墓园最混乱的一角, 四周墓冢一堆一堆的杂乱无章,
甚至还有任随骨骸暴露在外的, 阵阵阴风再加上不时出现在身旁的鬼
火, 没有人会认为这里是可以久留之地。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : __DIR__"ghost18.c",
       "east"  : __DIR__"ghost26.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black4.c" : 1,
  "/open/killer/mon/ghost/npc/black5.c" : 1,
]));
   setup();
}
