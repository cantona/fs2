// Room: /open/gblade/port/room/p1-6.c
inherit ROOM;

void create()
{
	set("short","张老儿药铺");
  set ("long", @LONG
这是一家颇具规模的药铺 . 屋子的东北两面墙边各摆了个大
药柜 , 整齐的存放着各种药材 . 药铺老板贾种民曾担任过御医
 , 说不定你可以向他买到只有皇帝才吃的到的仙丹妙药喔 !

LONG);

  set("light_up", 1);
	set("objects",([
	]));
  set("exits", ([ /* sizeof() == 1 */
	"west" : "/open/port/room/r1-3",
]));
  setup();
}
