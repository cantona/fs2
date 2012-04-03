//open/prayer/room/westarea/road31.c

#include <room.h>
#include "/open/open.h"
inherit ROOM;
int have=1;
int time=0;
 
void create()
{
        set("short","街道");
        set("long",@LONG

        西武林自成一格的街道, 四通八达, 处处繁华. 这里是西域西
        边的三叉路口. 北边是往玉衡门, 南边是往瑶光门. [ 圣火三
        长老 ]则是属于第三大的职等, 三长老分别为传功, 戒律以及
        执法长老. 直接听令于教主的调度.

LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"road26",        //街道
        "south":__DIR__"road34",        //街道
        "east":__DIR__"road30",         //街道
 
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
