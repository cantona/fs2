// Room: /u/d/dhk/questsfan/rm3
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "山林"CYN"崎"NOR"路");
  set ("long", @LONG
你延着崎岖的山路渐渐的往山上慢行，延途依旧薄雾漫
漫，而且越走四周风景越来珍奇，一些不常见甚至于没见过
或连听都没听过的动、植物一股脑儿的都栩栩如生的出现在
你的面前。

LONG);

  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"rm2",
  "eastup" : __DIR__"rm4",
]));

  setup();
}
