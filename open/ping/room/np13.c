#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "长廊");
	set( "build", 2 );
  set ("long", @LONG
走进这里, 是一条长廊, 往前通往大厅, 而往两旁也各有一条走
道, 长廊上铺着上好的大红地毯, 衬托出一股庄严的气氛。

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"p1.c",
  "south" : __DIR__"np10",
  "west" : __DIR__"np16",
  "east" : __DIR__"np14",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/ping/npc/manager.c" : 1,
  "/open/ping/npc/duan-guard.c" : 2,
]));
  set("light_up", 1);

  setup();
}
void init ()
{
  object me=this_player ();
  if ( me->query_temp("six_sp_quest") == 7)
      {
       message_vision(HIY"\n特上级武僧说道:请让小僧带路, 前往天龙寺, 拜见方丈. \n\n"NOR,me);
       me->set_temp("six_sp_quest",8);
       me->move("/open/tailong/room/aa39.c");
      }
}
