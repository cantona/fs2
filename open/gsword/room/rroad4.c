#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "小径");
        set("long", @LONG
这是一条满布青苔的小路,由地上的痕迹看来,这似乎鲜少有人经过,
两旁的巨石足足有10尺高,看的你不禁连连咋舌,前方暗蒙蒙的一片
隐隐约约好像看到有两个人的身影.          



LONG
        );

        set("exits", ([
"north": "/u/b/bigcat/room/lnroad1",
"down": "/u/b/bigcat/room/rroad2"
        ]) );
        
setup();

}
