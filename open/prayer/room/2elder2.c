//open/prayer/room/2elder2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "执法长老房");
  set ("long", @LONG

    	    在你面前有一个小凉亭，在凉亭的四周，
	百花争艳，鸟语花香，让人有一种流连忘返的
	感觉．

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 2,		//弟子
]));
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/2elder3",		//`长老房
	"east" : "/open/prayer/room/2elder5",		//`长老房
]));
 set("light_up", 1);

  setup();
}
 
