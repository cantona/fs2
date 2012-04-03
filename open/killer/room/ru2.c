inherit ROOM;
void create()
{
set("short", "兵器室入口");
set("long", @LONG
这里是一楼杀手兵器室的唯一入口，但是居然没有看到任何往一楼的通道？
这里是杀手总坛，机关最多的地方，你还是不要逗留，赶快离开吧！
传说，只有杀手有办法熟练的发现密道，一般人很容易中机关。。。。。

LONG
);
set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"ru1.c",
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
  int max;

  if (me->query("class") != "killer" )
  {
    message_vision("$N找来找去终于发现一个开关，看来找对了。\n", me);
    message_vision("$N非常兴奋的往按钮按去，按下的那一瞬间一阵机关鸣动声\n",me);
    message_vision("$N已经消失的无影无踪\n", me);
    max=me->query("kee");
    max= (int) (max/2);
    me->add("kee",-max);
    tell_object(me,"一阵冲撞力将你弹飞，落入陷阱之中一直坠落。。。。。\n");
    me->move(__DIR__"firstrm.c");
    return 0;
  }
  if (!arg)
  {
    message_vision("$N熟练的操作机关，开启一条往下的路。\n", me);
    set("exits/down", __DIR__"weaponrm.c");
    return 1;
  }
  else 
   return 0;
 }

int valid_leave(object me, string dir)
{
  int max;

  if (dir != "down") {
    this_object()->delete("exits/down");
    return 1;
  }
  if (me->query("class") != "killer")
  {
    message_vision("$N往下走去，但不小心触动机关，瞬间一阵机关鸣动声\n",me);
    message_vision("$N已经消失的无影无踪\n", me);
    max=me->query("kee");
    max= (int) (max/2);
    me->add("kee",-max);
    tell_object(me,"一阵冲撞力将你弹飞，落入陷阱之中一直坠落。。。。。\n");
    me->move(__DIR__"firstrm.c");
    return 0;
  }
  if (this_object()->query("exits/"+dir)) return 1;
  else return 0;
}