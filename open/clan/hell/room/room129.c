inherit ROOM;
void create() {
	set( "short", "狂想空间入口处" );
	set( "exits", ([
		"up"        : "/open/clan/hell/room/room130.c",
		"down"      : "/open/clan/hell/room/room132.c",
	]) );
	set( "long", @LONG

欢迎各位来到狂想空间的世界,希望这里能给你不同的发现!!! :)
新手请多多使用 help 指令哦~~~~~ :)

 往上走就是狂想空间帮派言论广场。
 往西为狂想技能建言的言论广场。
 往东为狂想玩家申请备份档案的地方。
 往南为狂想制度建言的讨论区。
 往北为违反狂想空间制度的公布栏。
 往东北方为历代狂想巫师纪念榜。
 往下走你将会正式进入狂想空间的世界。

  小女孩(Little girl)
  $HIC$投票专用箱$NOR$ (box) [ $HIR$没有投票活动$NOR$ ]
LONG);
	setup();
	replace_program(ROOM);
}
