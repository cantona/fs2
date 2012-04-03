// Room: /open/capital/room/king/kr3-5
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "凤息亭");
	set( "build", 24 );
  set ("long", @LONG
这是平常皇上后宫佳丽们聚会的地方，这里百花片野，遍地飘香
，有时皇上也会和亲信大臣来此地聊一聊国家大事，你看到亭里的石
桌上摆着一些空酒瓶，酒杯，不知是谁来此地喝酒忘了收了。
LONG);

  set("outdoors", "/open/capital");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"kr3-6",
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
