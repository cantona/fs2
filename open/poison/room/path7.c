// Room: /open/poison/room/path7
inherit ROOM;

void create ()
{
  set ("short", "密道");
  set ("long", @LONG
看着白骨遍地，远方传来声声怪声，不知是何种动物的
悲鸣，引起你内心阵阵寒意，突然内心一念升起，莫非这就
是令武林提之变色、闻之丧胆的‘阴朁道’，看样子最好小
心一点，四周的一切事物或许都已经被下毒了，随意触摸的
话，难保不见阎王。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/poison/room/path8",
  "south" : "/open/poison/room/path6",
]));

  setup();
}
