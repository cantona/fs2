inherit ROOM;

void create()
{
 set("short","西厢房");
 set("long",@LONG
呜～好臭！！一走进这里，一股奇臭无比的味道扑鼻而来，
哇！臭死了！你心里骂道：「乞丐就是乞丐，跟猪一样，臭
死了！”不过别被他们听到喔！不然可有得你受的。

LONG);
 set("exits",([
 "south" : __DIR__"room16.c",
 "north" : __DIR__"room01.c"
 ]));
 setup();
}
