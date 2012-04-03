///open/prayer/room/hole/10.c

inherit ROOM;

void create()
{
	set("short", "洞穴");
	set("long", @LONG

	你一走进来就闻到了薰人的恶臭，一堆一堆的骷髅还有尸体，地上全
	都是令人做呕的蛆, 让你不知道下一步要怎么走, 唯有踩过这些呕心
	的蛆方可前进, 你觉得还是快走比较好, 再不走那些蛆就往你身上爬
	了! 

LONG	);
 
    set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/carapace-bee" : 1,		
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"12",
  "south":__DIR__"8",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}