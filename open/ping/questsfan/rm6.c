// Room: /u/d/dhk/questsfan/rm6
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "山林"HIG"麒"NOR"路");
  set ("long", @LONG
劳过许多弯弯曲曲、崎岖不平的山路。总觉得好像路都
走不完似的，但是总算一路平安。这时你又发现一块快腐烂
的木牌，上面的字还好依旧可以辨识。你仔细一看才知那原
是一快警示牌：‘ 附近有一头上古水晶麒麟，此地乃其地盘
，勿逗留…………神鉴奇侠留。’

LONG);

  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"rm7",
  "eastdown" : __DIR__"rm5",
]));

  setup();
}
