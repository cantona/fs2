#include <room.h>

 inherit ROOM;

 void create()
{
      
        set("short", "岩穴");
        set("long", @LONG
这儿是岩穴的内部，潮湿的空气让你连呼吸都有些窒碍不通，你好想赶快离开
这个鬼地方，地上的小碎尖石刺得你浑身不舒服。不过这儿岩壁上的拳印又比
出口处要多了一些，而且更为明显了。
LONG
        );

        set("exits", ([
"west":__DIR__"whole1",
"east":__DIR__"hole"
        ]) );
setup();

}
