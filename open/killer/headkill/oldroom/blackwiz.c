#include <room.h>

inherit ROOM;

 
void create()

{
  
	set("short", "玩家议见发表室");
  
	set("long", @LONG
  
		各位...最近本派非非非非非常之冷清,
		因此希望玩家能够多多建议一些
也欢迎暂时灌水亦可....
                       
		玩家可开始在此留言了....no idea.






看到当年的叙述，不知道你的想法是什么？
这里是杀手以前的交谊室，但也几乎没有人来。
或许是杀手实在太弱了吧？
虽然你到目前还不知道你为何会在这里，但是你还是到处去看看吧？
LONG);
        
	set("exits", ([ /* sizeof() == 1 */
	
		"south":__DIR__"r3",
	
///         "west":__DIR__"r0.c",
  
	]));
       
	setup();
        


//	call_other("/obj/board/killerwiz_b","???");

}

/*
int valid_leave(object me, string dir)

{
  
	if (me->query("class")!="killer" && dir=="west")
 
		return notify_fail("这是杀手的禁地!由于你没练[1m霸雨螫魂[0m,				故你无法进入!\n");


	return ::valid_leave(me,dir);

}


void init()

{
  
	add_action("do_pass","pass");

}


int do_pass()

{
  
	object me;
  
	me = this_player();
  
	me->move("/open/center/room/inn");
  
	return 1;

}

*/
