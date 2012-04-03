// Room: /open/hall/h_room11.c

inherit ROOM;

void create()
{
        set("short","厢房走道");
        set("long",@LONG
此处是厢房前的走道，在西边有一盏大窗户，空气十分流通。宁静
的气氛，使人感到格外的舒畅～你的南方是三捕头─秦  忌之厢房，而
北边是二捕头─朱火旺之厢房。
LONG);
        set("exits",([
  "east":__DIR__"h_room10",
  "north":__DIR__"h_room15",
  "south":__DIR__"h_room14",
]));

        setup();
}
