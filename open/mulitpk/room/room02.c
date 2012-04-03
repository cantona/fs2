// Room: /u/o/ookami/pkroom/room02.c
inherit ROOM;

void create ()
{
  set ("short", "狂想之武林大会会场");
  set ("long", @LONG
这里是狂想空间里武林大会的会场, 你左右一望, 只见四周已挤满
了前来看热闹的观众, 而场地里已经有许多参加者正在热身, 个个都一
副势在必得的样子

LONG);

  set("light_up", 1);
  set("no_auc", 1);
        set("no_transmit", 1);

  set("pkroom", 1);
  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"room01.c",
  "south" : __DIR__"room06.c",
  "east" : __DIR__"room03.c",
]));

  setup();
}
