inherit ROOM;

void create ()
{
  set ("short", "东堂风");
  set ("long", @LONG
不知道是不是迷信的关系，总是听到风声呼呼的吹着，不禁让人
好奇的想去查个究竟，好像是从书本后面传过来的，难道书架后面有
个洞？还是耳朵有问题？
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wind",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_wind.c" : 1,
]));

  setup();
}
