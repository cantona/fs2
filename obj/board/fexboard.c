//Code by Fex ..

inherit BULLETIN_BOARD;

void create()
{
        set_name("武馆巫师讨论板", ({ "board" }) );
        set("location", "/open/wu/hall/wizroom" );
        set("board_id", "fexboard");
        set("long",
                "这是一个武馆巫师专用的布告栏, 供本Group巫师使用\n"
                ", 巫师可将问题或是特殊写作技巧贴上来,Hitler有空会\n"
                "将讨论出之精华整理成册..供更多巫师参考..cccc...\n");
        setup();
        set("capacity", 50);
        // replace_program(BULLETIN_BOARD);
	// 设这样就能让那些人 discard post 啰, 
	// 这是 wade 新增功能 11/22/1995
	set("master", ({"hitler","oda"}) );
}
