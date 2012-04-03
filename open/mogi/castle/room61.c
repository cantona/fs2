
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "古堡三楼");
  set ("long","墙壁上点着青绿色的鬼火，仔细一看是由酷似骷髅\的银器作成灯座，绿
光便由骷髅\的两只眼睛里射出，豪华中透着恐怖的气息。地上也铺着厚
厚的地毯，令人不禁惊奇地东张西望。四周的妖魔似乎也都披金戴银，
性情也温和的多，但一身武艺看起来比楼下的是有过之而无不及。此
关是由罗刹女把守，看前方那位英气勃勃且美艳万分的女将不就是炼
阴女，焚天手下一等一的女将吗。
");
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  
  "north" : __DIR__"room62",
  "west" : __DIR__"room58",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/locha-queen.c" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="north"&&present("locha queen",environment(me)))
  {

message_vision(HIY"炼阴女说:「先露一手能服我的真功夫吧！”\n"NOR,me);

return 0;
}
return 1;
}
