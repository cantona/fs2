inherit ROOM;

void create ()
{
  set ("short", "前庭");
  set ("long", @LONG
你看到两位弟子在此拆招, 武艺虽然不高, 但其身法出手之严谨
, 却在在显露出名门的风范, 你不由得想到这几年, 段家门人在江湖
上好生兴旺, 不是没有道理的...

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"np6",
  "south" : __DIR__"np1",
  "north" : __DIR__"np7",
  "east" : __DIR__"np5",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/duan-trainee.c" : 2,
]));

  setup();
  replace_program(ROOM);
}
