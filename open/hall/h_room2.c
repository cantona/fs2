// Room: /open/hall/h_room2.c
inherit ROOM;

void create()
{
        set("short", "捕头统领─冷面煞之厢房");
        set("long", @LONG
这儿是总衙捕头统领─冷面煞的厢房，一张不起眼的桌子，桌旁散
乱摆着几张木椅，仔细一瞧..桌上有一排清晰可见的掌印，你惊想：如
仔细一瞧桌上有一排清晰可见的掌印，你惊想：如果如果这掌印是落在
你的脑袋瓜子呢??! 墙上挂着一幅画，画的左上角题着两句词：两情若
是久长时，又何必朝朝暮暮。
LONG);
        set("exits", ([ /* sizeof() == 1 */
  "south":__DIR__"h_room10",
]));
        set("objects", ([ /* sizeof() == 1 */
        "/open/hall/npc/face":1,
]));

        setup();
}
