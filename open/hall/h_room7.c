// Room: /open/hall/h_room7.c

inherit ROOM;

void create()
{
        set("short","厨房");
        set("long",@LONG
此处是衙门的厨房，衙门上上下下的伙食都从这来，蒸笼里正蒸着
热腾腾的包子，看着那包子使你忍不住趁四下无人，伸手拿了几个大快
朵颐。在饱餐之余，你不禁想了想，全衙门的饮食都在这，而戒备却如
此松散，如果有人在食物里下毒的话．．．那！？
LONG);
        set("exits",([
  "west":__DIR__"h_room6",
  "south":__DIR__"h_room8",
]));

        setup();
}
