inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG

地道阴暗又潮湿，真不是人待的地方，大概只有变态才会找人来开这样的
一条地道，你开始在想是不是应该趁还能回头的时候趁早回头。
地道在这里分成了两个方向，往北的通道上满是血迹，仿佛提醒你那是一
条危险的不归路。你看到北边的墙壁上写着几个字(words)。

LONG);
	set("item_desc",
	(["words" : "会往前走的 , 不是自信过了头 , 就是愚昧到了家 !

					仙剑  郑士欣 
",]));

  set("light_up",0);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"c2-1.c",
  "south" : __DIR__"c1.c",

]));

  setup();
}
