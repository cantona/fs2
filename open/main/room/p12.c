// ~babe~ (小雪球) ^O^
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "沼泽");
  set ("long", @LONG
这是一片充满污泥的沼泽,几支芦苇抽枝而起,却掩盖不住
这里的泥狞与恶臭,点点浮萍漂在地面的污水上,你恨不得敢快
离开,但是你发现沼泽旁边有一棵树干怪怪的。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/main/room/p6",
  "west" : "/open/main/room/p11",
  "south" : "/open/main/room/p18",
]));

  set("outdoors", "/open/main");

  setup();
set("search_desc", ([ /* sizeof() == 1 */
"trunk" : HIM"树干上写着十二邪星瞬间移动的心法(star)。\n"NOR,
]));
}

void init()
{
  add_action("babe_home","star");
}
int babe_home( string str )
{
  object babe = this_player();
  message_vision(HIW"$N向"HIC"雅典娜女神"HIW"请求"HIY"祝福"HIW"，瞬间身体隐一阵光芒。\n",babe);
//babe->move("/open/clan/evil/evil.c");
  message_vision("当$N的身影从"HIY"光芒"NOR"中走出，"HIW"□HIC"□HIW"□HIC"□NOR"的"HIB"邪气"NOR"瞬时围绕着$N身体四周。\n",babe);
  return 1;
}
