// fighter_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("武者留言板", ({ "board" }) );
	set("location","/open/snow/room/room2");
	set("board_id", "fighter_b");
	set("long",	"这是供武林中人留言记事的留言板。\n" );
	setup();
	set("capacity", 60);
	// replace_program(BULLETIN_BOARD);
		set("master",({"anmy","airke","hide","roger"}));
}
