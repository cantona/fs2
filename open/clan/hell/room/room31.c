inherit ROOM;
void create() {
	set( "short", "愤怒之拳" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/daemon/class/fighter/figring",
	]) );
	set( "light_up", 1 );
	set( "build", 11926 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room28",
	]) );
	set( "long", @LONG
相传阎罗王曾有一次极怒之时,再地府击出一拳,型成前方这个前方这个山洞
从此只要是武者所用的相关武器都会被存放在此,由于此第本无地名,故阴间的鬼
民们便以当初建成的原因命名,取名为愤怒之拳,以纪念当初惊动天地的威力,表
达对阎罗王的尊敬之意

LONG);
	setup();
	replace_program(ROOM);
}
