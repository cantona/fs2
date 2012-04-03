#include <room.h>
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "段云的卧房");
  set ("long", @LONG

刚至房中，便被眼前金碧辉煌的装潢所吸引, 这儿便是段云的寝室,
墙上所挂的字画无一不是当世名家或历代大师所作, 在这所悬挂的珍
品, 便是大内皇宫所藏, 只怕也远远不及。

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "south" : (: look_door,     "south" :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"np23",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/duan-wife.c" : 1,
]));
  set("light_up", 1);

 create_door("south","雕花紫檀木门","north",DOOR_CLOSED);
  setup();
}
void init()
{
        add_action("do_search", "search");
        add_action("do_turn", "turn");
}
int do_search()
{
        object who;
        who = this_player();
        if(who->query("now_start")==1)
{
        tell_object(who,"\n你四处摸索，发现﹝床板﹞好像可以翻转。\n\n");
}
else
        tell_object(who,"叶灵说道：你在做什么???想当贼吗?????\n");
        return 1;
}
int do_turn(string str)
{
       object who = this_player();
        if(who->query("now_start")==1)
        {
       if(str=="床板")
       {
       tell_object(who,"\n你起动机关，结果一股脑的跌了进去。\n\n");
        who->move("/open/ping/questsfan/room1");
       tell_room(this_object(),who->query("name")+"不知启动了什么机关, 突然消失了。\n");
        }
        return 1;
}
else
        return 0;
}

