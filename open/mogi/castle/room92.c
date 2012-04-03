
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "奈何之路");
  set ("long","此路由七衣魔将分守, 绝对誓死保护焚天魔王的安全. 这里的空间笼罩着
一股十分邪怪的瘴气, 其间闪烁不定的光点映出了若有若无的景象, 千变
万化扰人心神, 或是天灾人祸, 或是烧杀掳掠, 尽是人间不幸悲剧, 加上
此处静悄无响, 你的理性渐渐地随着心跳与呼吸声走火入魔了. 
");
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  
  "west" :  __DIR__"room91",
  "south" : __DIR__"room93",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/seven-dark-3" : 1,
  __DIR__"npc/seven-dark-4" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="south" && present("seven-dark",environment(me)))
  {

message_vision(HIY"七衣魔将说:「小子往哪走!!”\n"NOR,me);

return 0;
}
return 1;
}
