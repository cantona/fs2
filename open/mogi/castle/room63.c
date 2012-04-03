
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "古堡三楼");
  set ("long","终于到了最后考验的时候，一路杀将上来最终的目的就是要看看焚天魔王
的庐山真面目，眼前这黑白双刹就是焚天的两大护法，数千年来一直忠实
的听令于魔王，他们不但各有惊人绝招而且相互呼应的攻守招式更是非同
小可。
");
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  
  "north" : __DIR__"room93",
  "east" : __DIR__"room64",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/black-ghost" : 1,
  __DIR__"npc/white-ghost" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="east"&&present("ghost",environment(me)))
  {

message_vision(HIY"黑白双刹说:「阁下先露一手惊人的艺业吧！”\n"NOR,me);

return 0;
}
return 1;
}
