#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
  set( "long", "后来听说Lum大大也要入伍服役!!所以就又把大神的位置交给了下一
任的konn大大,在这一段时期,那时在konn大大的主导下狂想也更上一层楼
但是konn大大本身有一些私人的因素!!后来就由Urd大大来接手狂想空间的
发展，后来有听到Urd大大说起一段往事那时Wade大大入伍后为了,要让大家
方便管理狂想就将他的passwd工作站的给一些Wiz,但是听说有人改了passwd
使得那时狂想陷入一片混乱之中,后来听说Wade大大回来后就拿了回来!!!
" );
  set("exits", ([
  "north" : __DIR__"newhand6-4",
  "south" : __DIR__"newhand6-6",
               ]));
  set("light_up", 1);
  setup();
}

