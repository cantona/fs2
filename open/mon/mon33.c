inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "攀岩道");
        set ("long", @LONG
历经了一番的辛劳，你终于登上了长白山上的攀岩道，在这一片
广大的岩道上，无情的山风吹向你，让你快站不住脚，溼冷的空气濔
漫在空气之中，你只能继续的往上爬。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "up"      : __DIR__"mon34",
]));
        setup();
}

void init()
{
  add_action ("do_climb","climb");
}

int do_climb (string str)
{
  object        me;

  if (str != "rock" && str != "岩石")
    return notify_fail("你爬呀爬呀......你爬了半天还是不幸重重的捽了下来.....\n");
  me = this_player();
  message_vision("$N运起十足的轻功，一溜烟的就不见踪影了。\n",me);
  me->move(__DIR__"mon28");
  tell_room(environment(me),
            sprintf ("%s运起十足的轻功，身形立稳之时，已经溜下了攀岩道。\n", me->short()),
            me);
  return 1;
}

