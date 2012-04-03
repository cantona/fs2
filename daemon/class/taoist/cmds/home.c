

#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
  object room=environment(me);
  if( me->is_fighting() )
        return notify_fail("战斗中无法使用。\n");
  if(room->query("no_transmit"))
	return notify_fail("大神击毁了你招来的云朵\n");
  message_vision (HIY"$N的袖子随手一甩，使出「回归”仙术。\n"+
		HIW"只见一朵白云托着$N向天际飞去。\n"NOR,me);
  me->move("/open/tendo/room/t07");
  message_vision(
	HIW"一朵白云缓缓降下，$N从云上潇洒地走下来。\n"NOR,me);

  return 1;
}




