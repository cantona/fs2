#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
	set_name("电子布告栏", ({"board"}));
  set("location","/u/j/judd/workroom.c");
  set("board_id","judd_b");
  set("long", "这是小张宇的电子留言版\n");
    setup();
   set("capacity", 100);
  set("master",({"judd"}));
}

