//增加ppl exp侦测，房止ppl利用follow溜进来
//modify by cyw at 91/04/02
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[0;1;31m□[1m□[1m□[1ms[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mt[0m");
  set ("long", @LONG
这里是结界的边缘, 这里的魔法力就没那么的强烈了, 天候温度跟平
常一样, 但还未离开幻界的控制范围, 这里有一根直达云际, 十分奇怪的
巨石, 这个也是拿来巩固结界用的吧! 
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : "/open/fire-hole/f-3.c",
  "southwest" : __DIR__"f-2.c",
]));
  set("outdoors", 1);

  setup();
}
void init()
{
      call_out("do_check",1,this_player()); 
}
void do_check(object me)
{
      if(me->query("combat_exp" ) < 5000000 && userp(me) && living(me)) {
        message_vision(HIR"$N抵抗不了火龙幻界的热度，被天神传送回起点！\n"NOR,me);
        me->move(me->query("startroom"));
        me->set( "clan/out","/open/center/room/inn");
      }else  
      me->set_temp("check_ok",1);
}
int valid_leave(object who, string dir)
{
	if (dir == "southwest" || dir == "southeast")
	{
		if(!who->query_temp("check_ok",1))
		  return notify_fail(HIY"赶着去死也不用冲这么快吧!!\n"NOR);     
	        who->delete_temp("check_ok",1);
        }
        return :: valid_leave(who,dir);
}
