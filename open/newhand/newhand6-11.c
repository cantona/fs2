#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
  set( "long", "后来根据我的印象我就很少去狂想空间了,几乎在分站发展新的门派
在分站发展正快速的进行,但是同时作弊、巫师乱来同时也是很严重!!那时
由于意见不合的关系,因此巫师的关系不是很好,例如：我跟Roger大大就是
不过同时由于发展的关系,也吸引了一些玩家前来玩,那时的机器是DX2-66
是486所以人数只要过三十人就会变的很慢,这样的机器一直撑了快一年才换
如此变化快速及奇怪的时代持续了半年左右,后来分站的ADMIN不知为何忽然
有一段很长的时间没有人出现,Anmy大大为了在有好的发展,我跟roger及swy
、airke等升级了.接手分站的规画!!!!
那时roger跟casey(现在的cloves)完成了魔界
    airke大大完成了天道、雪苍、射手的部份
    acelan大大完成了儒门及狂想主架构的修正
    houng、xman、skyer、cccc ..等优秀的巫师也加了很多的区域..下去
" );
  set("exits", ([
  "north" : __DIR__"newhand6-10",
  "south" : __DIR__"newhand6-12",
               ]));
  set("light_up", 1);
  setup();
}

