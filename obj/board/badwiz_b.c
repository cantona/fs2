// bad_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("坏蛋巫师放话板",({ "board" }));
	set("location", "/open/badman/room/wizroom");
	set("board_id", "badwiz_b");
	set("long","\t看啥?!没被坏人打过是不是? :b\n");
	setup();
	set("capacity", 50);
}
