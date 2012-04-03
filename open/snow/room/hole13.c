#include <room.h>

inherit ROOM;

void create()
{
           set("short","洞穴");
          set("long","洞穴第二层,由于景象都差不多,所以在没有完整的地图概念之前,最好不要误闯此处,在西面的石壁(wall)似乎有点古怪。\n");

        set("exits", ([
          "west":__DIR__"hole17",
          "east":__DIR__"hole18",
          "south":__DIR__"hole16",
        ]) );
        setup();
}
void init()
{
        add_action("do_look","l");
            add_action("do_look","look");
            add_action("do_key","push");
}
int do_look(string str)
{
         if(str!="wall") return 0;
         tell_object(this_player(),"你发现墙上有一个暗门(key)。\n");
          return 1;
}
int do_key(string str)
{
         if(str!="key") return 0;
        tell_object(this_player(),"结果「喀”的一声，你推动了石壁。\n");
          tell_object(this_player(),"你进入了密室。\n");
this_player()->move("/open/gblade/room/room26.c");
         return 1;
}
