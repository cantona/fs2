//open/prayer/room/kicthen2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "厨房");
  set ("long", @LONG

	    这里是处理所剩余的菜渣的地方，因此显
	得有些凌乱不墈，并有阵阵的恶臭传出，看来
	还是快些离开好了．

LONG);
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/kicthen5",		//`厨房
	"east" : "/open/prayer/room/kicthen3",		//`厨房
]));
   set("light_up", 1);

  setup();
}
 
