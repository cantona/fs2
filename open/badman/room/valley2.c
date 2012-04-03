// Room: /open/badman/room/valley1.c
// written by powell 96.4.26@FS

#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "神秘山谷");
  set ("long", @LONG
一走到这里，四周都被苍郁的树林所围绕，只有西边的树林较
为稀疏，看来已经没路可走了。树林里的猴子还不时探头瞧瞧你，
可见得这群猴子还是害怕你这个闯入牠们生活的不速之客。

LONG);
 
  set("objects", ([
  BAD_NPC"m-king" : 1,
  BAD_NPC"monkey" : 2,
  ]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"valley1",
]));

  setup();
}
