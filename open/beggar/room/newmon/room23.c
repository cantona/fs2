inherit ROOM;

void create()
{
 set("short","电居");
 set("long",@LONG
此房间是电护法休息的地方，他常在房间练功，为的就是
要保护帮主的安危，这也就是他的房间在帮主的附近。
LONG);
 set("exits",([
 "west" : __DIR__"room09.c"
 ]));

 
setup();
}
