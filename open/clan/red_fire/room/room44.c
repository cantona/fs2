inherit ROOM;
void create() {
        set( "short", "$HIY$【$HIR$红莲 $HIM$北城门$HIY$】$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"amount5"  : 2,
		"file8"    : "/u/d/dhk/questsfan/obj/diamond_boots",
		"file5"    : "/open/mogi/castle/obj/ninepill",
		"file4"    : "/open/fire-hole/obj/r-pill",
		"amount1"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/fire-hole/obj/g-pill",
		"amount8"  : 1,
		"amount4"  : 1,
		"file2"    : "/open/fire-hole/obj/y-pill",
		"file1"    : "/open/fire-hole/obj/p-pill",
		"file3"    : "/open/fire-hole/obj/w-pill",
		"amount3"  : 1,
		"file7"    : "/open/fire-hole/obj/b-pill",
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10080 );
        set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room32.c",
		"up"        : "/open/clan/red_fire/room/room100",
		"north"     : "/open/clan/red_fire/room/room35.c",
        ]) );
        set( "long", @LONG
这里是$HIR$红莲教$NOR$的$HIM$北城门$NOR$，往北走去是一大片的$YEL$沙漠$NOR$，听说在$YEL$沙漠$NOR$中有
另外一座城镇是以前$HIR$红莲教$NOR$的$BLU$遗迹$NOR$，里面有着大量的$HIY$金沙$NOR$；但是去过的人
......没有一个人顺利回来，不知道是否已经找到$HIY$金矿$NOR$......还是......
只是一座使人深陷的$HIR$海$HIG$市$HIY$蜃$HIB$楼$NOR$......。


LONG);
        setup();
        replace_program(ROOM);
}

