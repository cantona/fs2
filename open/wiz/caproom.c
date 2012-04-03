// Room: /open/wiz/caproom
inherit ROOM;

void create ()
{
  set ("short", "京城模型屋");
  set ("long", @LONG
屋子正中央有个模型，看起来似乎是京城的缩影。
几个身穿巫师袍的老者正围着模型仔细的观察着。
是的，那就是我们。我们扮演上帝。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"area",
  "d01" : "/open/capital/room/D01",
  "d02" : "/open/capital/room/D02",
  "d03" : "/open/capital/room/D03",
]));

  set("no_fight", 1);

  set("light_up", 1);

  set("no_clean_up", 0);

  set("no_magic", 1);

  set("file_name", __DIR__"caproom");

  set("valid_startroom", 0);


  setup();
call_other("/obj/board/capital_b","???");
}
