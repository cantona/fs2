// Room: /u/d/dhk/room/richrm1.c-------------by dhk 2000.5.11
inherit ROOM;
#include <ansi.h>
#include <room.h>
#include </open/open.h>

void create ()
{
  set ("short", "宏禧山庄─庄门口");
  set ("long", @LONG
此地即是素有天下第一庄之称的§宏禧山庄§。
传闻中庄主是世界首富，不但富可敌国，其庄上门仆
也都是一些武林名宿，而且山庄神秘莫测是一个充满
传说之地。正当你仔细一瞧后发现，这大门虽与一般
豪宅无异，但特殊的是它竟然造在两座山山壁之间，
相当令人诧异。如此推断那传说中的山庄竟然是整座
的山谷了，实在很难以相信呀！

LONG);

  set("outdoors", "/u/d");
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/main/room/d7",
//  "enter" : "/u/d/dhk/workroom.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/guard.c" : 1,
]));

  setup();
}
void init()
{
  //remove_call_out("lookhoho");
  call_out("lookhoho",1,this_player());
}
void lookhoho(object who)
{
  object box=new("/open/ping/questsfan/obj/box.c");
    int i,flag;
    mixed all;
    object obj,lee;

    flag=0;
    all=all_inventory(environment(who));
    for(i=0;i<sizeof(all);i++)
    {
    obj=all[i];
    if(obj->query("id")=="grandfather lee" && who->query_temp("goodman") && who->query_temp("box_ok")==0)
    {
    lee=obj;
    flag=1;
    }
    }
    if(flag)
    {
       tell_object(who,"谢谢你护送我家老爷回来，非常感谢。\n");
       tell_object(who,"我家老爷交代我将这盒子送你。\n");
        box->move(who);
          who->set_temp("box_ok",1);
    destruct(lee);
    }
}
/*
int valid_leave(object who,string dir)
{
        if(dir=="enter"&&present("leespace guard",environment(who)))
  {
        if(who->query("goodman")!=1)
        {
        tell_object(who,"山庄守卫怒喝 : 闲杂人等休想进去一步\n");
        return notify_fail("山庄守卫怒喝 : 闲杂人等休想进去一步\n");
        }
        return :: valid_leave(who,dir);
  }
  return :: valid_leave(who,dir);
}
*/
