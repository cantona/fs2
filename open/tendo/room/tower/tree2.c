inherit ROOM;
#include <ansi.h>
void create()
{
set("short", "松林");
set("long", @LONG
由于此处松树高大茂密，几乎将阳光都遮盖住了，似乎令人觉得
遍体生寒，将此地多增加了几许的神秘感，两旁树木缓缓摆动，似乎
是在叫人不要再继续前进。
LONG
);
set("exits",([ /* sizeof() == 2*/
"down" : __DIR__"tree1.c",
"up" : __DIR__"tree3.c", 
]));
set("objects", ([ /* sizeof() == 2 */
"/open/tendo/room/tower/npc/genies.c" : 2,
]));
set("outdoors",1);
setup();
}


