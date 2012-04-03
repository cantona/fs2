// Room: /u/f/fire/room/room1-19.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", GRN"长沙道"NOR);
  set ("long", @LONG
夕阳余日晖从古老的枞树间照射进来，细碎的石子所铺成的道路
，两旁尽是树林，在树下开满了喜欢阴凉的花朵，微风轻轻的从树林
里吹拂过来，树叶犹如被风捉弄一般生气的发出沙沙沙的声音。
LONG);

  set("exits", ([ /* sizeof() == 2 */
"south" : __DIR__"room1-20",
"west" : __DIR__"room1-16",
]));
set("outdoors","/open/marksman");

  setup();
}
