inherit ROOM;
void create() {
	set( "short", "$HIB$沉璧$NOR$" );
	set( "light_up", 1 );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/quests/snake/npc/obj/snake-3",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"file8"    : "/open/gblade/obj/sa-head",
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/gblade/obj/sa-head",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/killer/obj/kill_yar_head",
		"file7"    : "/open/gblade/obj/sa-head",
		"file1"    : "/open/killer/obj/k_ring",
		"amount10" : 1,
		"file2"    : "/open/capital/room/king/obj/dagger1",
		"amount7"  : 1,
	]) );
	set( "build", 10016 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room128.c",
		"west"      : "/open/clan/ou-cloud-club/room/room189.c",
	]) );
	set( "long", @LONG

     $HIR$这是皇室的祖传兵器，能够完完全全的配合皇室绝学$NOR$


这个房间影约一直发出着湛蓝的萤光....
定神一看...咦..这不是皇室所专用的兵器嘛....
莫非前些日子皇宫遭盗..是小马所为...
这可是杀头之罪耶.....看来小马可真是亡命之徒
LONG);
	setup();
	replace_program(ROOM);
}
