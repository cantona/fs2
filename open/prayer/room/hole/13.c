///open/prayer/room/hole/13.c

#include <room.h>
#include "/open/open.h"
inherit ROOM;

int have=1;
int time=0;

void create()
{
        set("short", "洞穴");
        set("long", @LONG

        你突然开始摇摇晃晃，站也站不稳倒在地上，咦??地震
        吗??忽然远方传来魔兽的咆啸声"啊～～呜～!!"，接着
        轰隆!!轰隆!!哇~~!!是什么巨兽，走起路来天崩地裂似
        的??

LONG    );
    set("objects", ([ /* sizeof() == 2 */
   "/open/prayer/npc/crab-ox" : 1,              
   "/open/prayer/npc/evil-tiger" : 1,           
]));
        set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"15",
  "west":__DIR__"11",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
        setup();
}

void init()
{
    add_action("search_here", "search");
    add_action("dig_it","dig");
}

int search_here(string arg)
{
    object who=this_player();
    if( who->query_temp("metal/where",7) )
      write("你在这里的四周敲敲打打的, 终于发现了一处挖掘过的痕迹..\n"+
      "挖挖看 (dig) 吧!! 说不定真能挖出什么东东来耶!!\n");
      else
      write("你在干嘛呀??\n");
    return 1;
}

int dig_it(string arg)
{
    object who,ob;
    who = this_player();
    if( who->query_temp("metal/where",7)  )
    {
    ob=new("/open/prayer/obj/silver");
    have = 0;
    ob->move(who);
    message_vision("[36m一阵挖掘之后, 终于挖出来了一块银矿!![0m\n", who);
    who->delete_temp("metal/where");
    return 1;
    }
    return 0;
}   
void heart_beat()
{
 time++;
 if( time > 6000)
 {
   time=0;
   have=1;
  }
  return;
}   
