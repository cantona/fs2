// Room: /open/main/room/M21.c

inherit ROOM;

void create ()
{
  set ("short", "雪苍山");
  set ("long", @LONG
这是雪苍山的底部，由于雪苍山笔直的山势，想下山必须经过
从谷底生长上来的一棵万年古松，往上则通达雪苍派的山口。往西
边跟南边则是雪苍山比较平坦的高地。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up"		: "/open/snow/room/room3",
  "southdown" : __DIR__"L8",
  "westdown" : __DIR__"L5",
]));

  set("outdoors", "/open/main");
  setup();
}

void init()
{
  add_action ("do_climb","climb");
}

int do_climb (string str)
{
  object	me;

  if (str != "pine" && str != "树" && str != "松树" && str != "苍松")
    return notify_fail("你爬呀爬呀.....噫? 突然想起自己又不是乌龟, 干麻用爬的!\n");
  me = this_player();
  message_vision("$N两手抱住树干，咻的一声，很快的溜下山。\n",me);
  me->move(__DIR__"f12");
  tell_room(environment(me),
	    sprintf ("%s顺着树干, 咻的一声, 飞快的溜了下来。\n", me->short()),
	    me);
  return 1;
}
