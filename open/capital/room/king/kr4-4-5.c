// Room: /open/capital/room/king/kr4-4-5.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "御书房");
  set ("long", @LONG
这里便是天子平常时间办公的地方，同时也会在这里召见朝中大
臣商讨国家大事，也因为天子平常都在此地，所以这里的门禁相当的
森严，不得皇上召见，是不得随便进入的。
LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"kr4-4-4.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/room/king/npc/king" :1,
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
