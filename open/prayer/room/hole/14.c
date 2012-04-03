///open/prayer/room/hole/14.c

inherit ROOM;

void create()
{
	set("short", "洞穴");
	set("long", @LONG

	这里使你感到非常阴凉，前面冷风飕飕不停吹来，让你浑身上下都
	不舒服，魔兽的咆啸声不停在你耳际回荡，而地上闪闪发亮的都是
	魔兽身上剥落下来的鳞片!!

LONG	);
    set("objects", ([ /* sizeof() == 2 */
   "/open/prayer/npc/lion" : 1,		
   "/open/prayer/npc/carapace-bee" : 1,		
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"16",
  "east":__DIR__"19",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}