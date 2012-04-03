// Room: /open/tendo/room/t06.c

inherit ROOM;

void create()
{
	set("short", "道观的外围步道");
	set("long", @LONG
你正走在道观的外围步道上，上面铺着坚硬的水磨青
砖，四周种满了翠绿的数木，令人心神舒畅。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"t01",
  "east" : __DIR__"t07",
	"west" : __DIR__"t12",
]));
	set("light_up",1);
	setup();
}
/*
void init()
{
        add_action("do_search", "search");
}
*/

int do_search()
{
        object who;
        who = this_player();

        tell_object(who,"\n你趴在地上把书堆翻开，猛然看见一个地道，地道中的强"+
			   "烈气流把你吸入了地道.....\n");
        who->move("/open/tendo/room/r0");
        tell_room(this_object(),"你看到"+who->query("name")+"被地道中的强烈气"+
				 "流给吸入了.....\n");
        return 1;
}
