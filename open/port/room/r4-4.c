// Room: /open/gblade/port/room/p1-6.c
inherit ROOM;

void create()
{
  set ("short", "武器店");
	set( "build", 43 );
  set ("long", @LONG
这是一家武器店 , 贩卖着各式各样的刀 , 为全国刀器最
为齐全之地 , 你看到很多刀客在此选购适合自己的兵器 , 所
谓工欲善其事 , 必先利其器 , 看来 ,你也该为自己选把像样
的武器 , 好闯荡江湖 .你可以看看(list)老板在卖些什么 ?

LONG);

  set("light_up", 1);
	set("objects",([
	"/open/port/npc/wang":1,
	"/open/port/npc/trainee2":1,
	]));
  set("exits", ([ /* sizeof() == 1 */
	"south" : "/open/port/room/r4-2",
]));
  setup();
}
