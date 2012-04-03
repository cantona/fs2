#include <room.h>

 inherit ROOM;

void create ()
{
  set ("short", "茅屋");
  set ("long", @LONG
          
  这儿是仙剑派为了洒扫方便而貌漱p茅屋，你从门外闻到一阵阵的恶臭，
不时还传来惊天动地的呼声，从窗外往里边一看，里头住的竟然是一位一衫
的醉翁。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"rroad2",
  "enter" : __DIR__"house",
]));
  set("outdoors", "/open/gsword/room");

  setup();
}
