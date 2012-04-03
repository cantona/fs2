// Room: /open/main/room/d10.c

inherit ROOM;

void create ()
{
  set ("short", "沙漠");
  set ("long", @LONG
这儿是一望无际的撒哈拉沙漠，西北边有一栋建筑依势而建，
从这儿看过去, 却看不到入口, 不知它的门是在哪一边?
南边则现出稀稀疏疏的草皮, 想来那边应该有水吧?
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"d11",
  "west" : __DIR__"r1",
  "south" : __DIR__"s10",
  "north" : __DIR__"d3.c",
]));
  set("outdoors", "/open/main");

  setup();
}
int valid_leave(object me, string dir)
{
if(dir == "up")
if(me->query("combat_exp") < 2400000)
return notify_fail("你的武学经验太低了。\n");
     return :: valid_leave(me, dir);
}
