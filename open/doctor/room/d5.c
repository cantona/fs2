// room:open/doctor/room/d5.c made by adam..

inherit ROOM;

void create ()
{
	set("short","一号栽种区");
  set ("long", @LONG

   这里有着整齐的花圃，正是银针门的栽种区..

LONG);

  set("light_up", 1);
  set("outdoors", "/open/doctor");	
	set("objects",([
 	]));
  set("exits", ([ /* sizeof() == 3 */
//      "north" : __DIR__"d4",    
      "south" : __DIR__"d8",
      "east" : __DIR__"d6",
      ]));
  setup();
}
