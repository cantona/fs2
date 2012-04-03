// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","中央大街");
  set ("long", @LONG
这里是枫林港的中央大街 . 原本的枫林只是个贫穷的小渔村
 , 在十余年前建立港口后 , 因为海运的发达带动了商业的繁荣 
. 近年来的快速发展正展示出枫林旺盛的生机 . 这是一座不断扩
张的城市 . 西边是一家钱庄 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/port/room/r1-1",
	"south" : "/open/port/room/r1-3",
	"west" : "/open/port/room/r1-5",
	"east" : "/open/port/room/r6-1",
]));
	set("objects",([
	]));

  setup();
}
