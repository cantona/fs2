#include <room.h>
inherit ROOM;
void create()
{
        set("short","诊疗室");
        set("long", @LONG

    墙上两幅斗大的书法字写着「医者大忌杀龊”，「二忌见死不救”
，你不尤得钦佩华陀的行医风范，平时他以爱心教导门徒，更重视以德
福人。

LONG
        );        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"4",             
        "west":__DIR__"8",             
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/doctor/npc/woman" : 1,
        "/open/doctor/npc/man" : 1,                
]));

   setup();
}

