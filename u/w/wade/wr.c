#include <room.h>

#define WIZ_ENTRANCE "/open/wiz/entrance"

inherit ROOM;

private void check1(string str,object me,object ob);
void create ()
{
  seteuid(getuid());
  set ("short", "菠萝面包的工作室");
  set ("long", @LONG
来到这儿, 就是你学习一切的开始, 也是你发泄情绪的
最佳去处, 当然, 想诉苦也在这儿啰, 记住, 面包是你永远
的依靠. 往西是门与钥匙的示范写作, 本房间也是 board
的示范写作房. 你可以用下面的命令看看一些资料:
        more here
        more board
LONG);

  set("undead",1);
  set("light_up", 1);
  set("valid_startroom", 1);
  set("exits", ([ /* sizeof() == 3 */
  "r1"          : __DIR__"test/r1",
  "gfs"   :"/u/w/wade/gfs",
  "wiz"         : __DIR__"room/wiz",
  "west"        : __DIR__"room/key_room",
  "room"        : __DIR__"room/room",
  "down"        : WIZ_ENTRANCE,
  "basic"       : __DIR__"room/prog",
  "npc"         : __DIR__"room/npc",
  "doc"         : __DIR__"room/doc",
  "lpc"         : __DIR__"room/lpc",
  "gs"          : "/open/wiz/gs",
]));

  create_door("west", "门", "east", DOOR_CLOSED);

  setup();
  call_other("/obj/board/wade_b", "???");

}

