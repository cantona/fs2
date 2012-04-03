inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG

走到这里你突然觉得有点不太对劲，总觉得有东西在你身旁，后颈总觉得
有一点点凉飕飕的感觉，本来只是后颈有异样的感觉，渐渐的这感觉好像
蚂蚁一样爬满了全身。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"c2-7.c",
  "east" : __DIR__"c1-2.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/gblade/npc/mob7.c" : 1,
  "/open/gblade/npc/mob6.c" : 1,
]));

  setup();
}
int valid_leave(object me,string dir)
{
	if(dir=="west"&&present("nine-switch tortoise",environment(me)))
	{
	if(me->query("pass_gblade")<6)
	return notify_fail("三首九尾龟横身挡住了你的退路 !!\n");
	}
	if(dir=="east"&&present("dragon",environment(me)))
	{
	if(me->query("pass_gblade")<7)
	return notify_fail("九天应龙挡在你面前让你不能前进 !\n");
	}
	return ::valid_leave(me,dir);
}
