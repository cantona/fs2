// Room: /open/poison/room/room0
inherit ROOM;

void create ()
{
  set ("short", "魔教总坛");
  set ("long", @LONG
这里便是令武林中人闻之变色的魔教总坛，殿中排了两
排整齐的石像，地上铺了一层虎皮毛毯，中间座前刻了一幅
巨龙雕像，那便是魔教的总精神象征，想加入魔教的人便是
在此宣誓入教的。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"road2",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/poisoner/poisoner" : 1,
]));
  set("light_up", 1);

  setup();
}
