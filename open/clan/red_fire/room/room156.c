inherit ROOM;
void create() {
	set( "short", "$HIY$【$HIR$红莲 $HIM$东门$HIC$哨塔$HIY$】$NOR$" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "exits", ([
		"down"      : "/open/clan/red_fire/room/room42",
	]) );
	set( "long", @LONG
此一哨站是为了防止$HIR$红莲村$NOR$村中的闲杂人等误入$HIR$红莲$HIY$圣地$NOR$而设立的，
虽然村庄的人们都是善良的平民百姓，但是$HIR$教主$NOR$最近耳闻村中来了一群不
肖之徒，$HIR$教主$NOR$才在此设立哨站并派人前往调查。


LONG);
	setup();
	replace_program(ROOM);
}
