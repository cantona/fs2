// board.c
inherit BULLETIN_BOARD;

void create()
{
    set_name("威威的小黑板", ({ "weimin board", "board" }) );
    set("location", "/u/w/weimin/workroom");
    set("board_id", "weimin_b");
    set("long", "这个黑板是威威平常涂鸦用的,有事写在上面他就看的到了。\n" );
    setup();
    set("capacity",100);
    set("master",({ "weiwei" }) );
}
