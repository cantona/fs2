// gfs_b.c 图形化fs讨论区

inherit BULLETIN_BOARD;

void create()
{
         set_name("图形化fs讨论版",({ "gfs board ","board"}));
        set("location","/u/w/wade/gfs");
        set("board_id","gfs_b");
	set("long", @LONG
这是一个专门讨论图形化fs的布告栏
LONG);
	setup();
    set("capacity", 300);
}
