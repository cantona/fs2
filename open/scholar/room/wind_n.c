inherit ROOM;

void create ()
{
  set ("short", "北堂风");
  set ("long", @LONG
不知道是不是迷信的关系，总觉得有股凉风往脸上吹来，奇怪的
是，四周都是密壁不应该有风会吹进来，这里除了书本以外，没有其
它的了，还是自己太神经质了。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"wind.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_wind.c" : 1,
]));

  setup();
}
