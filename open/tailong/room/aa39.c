inherit ROOM;

void create ()
{
  set ("short", "大雄宝殿");
  set ("long", @LONG
这里是大雄宝殿的正中心,在你的面前那一位慈眉善目的老和尚
就是天龙寺中的本因方丈,看他一副和蔼可亲的模样,相信常人绝对
想不到他是一个武林高手。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"aa38",
  "south" : __DIR__"aa36",
  "north" : __DIR__"aa42",
  "east" : __DIR__"aa40",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/tailong/npc/inn.c" : 1,
]));

  setup();
  replace_program(ROOM);
}
