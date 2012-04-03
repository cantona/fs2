#include <room.h>
inherit ROOM;
void create()
{
        set ("short", "诊疗室");
        set ("long", @LONG
走到这里，看到许多病人病厌厌地坐在椅子上，医生们走来走去，
只见原本病厌厌的病人，一下子就生龙活虎起来，银针门医术天下第一
，果然名不虚传。往南是银针门的玄关 (open door)。
LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"5",                   
        "south":__DIR__"1-door",            
        "east":__DIR__"7",             
        "west":__DIR__"9",            
        ]) );

        set("light_up", 1);
        create_door("south","红木刻纹大门", "north",DOOR_CLOSED);
   setup();
}


