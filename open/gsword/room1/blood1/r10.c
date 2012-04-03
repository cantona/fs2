#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "血魔殿");
  set ("long", @LONG
此处为血魔堡之最深处，四周所见皆为血色，地上的血迹一路指向房里的最上方
你沿血迹向上看，只见血魔坐在殿上的座椅上..一附心机重重的样子，似乎已等你很
久了..。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room1/blood1/r5.c",
//  "south" : "/open/gsword/room1/blood1/r9.c",
//  "east" : "/open/gsword/room1/blood1/r5.c",
//  "west" : "/open/gsword/room1/blood1/r5.c",
]));

  set("light_up", 1);
  set ( "no_transmit", 1 );
  set("objects", ([ /* sizeof() == 1 */
   "/open/gsword/npc1/bloodking" :1,
]));


  setup();
call_other("/obj/board/appoblood_b","???");
}
void init()
{
  add_action("do_verify","take");
}
int do_verify(string arg)
{
 object me,ob;
 me=this_player();
 ob=new("/data/autoload/swordsman/bloodbook");
 if( arg!="bloodbook")
{
    write("你要申请什么\n");
    return 1;
   }
if(me->query("bloodsword")!=2)
  {
    write("你拿了这东西也没用\n");
    return 1;
  }

 if( present(ob,me) )
  {
    write("你已经有一本了\n");
    return 1;
   }
   else
    {
     write("好好保管此书, 别再弄丢了.\n");
     ob->move(me);

     return 1;
    }
}
