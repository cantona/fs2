// Room: /open/poison/room/room11
inherit ROOM;

void create ()
{
  set ("short", "说法堂");
  set ("long", @LONG
这里是用以传授武学知识的地方，并时常于此地比试武
功，用以决定教徒的各种升迁，及考验教徒所学之技能，以
决定是否能传授更高深的武学。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room13",
  "north" : __DIR__"room12",
  "east" : __DIR__"road18",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/elder1" : 1,
]));

  setup();
}
