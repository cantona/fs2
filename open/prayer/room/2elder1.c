//open/prayer/room/2elder1

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "执法长老房");
  set ("long", @LONG

            圣火教总舵三位护教长老之一的执法长老
	所专属的办公处。长老正在为处罚犯了教规的
	门徒伤脑筋。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/lawyer-elder" : 1,		//执法长老
]));
  set("exits", ([ /* sizeof() ==  1*/
	"east" : "/open/prayer/room/2elder3",		//`长老房
]));
 set("light_up", 1);
  set("valid_startroom", 2);

  setup();
}
 
void init()
{
 add_action("search_here", "search");
}

int search_here(string str)
{
    if( (this_player()->query("combat_exp",1) > 100000)  )
    {
    write("房间背后有一道暗门!!\n");
      set("exits/west",__DIR__"bottle-room");
      call_out("do_close",10);
    }
    else
    {
    write("也许是你经验不足,你什么也没发现...\n");
    }    
return 1;
}

void do_close()
{
	if(!query("exits/west"))
		return;
	delete("exits/west");
	tell_room(this_object(),"暗门自动地关上了。\n");
}

