inherit ROOM;
void create() {
	set( "short", "风的故乡" );
	set( "light_up", 1 );
	set( "object", ([
		"file4"    : "/open/gsword/obj/no_tax",
		"amount2"  : 1,
		"file2"    : "/open/dancer/obj/yuaboots",
		"amount1"  : 1,
		"file1"    : "/open/killer/weapon/k_torch",
		"file3"    : "/open/dancer/obj/yuawaist",
		"amount3"  : 1,
		"amount4"  : 1,
	]) );
	set( "owner", "windson" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room172",
	]) );
	set( "long", @LONG

微风轻轻的吹拂着, 令你感到无比的舒畅, 这里正是传说中的

$HIC$                 ╔╦═════╦╝
                   ║╔═╦═╝║
                   ║╔═╬═╗║
                   ║║  ║  ║║
                   ║╚═╬═╝║
                 ╚╝══╩═╣╚╝$NOR$

                                         -=风的故乡=-

LONG);
	setup();
	replace_program(ROOM);
}
