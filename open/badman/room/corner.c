#include <ansi.h>
#include <mudlib.h>
inherit ROOM;
int do_list();
int do_trade(string);
void create() {
set("short","狼棚角落");
set("long",@LONG
这里是整个棚子的一角，有个老年人站在这，为毫无人烟的村子
添加了点生气。他正在为狼群准备食物，你看到他和狼群间的关系是
如此亲密，或许可以跟他要匹狼来骑骑吧。
LONG);
  set("exits",([ /* sizeof() == 1 */
  "center" : __DIR__"wolf09.c",
]));
  set("objects",([ /* sizeof() == 1 */
  "/open/badman/ride/rider.c" : 1,
]));
  set("light_up", 1);
        set("no_kill", 1);
set("no_fight", 1);
        set("no_magic", 1);
        setup();
}
void init() {
  add_action("do_trade","want");
}

int do_trade(string str) {
  int exp;
  object me,wolf;
  me=this_player();
  exp=me->query("combat_exp",1);
  if(me->query_temp("marks/have_wolf",1))
  return notify_fail("[1;33m不是给你拿走一匹了吗？[0m\n");
  if (me->query("marks/ride_wolf")!=1)
  return notify_fail("[1;33m虽然狼是我在养，但所有权是莨大爷的啊！[0m\n");
  if (exp<350000)
  return notify_fail("[1;33m你要骑？我看不太行吧？再去练练吧！[0m\n");
  new("/open/badman/ride/r_wolf.c")->move(environment(me));
  me->set_temp("marks/have_wolf",1);
  message_vision("[1;37m许老从狼群中挑了一只红狼来。[0m\n",me);
  return notify_fail("[1;32m这狼就交给你啦，要好好照顾啊！[0m\n");
}
