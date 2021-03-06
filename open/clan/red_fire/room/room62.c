inherit ROOM;
void create() {
	set( "short", "$HIM$● $HIR$教主 $HIY$药品间 $HIM$●$NOR$" );
	set( "owner", "fsmud" );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room108",
	]) );
	set( "light_up", 1 );
	set( "object", ([
		"file6"    : "/open/fire-hole/obj/w-pill",
		"amount5"  : 9,
		"file9"    : "/open/killer/headkill/obj/i_dag",
		"file3"    : "/open/fire-hole/obj/r-pill",
		"file7"    : "/open/fire-hole/obj/y-pill",
		"amount4"  : 1,
		"file2"    : "/open/killer/headkill/obj/w_dag",
		"amount1"  : 38,
		"amount7"  : 48,
		"amount2"  : 1,
		"amount3"  : 44,
		"file8"    : "/open/killer/headkill/obj/e_dag",
		"file5"    : "/open/fire-hole/obj/b-pill",
		"amount9"  : 1,
		"file10"   : "/open/fire-hole/obj/p-pill",
		"amount8"  : 1,
		"file4"    : "/open/killer/headkill/obj/f_dag",
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount10" : 37,
		"amount6"  : 14,
	]) );
	set( "build", 10084 );
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
