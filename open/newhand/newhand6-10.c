#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
  set( "long", "那时我正在狂想空间玩,在师大时期算后期时我才正式加入狂想空间
后来由于一直重开使我玩的很无力,(那时我正在当兵,因为狂玩狂想兵变..)
不知道有没有人跟我一样,后来我就加入了巫师群,因为玩的很无力,在师大
那时我的boss是kazuya,负责仙剑的双十旋龙斩的谜,后来搬到中兴后,因缘
际会,以前的老婆(sidewind)现在的(superobs)找了我去南站写程式.所以我
就到南站去了,那时的南站正在如火如茶的发展,时间是一九九七年年底....
根据我的印象搬到中兴是一九九七年年中的时候.....
" );
  set("exits", ([
  "north" : __DIR__"newhand6-9",
  "south" : __DIR__"newhand6-11",
               ]));
  set("light_up", 1);
  setup();
}

