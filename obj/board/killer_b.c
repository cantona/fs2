// chen_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("黑名单",({"black board","board"}));
	set("location","/open/killer/room/r3");
	set("board_id","killer_b");
	set("long","这是一分杀手用来记事的黑名单。\n");
	setup();
	set("capacity", 30);
	// replace_program(BULLETIN_BOARD);
}
