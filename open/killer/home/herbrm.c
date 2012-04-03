inherit ROOM;
void create()
{
set("short", "秘密种植室");
set("long", @LONG
四周水气弥漫,又有奇异的光芒，带着异常的寒冷，或许这里种着寒带植物。
这里真是个隐密的所在。。。。。

LONG );
set("exits", ([ /* sizeof() == 2 */
  "out" : __DIR__"outr5.c",
]));

setup();
}

void init()
{
  add_action("do_search", "search");
}

int do_search(string arg)
{
  object me=this_player();

  if (arg)
     return notify_fail("你找来找去也没发现什么特殊的地方。\n");
  message_vision("$N发现了富士山秘草，顺手拔了一把。\n", me);
  new("/open/killer/obj/herb.c")->move(me);
  message_vision("但似乎有人发现你的存在，于是你立刻翻了出去\n", me);
  set_temp("tree_hold",0);
  me->move(__DIR__"outr5.c");
  return 1;
}