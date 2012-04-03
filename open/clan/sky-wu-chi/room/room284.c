inherit ROOM;
void create() {
	set( "short", "$HIM$东银河系$NOR$" );
	set( "owner", "lord" );
	set( "item_desc", ([
		"left_11_sword_line" : @ITEM

                          ─$BYEL$王者之路$NOR$─

                     $HIR$【$NOR$心剑$HIR$】$NOR$─ $HIR$求道之心，无剑之心，方达剑之心$NOR$

   $HIM$【$NOR$搏命$HIM$】$NOR$─ $HIM$以用刀的心来用剑，至生死度外$NOR$

      $HIG$【$NOR$无怨无尤$HIG$】$NOR$─ 剑之至高境界在于剑气能融入人体

              $HIC$【$NOR$随心所欲$HIC$】$NOR$─ $HIC$无招之剑$NOR$

 $RED$【$NOR$沥血肝胆$RED$】$NOR$─ $RED$用剑之境界乃$NOR$「$RED$求心$NOR$”

        $MAG$【$NOR$忘弃红尘$MAG$】$NOR$─ $MAG$先心伤，方能忘弃红尘$NOR$

                    $WHT$【$NOR$天堂之翼$WHT$】$NOR$─ $WHT$起剑不定，翼舞天堂$NOR$

    $BLU$【$NOR$秋末悲歌$BLU$】$NOR$─ 「$BLU$器$NOR$”

 $HIY$【$NOR$日月同天$HIY$】$NOR$─ $HIY$日为阳、月为阴；阴阳相济、日月分离$NOR$

              $HIB$【$NOR$欲望之海$HIB$】$NOR$─ $HIB$引动九地黄泉之气，欲海始成形$NOR$

      $CYN$【$NOR$庐山不动一剑痕$CYN$】$NOR$─ $CYN$立地九分，发在意先$NOR$

ITEM,
	]) );
	set( "object", ([
		"file6"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/tendo/obj/chaosbelt",
		"amount9"  : 1,
		"file10"   : "/open/prayer/obj/boris-cloth",
		"file8"    : "/open/wu/npc/obj/armband",
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/mogi/dragon/obj/key",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount8"  : 1,
		"file9"    : "/daemon/class/fighter/figring",
		"file7"    : "/open/capital/obj/king-cloak",
		"file1"    : "/open/prayer/obj/boris-boots",
		"amount10" : 1,
		"file2"    : "/open/capital/guard/gring",
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10080 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room239",
	]) );
	set( "long", @LONG
 这里是传说中 神秘的幻境 东银河系

 $HIM$放眼望ㄑ，到处都是一道道剑痕。好像有人在此大战ㄌ一场似的
 但是很快的你就会发觉你错ㄌ！因为那些一道道四处分散的剑痕
 旁边都有一行小字的剑诀。没错、这里是一处练功地。$NOR$

     $HIC$‘$NOR$
          $HIY$左边的十一道剑痕$NOR$(left_11_sword_line)
                                              $HIC$ ’$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
