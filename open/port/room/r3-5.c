// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
  set ("short", "学堂");
  set ("long", @LONG
这里是枫林港一家颇具规模的学堂 . 这家学堂是公家的 , 
为大财主史怀恩所捐献 . 许多枫林的居民都曾在此接受过基本
教育 .  

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r3-3",
]));

  setup();
}
int valid_leave(object me, string dir)
{
if(dir == "up")
if (me->query("id") != "guilty")
     return notify_fail("那个房间只有儒门弟子才能进去。\n");
     return :: valid_leave(me, dir);
}
