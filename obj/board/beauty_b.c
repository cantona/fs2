// board.c
inherit BULLETIN_BOARD;
 
void create()
{
    set_name("柔情记事", ({ "board" }) );
    set("location", "/u/b/bebeauty/workroom");
    set("board_id", "beauty_b");
    set("long", "语柔拿来记事情用的板板..\n" );
    setup();
    set("capacity", 70);
    set("master",({ "bebeauty" }) );
}
