inherit ROOM;
void create() {
	set( "short", "$HIR$毒品$HIY$收藏室$NOR$" );
	set( "owner", "poisonlife" );
	set( "build", 10021 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room76",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

一走进房间，一股$HIR$腥$HIG$臭$HIC$恶$HIY$心$NOR$的味道扑鼻而来，你急忙掩住鼻子，找寻
$BRED$恶臭$NOR$的来源，你发现房间之内满布着各类$HIR$毒物$NOR$，在阴暗的角落里，更
有一个不起眼的$HIC$小柜子$NOR$，你在好奇心的驱使下，缓步走向前去，你打
开$HIW$抽屉$NOR$一看，里面放的是许多不知名$HIY$药草$NOR$，以及调制过的$HIR$毒药$NOR$，不过
你并不是使毒高手，所以对你而言并没有任何用处。


LONG);
	setup();
	replace_program(ROOM);
}
