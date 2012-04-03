// Room: /u/p/poloer/dragon/dr4
inherit ROOM;

void create ()
{
  set ("short", "乱葬岗");
  set ("long", @LONG
  这里是村外的郊区，四周人烟稀少，只有一大片的坟墓
  一不小心还会踩到尸骨，莫非这里是人常说的乱葬岗，不时
  还有鬼火出现，在身旁绕啊绕，恐怖极了。
  西边有条小路，不过被野草覆盖，看不出通往那里。

LONG);

  set("no_transmit", 2);
  set("outdoors", "/u/p");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"dr5",
  "north" : __DIR__"dr3",
]));

  setup();
}
