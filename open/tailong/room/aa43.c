inherit ROOM;

void create ()
{
  set ("short", "大雄宝殿");
  set ("long", @LONG
这里是大雄宝殿中的偏殿,往西走就是天龙寺大佛的所在地,天龙
寺的大佛高八米,以阿里山神木雕成,听说向大佛祈祷还能有平息心中
杀意的功效。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"aa40",
  "west" : __DIR__"aa42",
]));
}
