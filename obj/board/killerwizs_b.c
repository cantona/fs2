// chen_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("玩家讨论版",({"killer wiz board","board"}));
    set("location","/open/killer/room/boardrm");

	set("board_id","killerwizs_b");
	set("long","巫师及玩家交流版。\n");
	setup();
	set("capacity", 100);
	// replace_program(BULLETIN_BOARD);
}
