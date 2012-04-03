inherit ROOM;
void create()
{
set ("short", "花园");
  set ("long", @LONG
   这里种了不少奇花异草，看来有不少是药草，但你却不了解它的功用。
   随风飘来的花香令你不禁沈醉其中，令你仔细地欣赏起花来。
   却发现这里，居然全部种植来自东洋的植物，看来这里蛮值得怀疑。。。。
   不过或许是自己多疑了吧。。。。。

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
      "north" : __DIR__"outr4.c",
      "east"  : __DIR__"outr2.c",
]));
setup();
}

void init()
{
  add_action("do_search", ({"search"}));
  add_action("do_push", ({"push"}));
  add_action("do_puton", ({"puton"}));
}

int do_search(string arg)
{
  object me=this_player();
  int query;

  query=me->query_temp("herb_1");
  if (arg)
    if (query > 1) 
       return notify_fail("还想进去拿呀！小心被发现！！。\n");
  else return 0;
  message_vision("$N找来找去终于发现按钮(button),或许可以(puton)\n", me);
  return 1;
}

int do_push(string arg)
{
  object me=this_player();
  int query;

  query=me->query_temp("herb_1");
  if (arg != "button")
    return 0;
  if (query > 1) 
    return notify_fail("还想进去拿呀！小心被发现！！。\n");
  message_vision("$N按了一下，发现有树中出现通道。\n", me);
  message_vision("但是，手一放开又合上了，或许该找个(rock) \n", me);
  return 1;
}

int do_puton(string arg)
{
  object me=this_player();
  object ob;
  int query;

  if ( arg != "rock" )
     return notify_fail ("你想拿什么来压呀？。\n");
  if ( present("rock",me) )
  {
    message_vision("$N用石头压住按钮，发现有树中出现通道。\n", me);
    ob=present("rock",me);
    destruct(ob);
    me->set_temp("tree_hole",1);
    set("exits/tree", __DIR__"herbrm.c");
    return 1;
  }
  return 0;
}

int valid_leave(object me, string dir)
{
  if (dir != "tree") 
  {
    this_object()->delete("exits/tree");
    return 1;
  }
  if (me->query_temp("tree_hole") != 1)
    return 0;
  this_object()->delete("exits/tree");  //只可进去一次
  return 1;
}
