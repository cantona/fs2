// assassin.c by borstquc

inherit BULLETIN_BOARD;

void create()
{
        set_name("来来专用版",({"board"}));
        set("location","/u/a/assassin/workroom");
        set("board_id","assassin");
        set("long", @LONG
这是舞者巫师来来的专用版
                                                fs borstquc
LONG);
        setup();
        set("capacity", 100);
}
