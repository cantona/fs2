inherit ROOM;

void create ()
{
  set ("short", "大雄宝殿");
  set ("long", @LONG
这里是大雄宝殿中的偏殿,往东走就是天龙寺大佛的所在地,天龙
寺的大佛高八米,以阿里山神木雕成,听说向大佛祈祷还能有平息心中
杀意的功效,西边好像还有一间小房间,不知道里面有什么东东。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"aaa.c",
  "south" : __DIR__"aa38",
  "east" : __DIR__"aa42",
]));

  setup();
  replace_program(ROOM);
}
