inherit BULLETIN_BOARD;

void create()
{
	set_name("天听版", ({ "board" }) );
	set("location", "/u/w/wade/workroom");
	set("board_id", "wade_b");
	set("long",	"天听自我民听，众巫师有话就留，没话快滚\n");
	setup();
	set("capacity", 30);
	// 设这样就能让那些人 discard post 啰
	set("master", ({"wade", "ice"}) );
}
