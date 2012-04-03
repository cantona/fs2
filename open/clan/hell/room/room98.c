inherit ROOM;
void create() {
	set( "short", "$HIC$齐云峰$NOR$" );
	set( "owner", "creed" );
	set( "build", 10104 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room99",
		"west"      : "/open/clan/hell/room/room97",
	]) );
	set( "long", @LONG
当你醒来只见自己正在一棵突出于山崖旁的老树上,
只听见树干吱吱的响着，像是要断裂般, 此时你看到树旁
有几条老藤上面不知通往何处, 你想你或许可以试着爬上
去, 还是你想继续往下跳呢??
  「[33m少帅[0m”寇仲(Master kal)
  「[36m邪王[0m”石之轩(Shen)

LONG);
	setup();
	replace_program(ROOM);
}
