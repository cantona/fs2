#include <ansi.h>
#include <room.h>
inherit ROOM;
#include <marksman.h>
void create ()
{
  set ("short", "将军府");
  set ("long", @LONG
这里是李广的住处，设计规划巧夺天工的大观园，虽后门亦不含
糊，光彩逼人。最豪华繁丽的建筑物，只见崇阁巍峨，层楼高起，面
面琳宫合抱，迢迢复道萦纡，青松抚檐，玉兰绕砌，金辉兽面，彩焕
璃头。你可以看到一群全副武装的武士守备着自己的位子，你似乎看
到一扇大门(open door)。
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "enter" : (: look_door,     "enter" :),
]));
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room1-21",
  "enter" : __DIR__"room1-23",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/marksman/npc/guard" : 2,
]));

  setup();
}
