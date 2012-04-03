// Room: /open/main/room/d3.c

inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "沙漠");
  set ("long", @LONG
这儿是一望无际的撒哈拉沙漠，西边有一栋建筑依势而建，
从这儿看过去, 却看不到入口, 不知它的门是在哪一边?
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"d10",
  "east" : __DIR__"d4",
  "west" : "/open/love/room/room.c",
]));
  set("outdoors", "/open/main");

  setup();
}
int valid_leave(object me,string dir)
{

if (me==this_player() && dir == "up")
if ( me->query("combat_exp") < 2400000)
     return notify_fail("修罗道需要两百万以上的玩者才能进入\n");
     return :: valid_leave(me, dir);
        {
tell_object(me,HIM"你感受到修罗道的力场影响，全身颤抖了一下。\n"NOR);
/*message("mud",HIW"

                    一道闪光窜出 ...


"HIC"狂想的壮士"+HIY+me->query("name")+HIC"进入了前往天界的修罗之道
 为了自身的磨练，前往未知之途 ..

"NOR,me);
*/
        }
if ( me->query("combat_exp") < 2000000)
     return notify_fail("修罗道需要两百万以上的玩者才能进入\n");
     return :: valid_leave(me, dir);
}
