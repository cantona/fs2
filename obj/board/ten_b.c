// tendo_b.c by borstquc

inherit BULLETIN_BOARD;

void create()
{
        set_name("天道派留言板",({"board"}));
set("location","/open/tendo/room/eqroom");
	set("board_id","ten_b");
	set("long", @LONG
这里是专门用来记录有关天道的种种，新玩家可以在这请求帮忙(以天道派的优先)
老玩家可以在这发表玩的感想。让后来的玩家容易上手...
LONG);
	setup();
	set("capacity", 100);
set("master",({"airke"}));
}
