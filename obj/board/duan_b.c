inherit BULLETIN_BOARD;

void create()
{
        set_name("段家留言版",({"duan board", "board"}));
        set("location","/open/ping/room/p1");
        set("board_id","duan_b");
        set("long","段家门人打屁专用, 若要建议有关段家门派的事, 也是在这。\n");
        setup();
set("capacity", 50);
set("master",({"adam","xboy"}));
}

