#include <room.h>
#include "/open/open.h"
inherit ROOM;
void do_west();
void create()
{
          set("short","雪泉洞内");
        set("long",@LONG
这里是雪泉洞内，两旁是潮溼的石壁，在这听到的是流水声
及圣兽的狂叫声，传说圣水就在洞内，但有圣兽保护，令人
不禁害怕。
LONG);
        set("exits", ([
		"south":__DIR__"water4",
		"west":__DIR__"water6",
      ]));
	set("objects",([SNOW_NPC"sec_anm2":1]));
        setup();
}
