// 钥匙, 有锁的房间请到 /u/w/wade/room/key_room 参考
inherit ITEM;

void create()
{
        set_name("钥匙", ({ "gold key","key", "gold" }) );
        set("unit", "把");
        set("long", "一把看起来普普的钥匙，专门用来开门上的锁用的。\n");
	// 底下这个是设定它可以用的房间
	set ("key_of_room", ({ "/u/w/wade/workroom", "/u/w/wade/room/key_room"}) );
}
