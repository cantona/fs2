// Room: /open/capital/room/D04.c
#include </open/capital/capital.h>
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "皇宫大门");
  set ("long", @LONG
这里是皇宫的入口, 守卫森严, 紧闭的宫门和高大的宫墙透出一股
宫廷深深的气氛, 皇宫里的一切都被严密地守护着。门口站着两位威武
的禁卫军, 神风凛凛的样子, 当你一走到这儿, 便感觉到两道如电的眼
光向你射来。
    道路旁有块告示版(board).

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
            「皇城重地，闲杂人等请勿在此逗留。”
            「除品级高的官员以外，其余擅闯此地者
              皇上有令，杀无赦。”
                三品御前带刀侍卫队长：王彪
",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/doorsoldier" : 2,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"king/kr7-4",
  "south" : __DIR__"r08.c",
]));

  setup();
}
int valid_leave(object who,string dir){
  if(dir=="north" && present("soldier",environment(who)))
  if((dir=="north" && !wizardp(who))||(dir=="north" && who->query("class")!="officer") && who->query_temp("can_in")!=1)
  return notify_fail("皇宫守卫大声的对你说:大内禁地，闲杂人等不得进入。\n");
return :: valid_leave(who,dir);
}
void init()
{
        add_action("do_exert","exert");
}
int do_exert(string str)
{
 object me;
 me=this_player();
 if(str=="roar"){
 message_vision(HIC"皇宫守卫大声的对你说:皇城禁地岂容你大声喧哗，还不快滚!!!\n"NOR,me);
 return 1;
                }
 else
 {
 return 0;
 }
}
