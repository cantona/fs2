#include <room.h>

inherit ROOM;

void create()
{
	set("short","密道内");
	set("long",@LONG
这是一条密道，这里充满着神秘的感觉，在北边似乎有一条通道，
不知是通往何处，雪苍派内的密秘到底是什么呢? 前面的通道到底通到
那? 然而在石壁上有刻着：
      
          「入八卦迷宫阵，生死难料”
  
          「东西南北，阴阳无极，破乾坤”
 
LONG);
        set("exits", ([
	"north":__DIR__"room5",
	  "out":__DIR__"ducu_room_in1",
        ]) );
        setup();
}
