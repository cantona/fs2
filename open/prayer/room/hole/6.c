///open/prayer/room/hole/6.c

inherit ROOM;

void create()
{
	set("short", "洞穴");
	set("long", @LONG

	走到此处，忽然惊觉四处邪气阵阵，地上血迹未干，显然这里有
	过一阵厮杀，强烈的杀气让你感到危机，看来还是小心为妙....
        在洞穴的一个角落有一位身受重伤的人在那里，你是否要过去看
	看呢??

LONG	);
 
    set("objects", ([ /* sizeof() == 2 */
  "/open/prayer/npc/crab-ox" : 1,		
  "/open/prayer/npc/hurter" : 1,		

]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"8.c",
  "south":__DIR__"4.c",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}