inherit ROOM;
void create() {
	set( "short", "$HIC$堕$NOR$$HIG$落$NOR$$HIY$天$NOR$$HIR$使$NOR$的$HIM$炼丹室$NOR$" );
	set( "build", 13011 );
	set( "owner", "fsfs" );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room109",
	]) );
	set( "long", @LONG

这里是$HIC$堕$NOR$$HIG$落$NOR$$HIY$天$NOR$$HIR$使$NOR$的$HIM$炼丹室$NOR$，一阵阵的药味缓缓飘来你向
前走了，看到了一粒粒的药丸，散发出各种耀眼$HIY$光芒$NOR$，
以你对药物的了解你一看就知道这里个个都是救命的灵
丹妙药，你内心蠢蠢欲动想顺手牵羊摸走一些，当你伸
手向前去拿时，突然有人大喝道：「$HIM$何方小贼，胆敢来
此偷药$NOR$”并有股巨力将你推了出去。


LONG);
	setup();
	replace_program(ROOM);
}
