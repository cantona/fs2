#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
        set( "long", "后来我接手人事总管的职务,并负责FS主架构的部份,同时确定了FS的
一些方针：
1.建立新的巫师制度,希望可以尽力防止作弊不公的事件
2.区分出门派的特色制度
3.发展帮派的制度
同时大砍巫师,因些FS的巫师从四十八人瞬间到了只有不到二十人。
那时FS的系统被Crack,使Fs的lib流出,因此请了Anmy强化FS工作站的
安全性.........
另外为了吸引玩家作了一些重大改革
1.修正MAX_KEE及EXP的算法
2.强化HELP使这里容易上手
3.放出了FSLIB,及答应玩家不REOPEN
另外特别感谢smalltwo及libraa二位玩家,smalltwo捐出了p-mmx-233的主机
板及CPU,libraa捐出了RAM,对FS的硬体来说有很大的帮助,也使FS有再上一层
楼的条件,在此特别感谢
" );
  set("exits", ([
  "north" : __DIR__"newhand6-15",
  "south" : __DIR__"newhand6-17",
               ]));
  set("light_up", 1);
  setup();
}

