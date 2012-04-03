///open/prayer/room/hole/16.c

inherit ROOM;

void create()
{
	set("short", "洞穴");
	set("long", @LONG

	此处充满黄色瘴气，在这待的愈久，愈使人晕眩，麻痹，令人匪夷
	所思的是，这瘴气好像停留在半空不散!!一些零零散散的白骨呈现
	在你眼前，看来这些魔兽不只吃肉，还喜欢啃骨头，若是没十分本
	事，下一具尸首很可能会是自己......

LONG	);
 
    set("objects", ([ /* sizeof() == 2 */
   "/open/prayer/npc/crab-ox" : 1,		
   "/open/prayer/npc/carapace-bee" : 1,		
]));
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"14",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}