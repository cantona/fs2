#include </open/open.h>
#include <ansi.h>
inherit ROOM;

void create ()
{
set("short", "叶秀杀的卧室");
set("long", @LONG
   此处乃叶秀杀的专属卧室，一般时候可不是随便可以进来的。
   房间中，并没有特别的装饰品，只不过有几盆花与字画（word)。
   除此之外，大概也只有一旁的书柜比较显眼一点罢了。

LONG 
);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"masterm.c",
]) );
  set("item_desc", ([ /* sizeof() == 2 */
  "word":"一张平凡的字画，不过倒是令你注意到一旁的（花盆）\n",
  "sign":"按照它握了一下发现可以转动(turn),你是否该考虑(think)，以免误触陷阱\n",
]));
  set("search_desc", ([ /* sizeof() == 1 */
  "花盆" : "好像没什么特别的，但却有人的指印（sign)。\n",
  "mark" : "你调查暗扣之后，你按住暗扣，决定转（turn)了\n",
]));
  set("objects",([
  "/open/killer/npc/spy3.c":1,]));
  setup();
}
void init()
{
	add_action("do_think","think");
	add_action("do_turn","turn");
}

int do_think(string str)
{
  object me;
  
  me=this_player();
  message_vision("根据经验你决定，还是仔细观察一下，果然发现握柄处有暗扣（mark)\n",me);
  me->set_temp("diray",2);
  return 1;
}

int do_turn(string str)
{
	object me=this_player();
        
  if( str != "花盆" )
    return notify_fail("转什么？需要配附眼镜吗？？\n");
  if(me->query_temp("diray") != 2)
  {
    message_vision("不小心触动机关，一支花针射中$N。\n",me);
    me->add("kee",-30);
    return 0;
   }
  if(me->query_temp("diray") == 2)
  {
    message_vision(HIG"随着花盆的转动，字画卷了起来，密门打开。\n",me);
    message_vision("出现了一本叶秀杀的日记，正好翻到某一页\n",me);
    message_vision("内容‘唉。。。真是不小心，居然因为杀意魔戒放出太多杀气\n",me);
    message_vision("对招中，使因在密道中躲避不及的柴荣受了伤。\n",me);
    message_vision("可恶，把它封印在（专用兵器室）好了，希望外甥不要说出去\n",me);
    message_vision("不过兵器室的钥匙，好像上次掉在一楼了，都找不到。。。\n",me);
    message_vision("正当你想在看下去时，发现外面似乎有人来了，于是急忙退了出去\n\n"NOR,me);
    me->set_temp("diray",1);
    me->move(__DIR__"masterm.c");
    return 1;
  }
}
