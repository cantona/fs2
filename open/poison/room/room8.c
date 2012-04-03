// Room: /open/poison/room/room8
inherit ROOM;

void create ()
{
  set ("short", "执法堂");
  set ("long", @LONG
这里是冥蛊魔教用以审判教众的地方，厅堂中间有一浮
雕精细的太师椅，太师椅上坐着一位双眼炯炯有神的老者，
他便是此魔教的执法大长老，在他的魔掌之下，所有触犯教
规的教徒一一伏法就刑，无一幸免。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/poison/room/room10",
  "north" : "/open/poison/room/room9",
  "west" : "/open/poison/room/road17",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/elder2" : 1,
]));

  set("light_up", 1);

  setup();
}
