// Room: /open/dancer/room/port.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;
void do_start_ship();

void create ()
{
  set ("short","镜月港");
  set ("long", @LONG
这里是镜月岛上唯一的港口，也是你出入镜月岛的必经之地，向东
你可以展开你的镜月岛旅程，当然你也可以在此地搭船离开镜月。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/dancer/room/r7-2.c",

]));
  set("light_up", 1);

  setup();
}
void init()
{
        add_action("board_ship","board");
        do_start_ship();

}

void do_start_ship()
{
        object ob1;
        if(!find_object("ship girl"))
        {
        ob1=new("/open/dancer/npc/ship_girl");
         ob1->move("/open/dancer/room/ship");
        destruct(ob1);
        }
}
int board_ship(string str)
{
        object ob;
        if(!str)
        return notify_fail("你要搭什么?\n");
        if(!objectp(ob=present(str,environment(this_player()))))
        return notify_fail("对不起 , 没这种船耶 ?\n");
        if(str=="ship")
        {
        message_vision("$N走到岸边 , 搭上了弯月舫 !\n",this_player());
        this_player()->move("/open/dancer/room/ship");
        return 1;
        }
return 0;
}

  int valid_leave(object me, string dir)
{
if( dir=="east" )
  if( me->query("gender")!="女性")
  {if(!me->query("quests/moon"))
     return notify_fail("你还没解开镜月岛之谜不能进入喔!\n");
  }
return ::valid_leave(me,dir);
 }
