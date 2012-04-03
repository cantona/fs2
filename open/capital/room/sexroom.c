#include <room.h>
#include <ansi.h>
inherit ROOM;
void create()
{  set ("short","医馆");
   set ("long",@LONG
一间有点简陋破旧的医院,门面装饰的乱七八糟,不过这里的变性
手术听说很有名喔,一进去则有一个大妈堆着满脸肥肉欢迎你,墙上则
挂着一个大木牌还有几张泛黄的职照,看来这里主治医师的来头还不少
哩,往里头看去有间小小的手术室,医师正在帮人动大手术吧.

LONG);
    set("exits", ([ /* sizeof() == 3 */
          "east"  :  __DIR__"faceroom",
           "north"  :  __DIR__"groom",
           "south"  :  __DIR__"h06",
]));
  set("objects", ([ /* sizeof() == 1 */
    "/open/capital/npc/shyu1"       :     1,
]));
  set("no_kill", 1);
  set("no_fight", 1);
  set("no_magic", 1);
set ("light_up",1);
setup();
}
int valid_leave(object who, string dir)
{
if( dir=="north" && !who->query_temp("change") )
return notify_fail("徐大妈怒眼看着你说道 : 林老酥啦！想做什么？\n");
if( dir=="east" && !who->query_temp("faceoff") )
return notify_fail("徐大妈怒眼看着你说道 : 机车啦！别乱闯好吗？\n");
        return ::valid_leave(who, dir);
}
