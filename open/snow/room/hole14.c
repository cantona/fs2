#include <room.h>

inherit ROOM;

string do_look();

void create()
{
           set("short","洞穴");
          set("long",@LONG
穴洞第二层, 由于景象都差不多, 所以在没有完整的地图概念之前,
最好不要误闯此处,在西面的石壁似乎有点古怪。
LONG);

        set("exits", ([
          "west":__DIR__"hole19",
          "east":__DIR__"hole20",
          "north":__DIR__"hole15",
        ]) );
	set("search_desc", ([
	    "wall" :	(: do_look :),
	    "石壁" :	(: do_look :),
	]) );
        setup();
}
void init()
{
	add_action("do_key","push");
}

string do_look()
{
         return "你发现墙上有一个暗门，门旁有个钥匙(key)孔，\n"+
	        "也许可以压压看(push)。\n";
}
int do_key(string str)
{
         if(str!="key") return 0;
        tell_object(this_player(),"结果「喀”的一声，你推动了石壁。\n");
          tell_object(this_player(),"你进入了密室。\n");
        this_player()->move(__DIR__"hole26");
         return 1;
}
