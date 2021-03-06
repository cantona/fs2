// inn.c

#include </open/capital/capital.h>

inherit ROOM;

string look_sign(object me);

void create ()
{
  set ("short", "悦来客栈");
  set ("long", @LONG
你现在京城南边的悦来客栈里，这家客栈是方圆五百里内最负盛名
的一家，客栈的主人干通天在城内拥有许多的产业，据说连朝廷命官都
对他礼遇有加，如果你想在此地找他的碴话，那得先算算你的脑袋有几
颗了。
    来自各地的旅人都喜欢聚集在这里交换旅途上的见闻，你也可以在
里打听到许多有趣的消息。楼上是贵宾席，通常是给有钱有势的大爷们
坐的。靠近门口的地方挂着一块乌木雕成的招牌(sign)。

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : (: look_sign :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"h15",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/waiter2" : 1,
]));

  setup();
}

string look_sign(object me)
{
		return "招牌写着：悦来客栈。旁边一排字：干通天题。\n";
}
