// Room: /open/hall/h_room10.c

inherit ROOM;

void create()
{
        set("short","厢房走道");
         set("long",@LONG
这里是厢房前的走道，站在这里几乎听不到大堂的吵杂声，宁静的气
氛，使人感到格外的舒畅，在你的南方是衙门师爷─神算子之厢房，而在
北边是捕头统领─冷面煞的厢房。
LONG);
        set("exits",([
  "north":__DIR__"h_room2",
  "west":__DIR__"h_room11",
  "east":__DIR__"hall_3",
  "south":__DIR__"h_room13",
]));

        setup();
}
