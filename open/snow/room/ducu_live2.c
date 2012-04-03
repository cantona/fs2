#include <room.h>

inherit ROOM;

void create()
{
	set("short","独孤居小厅");
          set("long",@LONG
这里是独孤居的正厅，虽然只是一间小房厅，但布置格局有
股文人气息，没有一代武宗般的气势。独孤愁平时练功练至黄昏
之时，便会泡壶清茶，坐在这小厅之中，细细品味闲居之乐。
 
 
LONG);
        set("exits", ([
	"out":__DIR__"ducu_live1",
	"west":__DIR__"ducu_live3",
        ]) );
	set("light_up",1);
        setup();
}
