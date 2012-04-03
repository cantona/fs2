
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "永德殿");
  set ("long", @LONG
这里便是天子的寝宫永德殿，不过天子通常并不每天都在这里睡
，有时就跑到后宫去跟那三千粉黛共度良宵，不过最主要的原因其实
是怕有刺客行刺，故每晚都换地方睡，你偷偷的进来之后，心想不拿
白不拿，好好的找找看看有没啥好料的。
LONG);

  set("objects", ([ /* sizeof() == 1 */
//  "/open/capital/npc/Csoldier" : 1,
]));
  set("outdoors", "/open/capital");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"kr2-4",
]));

  setup();
}
void init()
{
        add_action("do_exert","exert");
}
int do_exert(string str)
{
 object me;
 me=this_player();
 if(str=="roar"){
 message_vision(HIC"皇宫守卫大声的对你说:皇城禁地岂容你大声喧哗，还不快滚!!!\n"NOR,me);
 return 1;
                }
 else
 {
 return 0;
 }
}









