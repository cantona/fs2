// Room: /d/oldpine/pine1.c

inherit ROOM;

void create ()
{
  set ("short", "蜀山奇阵之五行");
  set ("long", @LONG
你看到一阵风沙漫天而来,你的四周只是一片____ 尘土 _____
飞扬,飞沙走石狂暴的冲击你的身体,却又不对你造成任何损伤,幻像
??  是的幻像,这一定只是幻像 !! 只要你能勘破幻像, 必能破解这
奇阵...
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");
  set("exits", ([ /* sizeof() == 4 */
  "wood" : __DIR__"mroom3",
  "gold" : __DIR__"mroom3",
  "fire" : __DIR__"mroom1",
  "water" : __DIR__"mroom4",
]));

  setup();
}

void reset()
{
	::reset();
	set("exits", ([ 
	  "wood" : __DIR__"mroom" + (random(4)),
	  "water" : __DIR__"mroom4",
	  "gold" :  __DIR__"mroom" + (random(4)),
	  "fire" :  __DIR__"mroom" + (random(4)),
	]));
}

int valid_leave(object me, string dir)
{
	write("一阵风沙卷袭着你....\n");
	switch(dir) {
		case "wood":	write("你往木相离开.....\n");	break;
		case "fire":	write("你往火相离开.....\n");	break;
		case "water":	write("你往水相离开.....\n");	break;
		case "gold":	write("你往金相离开.....\n");	break;
		default:
			write("你通过一阵风暴....");
	}
	return 1;
}
