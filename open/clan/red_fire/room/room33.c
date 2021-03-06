inherit ROOM;
void create() {
	set( "short", "$HIM$● $HIR$教主 $HIY$静心房$HIM$ ●$NOR$" );
	set( "owner", "fsmud" );
	set( "object", ([
		"amount10" : 1,
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"file8"    : "/daemon/class/fighter/figring",
		"amount3"  : 1,
		"file7"    : "/open/tendo/obj/chaosbelt",
		"amount2"  : 1,
		"amount1"  : 1,
		"file10"   : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/wind-rain/obj/sun_red_cloth",
	]) );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room69",
	]) );
	set( "light_up", 1 );
	set( "build", 11096 );
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
