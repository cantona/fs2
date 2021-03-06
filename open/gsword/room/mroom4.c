// Room: /d/oldpine/pine1.c

inherit ROOM;

void create ()
{
  set ("short", "蜀山奇阵之五行");
  set ("long", @LONG
你看到一片汪洋连天,你的四周只是一片: 水 !! 水 !! 水
 !! 涛天巨浪冲袭着你的身体,却又不对你造成任何损伤, 幻像
?? 是的幻像,这一定只是幻像 !! 只要你能勘破幻像,必能破解
这奇阵...
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");
  set("exits", ([ /* sizeof() == 4 */
  "wood" : __DIR__"mroom3",
  "gold" : __DIR__"mroom2",
  "land" : __DIR__"mroom1",
  "fire" : __DIR__"mroom5",
]));

  setup();
}

void reset()
{
	::reset();
	set("exits", ([ 
	  "wood" : __DIR__"mroom" + (random(4)),
	  "land" : __DIR__"mroom" + (random(4)),
	  "fire" : __DIR__"mroom5",
	  "gold" : __DIR__"mroom" + (random(4)),
	]));
}

int valid_leave(object me, string dir)
{
	write("涛天巨浪冲袭着你....\n");
	switch(dir) {
		case "wood":	write("你往木相离开.....\n");	break;
		case "land":	write("你往土相离开.....\n");	break;
		case "fire":	write("你往火相离开.....\n");	break;
		case "gold":	write("你往金相离开.....\n");	break;
		default:
			write("你穿过一道巨浪....");
	}
	return 1;
}
