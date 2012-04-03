// Room: /open/gblade/port/room/p1-5.c
inherit ROOM;

void create()
{
  set ("short", "四海刀联");
  set ("long", @LONG
这里是刀客总部所在 , 由于金刀门立足于此 , 刀客总部也
在十余年前从蜀中迁移来此 , 就近招收刀客 , 而枫林港也因此
成为刀客的大本营 , 只要加入 (join) 刀客的行列 , 你就能向
各大刀派拜师学艺 .

LONG);

set("objects",([
	"/daemon/class/blademan/master" :1 ,
	"/open/gblade/port/npc/blademan":1,
]));
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"p1-4",
]));
  setup();
}
