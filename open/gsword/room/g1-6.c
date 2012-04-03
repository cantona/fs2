// Room: /open/gsword/room/gsword1-4.c
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
一条普通的走廊 ,连往仙剑的武器 ,防具室 .俗话说 :工欲擅其事 ,必先
利其器 ,没有好的配备怎么跟别人争长短呢 ?北边是武器室 ,南边是护具室 .

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/gsword/room/g1-8.c",
  "north" : "/open/gsword/room/g1-7.c",
  "east" : "/open/gsword/room/g1-5.c",
]));

  set("light_up", 1);

  setup();
}
