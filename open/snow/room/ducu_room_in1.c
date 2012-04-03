#include <room.h>
#include "../../open.h"

inherit ROOM;

void create()
{
	set("short","独孤灵寝");
          set("long",@LONG
这里是独孤愁的灵寝，停放着一具棺木，外层用黑纱包住，棺木
所停放的想必是雪苍派的绝代高人独孤愁的灵体，相传独孤愁是无疾
而终的，但也有人怀疑独孤愁是遭人暗算而死，此外，另有一说，说
独孤愁是装死以瞒天下人耳目，但装死的目地为何，却又无法解释。
 
LONG);
        set("exits", ([
	"east":__DIR__"ducu_room_in",
	"north":__DIR__"ducu_room_in2",
        ]) );
	set("objects",([
		SNOW_OBJ"box":1,
	]));
	set("light_up",1);
        setup();
}
