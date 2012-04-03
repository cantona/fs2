inherit ROOM;
void create() {
	set( "short", "ΏρΑϊ΅ΆΪ£" );
	set( "owner", "mil" );
	set( "object", ([
		"amount1"  : 1,
		"file3"    : "/open/capital/obj/blade2",
		"file5"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file2"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount3"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file4"    : "/open/scholar/obj/icefan",
		"amount2"  : 1,
	]) );
	set( "build", 10122 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room325",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

$HIB$¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨
¨                                                          ¨
¨  $HIR$¨¨}¨}¨        $HIR$¨¨¨¨¨¨¨¨¨¨~¨}¨|¨{¨z¨y¨x        $HIB$¨
¨  $HIR$¨¨¨}¨$HIR$¨¨¨¨¨$HIY$‘ς$HIR$¨¨¨¨¨¨~¨~¨¨¨¨~¨~¨¨¨¨    $HIB$¨
¨  $HIR$¨ ¨           $HIR$¨¨          ¨¨~¨~¨¨¨¨¨~¨~¨¨¨  $HIB$¨
¨                    $HIR$¨                ¨~¨¨¨¨¨~¨~¨¨  $HIB$¨
¨                                                          ¨
¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨
¨¨¨¨¨¨‘υ‘υ‘υ‘υ¨p$HIG$΅Ά$HIB$¨z$HIG$Π₯$HIB$¨z$HIG$Ξδ$HIB$¨z$HIG$ΑΦ$HIB$¨z$HIG$ΠΠ$HIB$¨p‘υ‘υ‘υ‘υ¨¨¨¨¨¨$NOR$


LONG);
	setup();
	replace_program(ROOM);
}
