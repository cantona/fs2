inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG

散落一地的骨骸，也分不清楚究竟是人的骸骨还是野兽的尸骨，加上不时
吹来一阵阵的寒风，浑身鸡皮疙瘩直冒，不知道是因为阵阵的寒风令你发
冷，抑或是那遍地的白骨令你毛骨悚然。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"c2-3.c",
  "north" : __DIR__"c2-5.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/mob4" : 1,
]));

  setup();
}
int valid_leave(object me,string dir)
{
	 if(dir=="north"&&present("gold-brachium roc",environment(me)))
	if(me->query("pass_gblade")<4)
	return notify_fail("金翅鸥鹏扇动翅膀把你吹了回去 !\n");
	return ::valid_leave(me,dir);
}
