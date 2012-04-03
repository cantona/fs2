#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间帮派入门房间"NOR);
  set ("long","要知道目前有那些帮派的话，可以打help cshowclan
  例如：打cshowclans
        --------------------- 狂想空间现有帮派一览表---------------------
        帮派:侠客岛(hero)                       帮主:fish
        帮派:风魔(wind)                 帮主:julio
        帮派:十三吉祥(13_luck)                  帮主:lunn
        帮派:日月神教(SunMoon_Station)                  帮主:cyberfight
        帮派:烟雨江南(orient)                   帮主:guetenr
        帮派:红莲教(Red_Fire)                   帮主:lovemay
        -----------------------------------------------------------------
        以上共有六个玩家帮派

  以上是玩家目前所创建的帮派列表!!!!!!!!!!!
               \n");
  set("exits", ([
  "east" : __DIR__"newhand3-1",
  "west" : __DIR__"newhand",
               ]));
  set("light_up", 1);
  setup();
}

