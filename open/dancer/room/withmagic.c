// Room: dancer's rest room //by purple
inherit ROOM;
void create ()
{
	set("short","舞者谈心室");
  set ("long", @LONG
这里是舞者专用的聊天，谈心，交换心得的地方。加入舞者的
美少女们可以在此相互研讨。前辈们也可以将多余的装备放置
于此，以照顾新手们。幽雅的环境，点缀着几朵淡粉红的玫瑰
，及淡雅的花香，令人不禁忘记了疲惫.....，在这里(dancing)
看看，会有意想不到的结果喔~~
LONG);

  set("light_up", 1); 
  set("exits", ([ /* sizeof() == 2 */
        "east" : __DIR__"start",
]));
        set("objects",([
        "/open/dancer/obj/magicbook":1,
	]));
  set("no_magic", 1);
  set("no_fight", 1);

  setup();
}
void init()
{
  add_action("do_dancing","dancing");
}
int do_dancing()
{
  object me;
  me = this_player();
  me->move("/open/ping/room/road3");
  return 1;
}
