//by Casey
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", HIW"天雷崖上"NOR);
  set ("long", @LONG
艰难的靠着山壁间凸起的石块 ,你登上了这座山
崖。浓云密怖着 ,处处闪烁着电光 ,周围的树木尽
是焦黑的断枝残梗

LONG);
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
 "climb" : __DIR__"d-7",
 
 ]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}


