inherit ROOM;
void create() {
	set( "short", "马房" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 10034 );
	set( "owner", "holeman" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room298",
	]) );
	set( "long", @LONG
在这里的马儿每只都在这个良好的环境中受到完善的照
顾，光是看这马房整洁的环境以及每只马儿良好的健康状态
就可以知道主人有多用心在照顾这些马。想不到这里的主人
不仅在刀法上出类拔萃连饲养马匹都有他自己独到的心得。
现在这些雄壮威武的战马将会在此等着与他的主人步向下一
个未知的战场。
LONG);
	setup();
	replace_program(ROOM);
}
