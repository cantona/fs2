// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","四海刀联");
  set ("long", @LONG
这里是天下刀客总本部 . 屋内的陈设简单而有威严 , 西首
一张太师椅 , 刀联会长雷一鸣正竭诚的欢迎着你的到来 . 刀客
总部是在十年前从蜀中迁来的 , 换了个环境 , 人气也旺了许多
 . 你可以在此加入(join)刀客的阵容 . 南边是刀客的交谊厅 .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"south" : "/open/port/room/r4-7.c",
	"north" : "/open/port/room/r4-3",
]));
	set("objects",([
	"/daemon/class/blademan/master":1,
	"/open/port/npc/blademan":1,
	]));

  setup();
}
int valid_leave(object me, string dir)
{
	if(me->query("class")!="blademan"&&dir=="south")
return notify_fail("那里只有刀客能够进去!\n");
return ::valid_leave(me,dir);
}
