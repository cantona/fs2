inherit ROOM;
#include <ansi.h>
void create()
{
        set("short", "凉亭");
        set("long", @LONG
此亭架设在长方形的水池上，重檐构顶，上覆红瓦，亭顶处再扣
一个造型华美的宝顶，下面则是白石台阶，栏杆雕纹精美，只见这座
亭，便可以感受到造者的品味与匠心。
LONG
);
set("exits", ([ /* sizeof() == 2 */ 
"north" : "/open/tendo/room/tower/water2.c", 
"west" : "/open/tendo/room/tower/tomb.c",
]));
set("objects", ([ /* sizeof() == 2 */
"/open/tendo/room/tower/npc/genies.c" : 2,
]));
      set("outdoors",1);
	setup();

}


