// Room: /open/badman/room/lake4.c
// written by powell 96.4.26@FS
inherit ROOM;

void create ()
{
  set ("short", "湖中密道");
  set ("long", @LONG
这里是恶人湖中的密秘通道，真想不到这湖里还别有洞天，还
好这湖并不很深，湖水并未浸入到这儿来。北边好像有通道，只是
不知道会通到哪？

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"lake5",
  "down" : __DIR__"lake3",
]));

  setup();
}
