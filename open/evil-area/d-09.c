inherit ROOM;

void create()
{
        set("short","尸骨道");
        set("long",@LONG
妳的脚下是由尸骨所堆积而成的道路，每一个骨头的形状，一看
就知道不是一般的人类骨架，妳蹲下身，仔细瞧瞧后，发现到每一个
骨头上面都有不同的伤痕，有的是抓痕，有的是咬痕，有的是裂痕，
甚至于还有十分利落的刀痕，看来这里可能是邪灵界的弃尸处，往南
望去，似乎有一座金黄色的建筑物在不远的北方，往南则是进入沙漠
内。
LONG);
        set("exits",([
"north":__DIR__"d-07",
]));
        set("objects",([
__DIR__"npc/earth-worm":1,
__DIR__"npc/mob3":2,
]));
        set("no_transmit",1);
        set("evil-area",1);
        setup();
}
