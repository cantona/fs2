
// Room: /u/p/poloer/dragon/g2-5
inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "魔王殿二楼");
  set ("long", @LONG

四周一片暗暗的，只能从岩璧上的漏洞，投射一点阳光来看清
东西，不时传来尸体腐烂的恶臭，闻起来非常的不舒服，前方似乎
有一道门，门前隐约可以看到一个人影在晃动。  　　　　

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/ghostwom.c" : 1,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"g2-4",
  "enter" : __DIR__"endroom",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}

int valid_leave(object me, string dir)

{
        if(dir=="enter"&&present("ghost",environment(me)))
  {

message_vision(HIW"鬼姥姥说:想进去先过我这关，纳命来吧。\n"NOR,me);

return 0;
}
return 1;
}

