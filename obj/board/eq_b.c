inherit BULLETIN_BOARD;
								
void create()
{
	set_name("ＥＱ事务板",({"EQ stuff board", "board"}));
	set("location","/open/wiz/eq");
	set("board_id","eq_b");
	set("long",	"有关EQ报备申请讨论专用。\n");
	setup();
	set("capacity", 30);
	// replace_program(BULLETIN_BOARD);
}
							
