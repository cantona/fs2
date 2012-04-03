// Room: /open/capital/room/general
inherit ROOM;

void create ()
{
  set ("short", "镇远侯府前");
  set ("long", @LONG
你来到了鼎鼎大名的镇远侯府, 前方幢立了一栋三层楼的屋宇, 整
栋漆成了大红色, 粱上盘踞着一条八爪金龙, 徐徐如生, 使你错觉到龙
的胡须似乎随风飘动。屋子的大门大开, 好像在欢迎你的来临。

LONG);

  set("light_up", 1);


  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/capital/room/r55",
]));

  setup();
}
