#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
  set( "long", "平顺一年的狂想在一九九七年起了很大的动荡!!那时由于Urd大大人
一直在国外很少回来，所以Lum大大便将狂想空间交给Weiwei大大接手， 
接手的同时就Reopen，但是由于Weiwei大大的处事无法使大多数的玩家  
认同,加上一些因素,所以狂想在Weiwei大大的期间被破了工作站的密码  
所以的Wiz被砍掉了!!所以又Reopen一次,同时间由于Wade的当兵所以狂  
想无法在放置在师大,最后不得以只好关站!!!后来Weiwei大大就将那时  
的狂想资料架在中兴大学!!!同时Anmy也拿到了较旧的狂想资料并架设   
在雄专!!!                                                       
                                                                
" );

  set("exits", ([
  "north" : __DIR__"newhand6-5",
  "south" : __DIR__"newhand6-7",
               ]));
  set("light_up", 1);
  setup();
}

