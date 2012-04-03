#include <room.h>
#include <door.h> 
inherit ROOM;
void create()
{
  set ("short", "石室");
  set ("long", @LONG
这是一间空荡荡的石室,四周空无一物,你只看到前方有一道石门。 

LONG);
     set("door/west",([
      "name" : "石门",
      "connect" :  "/open/poison/room/room6",
      "status" : DOOR_CLOSE,
      ]));
     set("exits",([
  "east" : __DIR__"rb.c",]));
  set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);
  setup();
}
void init()
{
  add_action("handle_look" ,"look");
  add_action("handle_open" ,"open");
  add_action("handle_close","close");
}

int handle_look(string str)
{
  if(str == "door")
 return (look_door("west",str));
}

int handle_open(string str)
{
 return (open_door("west",str));
}

int handle_close(string str)
{
 return (close_door("west",str));
}
