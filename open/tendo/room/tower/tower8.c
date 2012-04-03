
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "锁妖塔八楼--");
  set ("long", @LONG
这是锁妖塔中的最后一层，看了看四周，心中深感不可思议，周围
尽是一堆堆的白骨，白骨旁散落着一堆堆的武器及装备，室内到处弥漫
着一种说不出的诡异气氛，时有听到动物惨叫的声音，时而闻到浓厚的
血腥味道令你不寒而颤。西侧的墙角似乎摆了一张架子 (shelf)，看起
来真不协调。
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
"shelf" : "一张长满灰尘的架子，不过似乎可以推的样子。
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"tower7",
]));
       set("no_transmit",1);

  setup();
}

void init()
{
add_action ("do_push","push");
}

int do_push (string str)
{
  object        me;
   if (!str || (str != "shelf" && str != "兵器架"&& str != "架子"))
return notify_fail("[1;32m哇咧．．没事不要乱推！[0m\n");

  me = this_player();
    message_vision("[1;32m地上突然出现一个洞，你来不及跳开便摔了下去!![0m\n", me);

    me->move(__DIR__"tower8-1.c");
    tell_room(environment(me), sprintf ("[1;32m%s像颗石头般摔了下来 .[0m\n",
     me->short()), me);
  return 1;
}


