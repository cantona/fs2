inherit BULLETIN_BOARD;

void create()
{
	set_name("道听途说板",({"who says board","board"}) );
	set("location","/open/capital/room/inn");
	set("board_id","inn_b");
	set("long", @LONG
	这是一个让来自各地的旅客发表见闻的
		㊣道听途说板⊙
	
LONG);
	setup();
	set("capacity", 50);
}
