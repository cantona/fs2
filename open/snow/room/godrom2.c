// Room: /open/snow/room/godrom2.c
// 天灵谷
#include <room.h>
#include <ansi.h>
inherit ROOM;
void create()
{
 set("short",HIM"天灵谷"NOR);
 set("long", @LONG
你进到天灵谷的深处,眼前的影像让你吃了一惊，只见前方平台上发出
了数道不同颜色的光线，在光线的四周有无数的气流在流动!!实在是非
常惊人。
LONG
        );
 set("no_transmit",1);
 set("no_auc",1);
 set("exits", ([
     "out": "/open/snow/room/water",
     "south":__DIR__"godrom1",]) );
 setup();
}
void init()
{
  add_action("do_stand","stand");
}
int do_stand(string str)
{
  object ob,ob1;
  ob=this_player();
  if( str!="平台")
    return notify_fail("你要站在那里去呀!!!\n");
  message_vision(HIW"$N一口气跃入平台上，此时$N沐浴在光线之中感觉十分舒服!!\n"NOR,ob);
  message_vision(HIY"只见$N体内的"HIB"青龙之气"HIY"幻化成青龙向天飞去了。\n"NOR,ob);
  message_vision(HIM"忽然平台旁的无数气流，被$N吸入体内了，此时$N发出数十道光茫\n"NOR,ob);
  message_vision(HIW"$N得到仙云之气了.....(请打Help god_kee及sec_god看说明)\n"NOR,ob);
  ob->set("sec_kee","god");
  ob->set("max_s_kee",1);
  ob->set("s_kee",0);
    ob->set("quests/sec_god",1);
}

