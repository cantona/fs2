// Room: /open/capital/room/king/kr4-4-2
#include <ansi.h>
inherit ROOM;

void create ()
{
  set("short","朝圣殿内部");
  set ("long", @LONG
这里已是朝圣殿内部, 在往北就是皇帝接见百官的大殿, 为了避免
有人擅入而惊扰了皇上, 除了朝廷命官外严禁进入.
LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"kr4-4-1",
  "north" : __DIR__"kr4-4-3",
]));

  setup();
}

int valid_leave(object me,string dir){
  if(dir=="north" && present("soldier",environment(me)) && !wizardp(me)){
        if(me->query("class")=="officer")
          return 1;
        else
          return notify_fail("殿前武士拿起虎头钢刀挡在你面前,狠狠的瞪着你说道:
放肆！朝圣殿岂是你随便进出的地方 \n");
    }
    return 1;
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
