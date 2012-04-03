inherit ROOM;
void create() {
	set( "short", "$BLU$幽冥$NOR$$HIY$射手$NOR$的$BLU$幽冥居$NOR$" );
	set( "build", 10078 );
	set( "owner", "poluy" );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room82.c",
		"home"      : "/open/clan/red_fire/room/hall",
	]) );
	set( "long", @LONG

此处是$HIR$红莲$NOR$$HIY$射手$NOR$$BLU$幽冥$NOR$$HIY$射手$NOR$的住所，这里虽然只有平平无奇的
摆设，但来到这里的人总会被又壁上所挂之物深深吸引。而
壁上之物无他正是一副$HIM$弓$NOR$$YEL$箭$NOR$。但明眼人一眼就可看出，壁上
之$HIM$弓$NOR$乃是上古时$HIC$后羿$NOR$所用之$HIM$射$NOR$$HIR$日$NOR$$YEL$弓$NOR$，$YEL$箭$NOR$更是射下九个太阳的
$HIC$穿云箭$NOR$，这两件都是$HIY$射手$NOR$梦寐以求的$HIY$神兵$NOR$，没想到竟会在此
见到这传说中的武器。


LONG);
	setup();
	replace_program(ROOM);
}
