// chen_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("大理寺留言版",({"board"}));
	set("location","/open/capital/room/chen_home");
	set("board_id","chen_b");
	set("long","这是大理寺记事用的留言版。\n");
	setup();
	set("capacity", 30);
	// replace_program(BULLETIN_BOARD);
}
