#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
  set_name("这是朱特的小小留言版", ({"board"}));
  set("location","/u/j/jute/workroom.c");
  set("board_id","jute_b");
  set("long", "这是朱特的留言版\n");
    setup();
   set("capacity", 100);
  set("master",({"jute"}));
}

