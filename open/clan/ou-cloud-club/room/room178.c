inherit ROOM;
void create() {
	set( "short", "糯米鸡的私人闺房" );
	set( "object", ([
		"amount2"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"file2"    : "/open/killer/headkill/obj/world_dag",
	]) );
	set( "light_up", 1 );
	set( "build", 10076 );
	set( "owner", "sisao" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room151",
	]) );
	set( "long", @LONG
  这里是火焰鸭给小雯的私人闺房,因为小雯的东西一间房间已经放不
下了,房间里头到处放着的都是火焰鸭送给小雯的东西,桌上放着一条
水晶项炼,是小雯今年的生日礼物,所以他特地放在桌上,角落里头则放
了一些常用的装备.
  
LONG);
	setup();
	replace_program(ROOM);
}
