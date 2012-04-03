// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","海岸");
  set ("long", @LONG
这里是枫林港的海岸 . 为免海水倒灌 , 或是有人遭到意外
 , 居名们在海岸旁加修了一道护堤 . 堤防上有几个渔民正在垂
钓 . 西边即是渔港 , 稀稀疏疏的停着几搜渔船 . 自从商港建立
以后 , 大部份的渔民都从商去了 , 渔港生意也因此一落千丈 , 
从前数百搜渔船的盛况 , 再也难以目睹了 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r5-3",
	"north" : "/open/port/room/r5-6",
]));
	set("objects",([
	"/open/port/npc/fisherman":2,
	]));

  setup();
}
