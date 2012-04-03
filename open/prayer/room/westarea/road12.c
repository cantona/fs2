//open/prayer/room/westarea/road12.c

#include <room.h>
#include "/open/open.h"
inherit ROOM;
int have=1;
int time=0; 
 
void create()
{
        set("short","街道");
        set("long",@LONG
        西武林自成一格的街道, 四通八达, 处处繁华. 往东可以到达
        天枢门与天权门. 至于破邪洞窟的存在, 是因为当时未开发的
        西域到处都是奇怪的怪物, 教主为了要开辟圣火教, 便以一己
        之力将它们全部制服后, 再建造出来一个洞窟当做放置怪物的
        场所!! 
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"road11",                 //街道
        "west":__DIR__"road13",         //街道
 
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
    ob=new("/open/prayer/obj/copper");
    have = 0;
    ob->move(who);
    message_vision("[36m一阵挖掘之后, 终于挖出来了一块[铜矿]!![0m\n", who);
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
