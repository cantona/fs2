inherit ROOM;
void create() {
	set( "short", "空瓶子招待所2" );
	set( "object", ([
		"amount2"  : 1,
		"file4"    : "/open/ping/obj/ring-2",
		"file1"    : "/open/dancer/obj/yuawaist",
		"amount1"  : 1,
		"file3"    : "/open/killer/weapon/k_torch",
		"amount4"  : 1,
		"file2"    : "/daemon/class/fighter/armband",
		"amount3"  : 1,
	]) );
	set( "owner", "ywartee" );
	set( "build", 10038 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room157.c",
		"enter"     : "/open/clan/sky-wu-chi/room/room332.c",
		"east"      : "/open/clan/sky-wu-chi/room/room327",
	]) );
	set( "long", @LONG
这里是属于要谈机密的地方,而四周看起来就像是一个练武场
原来是空瓶子喜欢以武会友,顺便说三道四的,所以一些高阶的
朋友都在这边谈论事情,但是呢,为了必免有人偷听,所以空瓶子
就想出一个妙计,使用了八成功力在这里做一个防护结界
任何人在这里面只能用say 而传不出去声音..
也许是因为有太多秘密的关系了...
LONG);
	setup();
	replace_program(ROOM);
}
