// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short",HIC"八卦游龙迷阵阵心"NOR);

long = "\n"+
"这里就是阵心了，四处没什么东西，只有正中央放着一个奇怪的东西\n"+"(eight)。 由"+
"于好奇心驱使，你忍不住想上前看看。\n"+
"\n";
set("long", long);
set("exits", ([
      "out"   : __DIR__"r0",
  ]));
set("item_desc",([
  "eight" : "一个奇形怪状的扁形物体.....\n",
]));
  setup();
}
void init()
{
        add_action("no_fanset","fanset");
        add_action("do_kick","kick");
}

int no_fanset()
{
        object who;
        who = this_player();
        tell_object(who,"由于此处磁场过强，你的唤云扇无法设定。\n");
        return 1;
}
int do_kick(string str)
{
        object who;
        who = this_player();
	if(str!="eight"){return 0;}
        tell_object(who,"你朝着奇怪的东西发足踢了过去。\n");
        tell_object(who,"结果 ㄍ一 的一声出现了一道暗门。\n");
	set("exits", ([
        "door"  :  __DIR__"r26",
	]));
        return 1;
}
