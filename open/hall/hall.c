// Room: /open/hall/hall.c

inherit ROOM;

void create ()
{
  set ("short", "京都总理衙门广场");
  set ("long", @LONG
这里是京都总理衙门前广场，两扇朱红色的大门，透着一股庄严肃
穆的气氛!!门口左侧有座以木头搭成的‘公布栏’，在其上张贴着几张
官方所公布的一些规定文告<<paper>>，劝你最好是看一下....!!
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"way2",
  "north" : __DIR__"hall_2",
  "out" : __DIR__"halldoor",
  "east" : __DIR__"way1",
]) );

  set("item_desc", ([ /* sizeof() == 1 */
  "paper" : "    本府专办个种诬告，凡年满十六岁之男女，怀疑任何人有不法
  行为，均可检举(accuse)。",
]) );

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/garrison_2" : 2,
]) );


  setup();
}
