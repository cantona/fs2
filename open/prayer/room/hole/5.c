///open/prayer/room/hole/5.c

#include <room.h>
#include "/open/open.h"
inherit ROOM;
int have=1;
int time=0;

void create()
{
        set("short", "洞穴");
        set("long", @LONG

        洞窟内的石壁上都是野兽的爪痕，还沾满了许多的血迹!!
        远处不时有野兽的叫声，在这洞窟内回响不已.......啊~
        !!远处传来一阵惨叫声，喔喔!!看来前面有人被宰了，四
        处浓雾迷漫，伸手难见五指，只要稍一疏忽，随时都会变
        成野兽的点心......

LONG    );
        set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"7",
  "north":__DIR__"3",
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
    ob=new("/open/prayer/obj/gold");
    have = 0;
    ob->move(who);
    message_vision("[36m一阵挖掘之后, 终于挖出来了一块金矿!![0m\n", who);
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
