inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG

这里已经是地道的深处，空气因为长久没有流通，味道相当的难闻，在这
个地方待久了，胸口觉得闷闷的，头也有点不舒服，还是快一点离开免得
晕倒在这个地方。地上躺着几具尸体 , 其中一具尸体旁写着几个殷红大
字(words) , 似乎是他临死前所写 !

LONG);

set("item_desc",
	(["words" : "年轻人 ,能看到这些字 , 即为有缘人 , 我要劝你一句话 :
再往前走 , 你的下场就跟我们一样 !!

						追风神剑 庄秋鸿 血笔
",]));
  set("light_up",0);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"c2-6.c",
  "south" : __DIR__"c2-4.c",
]));

  setup();
}
