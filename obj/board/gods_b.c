inherit BULLETIN_BOARD;

void create()
{
	set_name("诸神传说", ({ "board" }) );
	set("location", "/open/wiz/gs");
	set("board_id", "gods_b");
	set("long",	"诸神传说\n");
	setup();
	set("capacity", 300);
	// 设这样就能让那些人 discard post 啰
	set("master", ({"wade"}) );
}
