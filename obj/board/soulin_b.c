// board.c
inherit BULLETIN_BOARD;
 
void create()
{
set_name("少林启示录",({"soulin board","board"}));
set("location","/open/soulin/room/big");
set("board_id","soulin_b");
set("long"," 一颗光溜溜的头顶上布满了密密麻麻的字!\n");
    setup();
    set("capacity",100);
    set("master",({ "minimum" }) );
}
