// board.c
inherit BULLETIN_BOARD;

void create()
{
    set_name("恋恋情深版", ({ "night board", "board" }) );
    set("location", "/u/n/night/workroom");
    set("board_id", "night_b");
    set("long", "这个黑板是威威平常涂鸦用的,有事写在上面他就看的到了。\n" );
    setup();
    set("capacity",100);
    set("master",({ "night" }) );
}
