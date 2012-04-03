// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","十字街口");
  set ("long", @LONG
这里是中央大街和东西两大街的交叉口 . 这里每到晚上会形
成夜市 , 贩卖的商品种类层出不穷 , 时常会有些各国的商人到
此交易 , 使枫林港抹上缤纷的异国情调 , 来到这里你要留心点
 , 说不定能买到奇珍异品 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r3-2",
	"south" : "/open/port/room/r2-1",
	"west" : "/open/port/room/r4-3",
	"north" : "/open/port/room/r1-4",
]));
	set("objects",([
	]));

  setup();
}
