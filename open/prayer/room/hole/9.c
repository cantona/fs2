///open/prayer/room/hole/9.c

inherit ROOM;

void create()
{
	set("short", "洞穴");
	set("long", @LONG

	走到这里你感到一阵徬惶，往东往西都是浓雾，根本无法辨出方
	向，还不时闻到一股强烈的腥味，令人不禁作呕，四周散布着红
	色烟雾，你开始告诉自己不用勉强，早点回头，留得青山在，哪
	怕没材烧......

LONG	);
 
    set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/room/npc/crab-ox" : 1,		
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"11",
  "north":__DIR__"7",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}