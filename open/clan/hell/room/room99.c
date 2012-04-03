inherit ROOM;
void create() {
	set( "short", "$HIY$剑心殿$NOR$之$HIY$问剑堂$NOR$" );
	set( "owner", "creed" );
	set( "build", 12522 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room13.c",
		"west"      : "/open/clan/hell/room/room98",
	]) );
	set( "long", @LONG
走进问剑堂只见一名身着灰衣面带忧容的中年人伫立在
窗口他的眼神沉着而机敏，且隐隐透着光芒，露在衣服外的
皮肤泛起一种奇异的光泽，那是长期修练内家真气的现象，
他正不厌其烦的对剑宗弟子讲解着剑道的奥义。
  「[31m护宗剑奴[0m”[33m紫屠杀[0m(Sword guard)
  剑宗第二代宗主 [36m虚若空[0m(Master sky)

LONG);
	setup();
	replace_program(ROOM);
}
