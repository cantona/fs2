inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG

地道到了这里突然变得非常的狭窄，起初一个人通行还觉得没有障碍，到
了后来必须缩着身体才能勉强的挤进通道，好不容易把身上的肥油挤的干
干净净终于挤近了通道，不过全身也被石壁上尖锐的石头给划得遍体鳞伤
了。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"c2-1.c",
  "north" : __DIR__"c2-3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/mob2" : 1,
]));

  setup();
}

int valid_leave(object me,string dir)
{
 	if(dir=="north"&&present("curious snake",environment(me)))
	if(me->query("pass_gblade")<2)
	return notify_fail("肥遗挡在你的身前 , 不让你通行 !\n");
	return ::valid_leave(me,dir);
}
