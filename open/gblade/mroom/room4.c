// Room: /u/m/moner/room/room1.c
inherit ROOM;

void create ()
{
  set ("short", "练武场");
  set ("long", @LONG

正如所谓的百日刀，千日剑，刀的上手容易，加上刀为霸气之首，故习刀者日众，
有鉴于此，魔刀内特辟了不少练武场，做为门人相互切搓、拆招进取的地方。两旁
放置着兵器架，场中以有不少第子在拆招了。
      空中飘着朵朵的彩云，丝丝的春风吹拂着你....。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room1.c",
  "east" : __DIR__"room3.c",
]));
   set("objects", ([ /* sizeof() == 3 */
"/daemon/class/blademan/npc/trainee2":3,
]));
  set("no_magic", 1);

  setup();
}
