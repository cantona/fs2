// Room: /u/o/onion/newroom.c

inherit ROOM;

void create ()
{
  set ("short", "洋葱专用竞技场");
  set ("long", @LONG
这里有如罗马竞技场一般的景观，中央的广场非常辽阔，专供洋葱
大大测试东东。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "up" : "/u/o/onion/workroom",
]));
  set("light_up",1);
  set("no_clean_up", 0);


  setup();
}
