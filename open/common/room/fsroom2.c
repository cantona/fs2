inherit ROOM;
#include <ansi.h>
void create ()
{
set ("short", "狂想空间惩罚发表处");
set ("long", @LONG
    违反狂想玩家(player_rules)或巫师(wiz_rules)规定的人::
 都在这里公布给大家知道，请大家多多遵守规定不要违反规定，违反者
 第一次通常都从轻处理,再犯则依照规定处理,若你认同狂想空间请遵守
 规定。否则请前往您认同的Mud,狂想的原则是公平、公正, 不管是玩家
 或是巫师请照规定行事.........
LONG);
set("light_up",1);
set("no_kill",1);
set("no_fight",1);
set("exits", ([ /* sizeof() == 2 */
"south" : "/open/common/room/fsroom2",
]));
  setup();
call_other("/obj/board/fskill_b","???");
}

