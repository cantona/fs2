// common_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("功德簿", ({ "board" }) );
	set("location", "/open/su/room/temple/temple");
	set("board_id", "temple_b");
	set("long",	"这是一个供人签名留念的功德簿。\n" );
	setup();
	set("capacity", 30);
}
