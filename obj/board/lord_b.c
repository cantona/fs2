inherit BULLETIN_BOARD;

#include <ansi.h>
void create()
{
  set_name(HIC"段家交流版"NOR, ({"board"}));
set("location","/open/ping/room/talkroom.c");
  set("board_id","lord_b");
  set("long",HIC"古色古香的石碑,可以让你尽情刻字...\n"NOR);
    setup();
    set("capacity", 80);
set("master",({"adam","xboy"}));
}
