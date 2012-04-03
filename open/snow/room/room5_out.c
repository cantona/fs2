#include <room.h>

inherit ROOM;

void create()
{
	set("short","紫云宝殿门口");
	set("long","这里是紫云宝殿外面，大名顶顶的武者工会就在你面□只要加入了武者工会，就可以参加所有跟武者有关的门派。\n");
        set("exits", ([
		"north":__DIR__"room2",
		"down":__DIR__"room4",
        ]) );
	set("light_up",1);
        setup();
}
