// Room: /open/hall/h_room6.c

inherit ROOM;

void create()
{
        set("short","待客花厅");
        set("long",@LONG
这儿是衙门用来接待贵客的地方，一张三尺见方雕花沉木桌置于厅
中，墙上挂着几幅山水画，画的右下角属名是单一个　尘字，画中意境
不凡！真不晓的是出自于哪位大家之手。
LONG);
        set("exits",([
  "west":__DIR__"h_room5",
  "east":__DIR__"h_room7",
  "south":__DIR__"h_room9",
]));

        setup();
}
