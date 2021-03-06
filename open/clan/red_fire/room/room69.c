inherit ROOM;
void create() {
	set( "short", "$HIM$● $HIR$教主 $HIY$装备室$HIM$ ●$NOR$" );
	set( "owner", "fsmud" );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room110.c",
		"west"      : "/open/clan/red_fire/room/room33",
	]) );
	set( "object", ([
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"file8"    : "/open/mogi/castle/obj/lochagem",
		"file2"    : "/open/killer/obj/s_pill",
		"amount1"  : 139,
		"amount9"  : 1,
		"file7"    : "/open/capital/guard/gring",
		"file1"    : "/open/killer/obj/black",
		"file5"    : "/open/killer/obj/bellstar",
		"amount10" : 1,
		"amount5"  : 18627,
		"amount3"  : 20000,
		"file3"    : "/open/killer/obj/bellstar",
		"amount6"  : 1,
		"file6"    : "/open/gsword/obj/may_ring",
		"amount2"  : 200,
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"amount4"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/killer/obj/k_ring",
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10032 );
	set( "long", @LONG

1.红莲观世音菩萨下凡普渡众生所在之地。
2.第一代佛法传人创教，纪念观音之大德所称为红莲教。
  但是教主之名无人所知。
3.经过一次大灾难后，红莲教成为人间炼狱，面目全非。
4.数年之后一位小女孩的诞生，红莲观音显灵，
  替她取名叫......爱玫。
5.爱玫成年后，再度创教，红莲教重出，
  并且以扶助众人为教规。
6.创教不久，再次受到打击，全教被灭......。
7.之后爱玫教主与众人不负使命，再次重整红莲。
8.现在为人间仙境，众人所向往之世外桃源......。 

LONG);
	setup();
	replace_program(ROOM);
}
