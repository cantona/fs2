inherit ROOM;
void create() {
	set( "short", "$HIR$薰$HIG$香$HIC$水$HIY$榭$NOR$" );
	set( "build", 524 );
	set( "light_up", 1 );
	set( "owner", "haur" );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room75",
	]) );
	set( "long", @LONG
笨笨小孩呆呆思考的地方....
到处还都存放的原料...木头...大石...盆栽等等...
看来慢慢还会在盖新的东西出来...请小狐的朋友慢慢的期待吧...

雪原蔼蔼无穷尽...中有孤单我一人...辜身形影行天下...狐啸狼鸣伴我行...
LONG);
	setup();
	replace_program(ROOM);
}
