// Room: /u/r/ranko/room/v2.c
inherit ROOM;

void create ()
{
  set ("short", "隔世村中");
  set ("long", @LONG
你正踏在隔世村的路上，村里的村民不时投以好奇的眼光，似
乎对于外来的访客并不太适应。两旁是供给村民居住的寻常农舍，
往远方望去则可看到一片片绿油油的稻田及临近的晒谷场。
    北边有一间茶店，你若口渴的话不妨到那喝一杯茶。
 
LONG);
 
 
 
 
  
 
 
 

  set("light_up", 1);
  set("outdoors", "/u/r/ranko/room");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"sh3.c",
  "west" : __DIR__"v3.c",
  "east" : __DIR__"v2-3.c",
]));

  setup();
}
