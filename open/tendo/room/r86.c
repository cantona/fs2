// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","新膜拜堂");
        set("long", @LONG
这儿是天道派的禁地，除了掌门人外其他的门人皆不得进入此地
。你最好赶紧离开这，否则掌门人回来时若看见你在这那你就完了。
你苍促的环视了一下四周，发现这儿十分干净，几乎是一尘不染，四
周摆了许许多多的书，你走近瞧了一下，发现上面写着「天道派之武
学密笈”、「天道派之仙术密笈”、....。这些东西令你不想离开这
，但又怕当你在翻阅书辑时掌门人会突然回来，于是只得放弃了..。
LONG);
  set("light_up",1);
set("exits", ([
        "north":__DIR__"r61",
]));
  setup();
}
