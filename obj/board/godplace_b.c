// common_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("天界工作群留言版", ({ "board" }) );
	set("location", "/open/su/room/temp1");
set("board_id", "godplace_b");
	set("long",	"这是一个供天界工作人员留言的地方。\n" );
	setup();
	set("capacity", 30);
	replace_program(BULLETIN_BOARD);
}
