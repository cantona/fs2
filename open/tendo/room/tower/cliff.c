#include <room.h>
inherit ROOM;
void create()
{
        set("short", "峭壁");
	set("long", @LONG
这是一片峭壁的正下方，由于这个地方只是一片峭壁，所以根本很
少人在此逗留，而这里也是一片荒芜的景象，峭壁上垂满了蔓生的藤，
而峭壁下也都长满了高过人头的杂草(brush)。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south"  : "/open/tendo/room/tower/cave2",
]));
	set("outdoors", 1);
	setup();
}
void init()
{
        add_action("enter_brush", "enter" );
}
int enter_brush(string str)
{
    if(str!="brush")
      {
       write("你要进去那里啊？\n");
        return 0;
      }
      else
      {
       write("[1;32m你拨开了草丛，走了进去。[0m\n");
        say("[1;32m"+this_player()->query("name")+"穿过了草丛，发出沙沙声。[0m\n");
       this_player()->move("/open/tendo/room/tower/room5a");
       say("[1;32m草丛发出沙沙声，"+this_player()->query("name")+"拨开了草丛，走了进来。[0m\n");
       return 1;
}
}


