//room:/open/dancer/room/start.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{

  string long;
  set ("short", HIY "夜梦殿堂" NOR );

long = ""+
"              "HIY"夜梦殿堂"NOR"      \n\n"+
""+
"      这里是夜梦小筑的大殿"HIC"《"HIY"夜梦殿堂"HIC"》"NOR"，这里是夜梦\n"+
"  弟子们平常学习舞蹈、武术的地方，建筑得美仑美焕，\n"+
"  美丽的建筑再加上舞者们优美的舞蹈，真是会令人以为\n"+
"  身处幻境。往西则是舞者专用的聊天休息室喔！ \n\n ";



  set("long", long);
  set("light_up", 1);
  set("valid_startroom", 1);
  set("exits", ([ /* sizeof() == 3 */
  "south"     :"/open/dancer/room/rooms1.c",
  "east"     :"/open/dancer/room/roome1.c",
 "west"      :"/open/dancer/room/cafeteria.c",

]));
  set("objects", ([ /* sizeof() == 1 */
"/open/dancer/npc/master_yua.c":1,
]));

  setup();
  call_other("/obj/board/dancer_b.c","????");
}
int valid_leave(object me, string dir)
{
        if(me->query("class")!="dancer"&&dir=="west")
return notify_fail("喔喔！那里只有舞者才能进去呦~~\n");
return ::valid_leave(me,dir);
}
void init()
{
  add_action("do_dancing","dancing");
}
int do_dancing()
{
  object me;
  me = this_player();
  if(me->query("class")!="dancer")
return notify_fail("喔喔！这个只有舞者才能用呦~~\n");
 me->move("/open/center/room/inn");
  return 1;
}
