///open/prayer/room/hole/8.c

#include <room.h>
#include "/open/open.h"
inherit ROOM;
int have=1;
int time=0;

void create()
{
        set("short", "洞穴");
        set("long", @LONG

        这里就是破邪洞窟的内部了!!血红色的浓雾飘来，闻起来
        有股腥味!!令人的意识渐渐模糊....... 去死吧!!看我的
        "无敌风火轮"!!咦??前面好像很精彩的样子，不赶快过去
        瞧瞧就看不到好戏啰!!你心神一振，加紧脚步继续往前搜
        巡.....

LONG    );
        set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"10",
  "south":__DIR__"6",
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
    ob=new("/open/prayer/obj/copper");
    have = 0;
    ob->move(who);
    message_vision("[36m一阵挖掘之后, 终于挖出来了一块铜矿!![0m\n", who);
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
