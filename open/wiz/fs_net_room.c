// Room: /u/s/superobs/eqroom.c
inherit ROOM;

void create ()
{
  set ("short", "奖品区");
  set ("long", @LONG
这边讨论有关网聚奖品的事宜....以及个人eq的颜色跟name的申请....
希望将奖品赠与他人....跟eq颜色跟name的事情先想好在post申请....
不要造成wiz 的忙碌及不必要的困扰....
LONG);

  set("light_up", 1);
  set("no_fight", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"fsroom2.c",
]));
  set("no_magic", 1);

  setup();
}
