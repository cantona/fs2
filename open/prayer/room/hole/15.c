///open/prayer/room/hole/15.c

inherit ROOM;

void create()
{
	set("short", "洞穴");
	set("long", @LONG

	这里比刚刚走过的通道狭岝，墙上全是魔兽黏黏的唾液，也不知道
	有没有毒??处处充满危机，在这狭岝的地方也没办法施展武功，还
	是赶快离开这个鬼地方吧!!身上的药草也快要用完了....希望上天
	保佑能让你平安离开此地!!

LONG	);
    set("objects", ([ /* sizeof() == 2 */
   "/open/prayer/npc/emery-giant" : 1,		
   "/open/prayer/npc/bird" : 1,		
]));
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"4",
  "east" : __DIR__"14",
  "west":__DIR__"13",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}