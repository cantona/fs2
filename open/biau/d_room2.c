// Room: /u/o/onion/room/d_room2.c

inherit ROOM;

void create()
{
	set("short", "闺房");
	set("long", @LONG
这里便是赵鼎天的独生女--赵淑媛所住的闺房,四面均开了窗户,环顾四周,蜀中城
便在西边,还可以看到街道上的行人来来往往.而从东边望出去则是蜀中城郊外的景色,
草木华滋,郁郁森森,山容一碧,乍看之下风景雄丽非凡.
    你闻到空气飘来一阵清香,随着目光而去,才发现到赵淑媛正坐在床边沈思,对于你
的到来似乎视而不见.

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"d_room1",
	]));
	set("objects",(["/u/o/onion/npc/lady.c" : 1]));

	setup();
}
