inherit ROOM;
void create() {
	set( "short", "$HIR$大雄宝殿$NOR$" );
	set( "owner", "creed" );
	set( "build", 12042 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room98",
	]) );
	set( "long", @LONG
[36m大雄宝殿内有长廊贯通，左右大石柱林立对称，千座烛台照的四周灯火通[0m
    [36m明，大殿塑像罗列，分作两组，中央是数十尊佛和菩萨，以居于殿心的千[0m
    [36m手□每只手的形状和所持法器无有相同[0m
    [36m，令人生出神通广大，法力无边的感觉，分列四周的是五百罗汉，朝向中[0m
    [36m央的塑像，形成纵横相通的巷道。让人见了一时不由呼吸顿止感受到在宗[0m
    [36m教的征召下，建寺者那种婵思竭力的热忱和精神。[0m


LONG);
	setup();
	replace_program(ROOM);
}
