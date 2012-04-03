inherit ROOM;

void create()
{
        set("short","尸骨道");
        set("long",@LONG
妳的脚下是由尸骨所堆积而成的道路，每一个骨头的形状，一看
就知道不是一般的人类骨架，妳蹲下身，仔细瞧瞧后，发现到每一个
骨头上面都有不同的伤痕，有的是抓痕，有的是咬痕，有的是裂痕，
甚至于还有十分利落的刀痕，看来这里可能是邪灵界的弃尸处，往南
望去，似乎有一个湖泊在不远的南方，往北则是进入沙漠。
LONG);
        set("exits",([
"south":__DIR__"d-02",
]));
        set("objects",([
__DIR__"npc/wood-worm":1,
__DIR__"npc/mob1":2,
]));
        set("no_transmit",1);
        set("evil-area",1);
        setup();
}

