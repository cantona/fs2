#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
  set( "long", "那时我正在当兵,快退伍时(九八年五月)回来分站时发现竟然要重开
(reopen),这一次的重开(reopen)虽然不得以,但也没有办法,同时也
流失了一堆玩家如：第一位勇闯Mogi的hero..等,同时间也因为如此
令booker等人觉得玩别人的Mud实在是心血容易流失,因此他们另外创
建了一个新的MUD,狂搞空间(140.136.181.38 6666)在辅大,架构是以
狂想空间为主发展的,不过这次重开后分站就再也没有重开过了!!!
后来小弟退伍了,趁重开的期间小弟完成了一些门派的修正,另外开始
有了帮派的构想!!!!
" );

  set("exits", ([
  "north" : __DIR__"newhand6-11",
  "south" : __DIR__"newhand6-13",
               ]));
  set("light_up", 1);
  setup();
}

