// Room: /open/poison/room/road9
inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
你来到这里眼前有一条道路向北绵延而去，东边有一不
知名的湖，路边长满了高大的野草，就在此时，从身旁草丛
堆中发出沙沙声响，内心浮现不安的感觉，此地似乎不宜久
留，还是早点离开为妙。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"road10",
  "southwest" : __DIR__"v1.c",
  "southup" : __DIR__"road8",
]));
  set("outdoors", "/open/poison");

  setup();
}
