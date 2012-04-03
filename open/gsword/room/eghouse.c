// Room: /open/gsword/room/eghouse.c
inherit ROOM;

void create ()
{
  set ("short", "长廊");
  set ("long", @LONG
这是一条细长的走廊，一走到这，你可以闻到西边传来阵阵的饭菜香，
直让你满嘴的口水直流，肚子咕咕的叫了起来。你想这剑派不但武功，
一流，连厨艺都令人赞叹不已，真是莫测高深。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/eghouse1.c",
  "east" : "/open/gsword/room/north.c",
]));

  set("light_up", 1);

  set("file_name", "/open/gsword/room/eghouse.c");

  setup();
}
