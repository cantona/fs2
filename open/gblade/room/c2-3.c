inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG

一进这里，刺鼻的血腥味直往你身体里钻，虽然把鼻子掩住了，这味道似
乎还是能从毛细孔里钻进去，直达你的脑部，地上尽是血迹，碎肉，你实
在没有勇气把脚往那上面踏下去。里头有几只不知名的怪兽正抓着一副副
的尸体在那大快朵颐。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"c2-2.c",
  "north" : __DIR__"c2-4.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/mob3" : 1,
]));

  setup();
}
 int valid_leave(object me,string dir)
{
	if(dir=="north"&&present("two-heads snake",environment(me)))
	if(me->query("pass_gblade")<3)
	return notify_fail("六足双头蛇挡注了你的去路 , 对你摇摇头 !\n");
	return ::valid_leave(me,dir);
}
