inherit ROOM;

void create()
{
        set("short","尸骨道");
        set("long",@LONG
尸骨的传来阵阵的恶臭位，脚底下踩着骨头前进，你部自主的感
觉到罪恶，却也有一股前所未有的新鲜感，往北望去，有一座巨大的
沙丘呈现凹字型的包围着出入口，往西、南走则步入沙漠。
LONG);
        set("exits",([
"north":__DIR__"d-14",
"south":__DIR__"d-15",
"east":__DIR__"d-10",
]));
        set("objects",([
__DIR__"npc/die-worm":5,
]));
        set("no_transmit",1);
        set("evil-area",1);
        setup();
}
