// Room: /open/hall/h_room9.c

inherit ROOM;

void create()
{
        set("short","衙门花园");
        set("long",@LONG
衙门的花园，虽然这儿是衙门最大的花园，不过比其他地方好不了
多少，并没有甚么奇花异草在这，都是一些寻常的花草，不过开的倒是
蛮漂亮的！！
LONG);
        set("exits",([
  "east":__DIR__"h_room8",
  "north":__DIR__"h_room6",
]));
        set("resource/water",1);
        setup();
}
