// Room: /d/oldpine/pine1.c

inherit ROOM;

void create ()
{
  set ("short", "蜀山奇阵之五行");
  set ("long", @LONG
你看到满山的树木围着你,你的四周只是一片: 树 !! 树 !!
树 !! 无数藤蔓缠绕着你的身体,却又不对你造成任何损伤,幻像
?? 是的幻像,这一定只是幻像 !! 只要你能勘破幻像,必能破解这
奇阵...
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "gold" : __DIR__"mroom3",
  "land" : __DIR__"mroom3",
  "fire" : __DIR__"mroom2",
  "water" : __DIR__"mroom1",
]));
  set("light_up", 1);

  setup();
}

void reset()
{
	::reset();
	set("exits", ([ 
	  "fire" : __DIR__"mroom" + (random(4)),
	  "water" : __DIR__"mroom" + (random(4)),
	  "land" :  __DIR__"mroom3",
	  "gold" :  __DIR__"mroom" + (random(4)),
	]));
}

int valid_leave(object me, string dir)
{
	write("无数荆棘环绕着你....\n");
	switch(dir) {
		case "fire":	write("你往火相离开.....\n");	break;
		case "land":	write("你往土相离开.....\n");	break;
		case "water":	write("你往水相离开.....\n");	break;
		case "gold":	write("你往金相离开.....\n");	break;
		default:
			write("你通过一片荆棘....");
	}
	return 1;
}
