
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "慈禧殿");
  set ("long", @LONG
这儿就是当今皇太后慈禧太后的寝宫，因为年事已大，所以太后
大部份的时间都待在寝宫中休息，偶而公主会跑来找太后撒娇一下，
除此之外，就是每天早晨皇上会来请安了。不过你却看到太后的房里
挂着一把刀，使你猜不透那把刀是用来作什么的。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/kmother" : 1,
  "/open/capital/npc/kingirl" : 2,
]));
  set("outdoors", "/open/capital");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"kr2-3",
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
