inherit BULLETIN_BOARD;

void create()
{
        set_name("京城事务板",({"capital board", "board"}));
        set("location","/open/wiz/caproom");
	set("board_id","capital_b");
        set("long","京城区域讨论专用, 宣布事情或修改什么, 都是在这儿。\n");
        setup();
        set("capacity", 30);
}

