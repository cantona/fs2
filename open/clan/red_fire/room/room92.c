inherit ROOM;
void create() {
	set( "short", "$HIC$这里是$HIM$水水$HIC$的闺房$NOR$" );
	set( "owner", "edcfr" );
	set( "object", ([
		"amount5"  : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"file1"    : "/obj/gift/shenliwan",
		"amount8"  : 27,
		"amount4"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"amount7"  : 1,
		"amount10" : 1,
		"file9"    : "/obj/gift/shenliwan",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mogi/castle/obj/ninepill",
		"amount3"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "light_up", 1 );
	set( "build", 10207 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room83",
	]) );
	set( "long", @LONG

   $HIC$墙上题有一首诗
               
                $HIW$青春园中葵
                 $HIB$朝露待日晞
                  $HIC$阳春布德泽
                   $HIY$万物生光辉
                    $HIM$常恐秋节至
                     $HIW$焜黄华叶衰
                      $HIB$百川东到海
                       $HIC$何时复西归
                        $HIY$少壮不努力
                         $HIM$老大徒伤悲$NOR$


LONG);
	setup();
	replace_program(ROOM);
}
