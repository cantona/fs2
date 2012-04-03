// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","东大街");
  set ("long", @LONG
你正走在东大街上 . 相较于中央大街 , 这里的行人明显少
了许多 , 这一带是枫林港的住宅区 . 枫林近几年来不但倭寇不
敢来犯 , 治安更是优良 , 百姓们安居乐业 , 繁荣富庶 . 你看
到路上行人们个个脸上充满着愉快的笑容 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r3-1",
	"east" : "/open/port/room/r3-3",
]));
	set("objects",([
	]));

  setup();
}
