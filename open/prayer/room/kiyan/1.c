//open/prayer/room/kiyan/1.c

#include <room.h>
#include "/open/open.h"

inherit ROOM;
int have=1;
int time=0;
 
void create()
{
        set("short","门主的房间");
        set("long",@LONG

        门主的房间一眼看去非常的整齐，原因是房间内的摆\设实在是太少
        了，只有一座小小的木板床!!．壁上挂着一口红色外壳的短剑!!旁
        边有一行小小的蝇头小字．不知道是自己文学程度太差还是怎么的
        ，就是看不懂他写些什么??

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "south":__DIR__"4",             //门主
]) );
        set("no_fight", 0);
        set("light_up", 1);
  setup();
}

void init()
{
    add_action("search_here", "search");
    add_action("take_it","take");
}

int search_here(string arg)
{
    if( (this_player()->query("combat_exp",1) > 100000)  && have)
      write("你朝墙上望呀望的,发现这口宝剑实在是非常的漂亮与高贵.真想偷偷拿走..\n"+
               "你胆子一大,决定要将它拿走(take it).\n");
    else
       write("也许是你的胆子不够大,你不敢对这口宝剑有所遐思...\n");
    return 1;
}
int take_it(string arg)
{
    object user,ob;
    user = this_player();
    if( this_player()->query("quests/girlsword",1) && !present("Red-sword",user) )
    {
    ob=new("/open/prayer/obj/sword");
    have = 0;
    ob->move(this_player());
    message_vision("[36m当$N将[32m宝剑[36m抽出来,只见宝剑[33m豪光四射[36m.........哇!!一口上好的剑耶!![0m\n", user);
    return 1;
    }
    return 0;
}   
void heart_beat()
{
 time++;
 if( time > 3000)
 {
   time=0;
   have=1;
  }
  return;
}   
