// start_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("酸甜苦辣留言板",({ "board" }) );
    set("location", "/open/trans/room/room4");
	set("board_id", "start_b");
	set("long","\t这是一个让玩家表达意见的留言版\n");
	setup();
	set("capacity", 100);
}
