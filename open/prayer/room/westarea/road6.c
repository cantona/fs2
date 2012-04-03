//open/prayer/room/westarea/road7.c

#include <room.h>
#include "/open/open.h"
inherit ROOM;
int have=1;
int time=0; 
 
void create()
{
        set("short","街道");
        set("long",@LONG
        西武林自成一格的街道, 四通八达, 处处繁华. 西边是
        通往飘渺四宫之首的"青龙宫". 圣火教的门生常说圣火
        教内的高级干部非常讨厌舞者!!虽说这只是听说的, 可
        是至今仍没有舞者愿意进去一试!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 1 */
        "south":__DIR__"road4",         //街道

        ]) );
        set("no_fight", 0);
        
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
    if( who->query_temp("metal/where") >=7 )
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
    ob=new("/open/prayer/obj/iron");
    have = 0;
    ob->move(who);
    message_vision("[36m一阵挖掘之后, 终于挖出来了一块[铁矿]!![0m\n", who);
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
