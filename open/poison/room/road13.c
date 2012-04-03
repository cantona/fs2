// Room: /open/poison/room/road13
inherit ROOM;

void create ()
{
  set ("short", "石阶");
  set ("long", @LONG
石阶的两旁设有大大的马道，供马车及驿马行走，道路
两旁种满了樱树桃木，春天时树上开满红花，整条石阶一片
火红，犹如一条火红的赤龙，北边有一大院，应该就是冥蛊
魔教的总坛吧。
LONG);

  set("outdoors", "/open/poison");

  set("exits", ([ /* sizeof() == 2 */
  "southdown" : "/open/poison/room/road12",
  "northup" : "/open/poison/room/road14",
]));

  setup();
}
