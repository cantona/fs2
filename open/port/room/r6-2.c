// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","城墙边");
  set ("long", @LONG
你正走在城墙边的小巷上 . 这条小巷连接着守卫队和城门 .
 紧临着城墙延伸 , 你可以看到许多值勤中的守卫来来去去 , 这
里戒备森严 , 你最好少在此惹事 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r6-1",
	"east" : "/open/port/room/r6-3",
]));
	set("objects",([
	]));

  setup();
}
