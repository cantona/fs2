inherit ROOM;

void create()
{
        set("short","尸骨道");
        set("long",@LONG
脚下传来阵阵的尸臭味，这里是一个由尸骨所堆积而成的道路，
你踏下的每一步，都会将脚下的尸骨给踩的粉碎，对于生活于人界的
你，感觉上十分的难受，在你的北边，你可以清楚的看到一座呈现凹
字型的金色建筑物，而在你的东南方，似乎有一座湖泊，西南方则不
断的传来阵阵的高温，往南走，则步入沙漠内。
LONG);
        set("exits",([
"north":__DIR__"d-08",
"south":__DIR__"d-09",
"west":__DIR__"d-10",
"east":__DIR__"d-02",
]));
        set("objects",([
__DIR__"npc/die-worm":5,
]));
        set("no_transmit",1);
        set("evil-area",1);
        setup();
}
