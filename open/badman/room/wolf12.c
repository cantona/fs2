inherit ROOM;
void create()
{
   set ("short","小道");
  set ("long",@LONG
到了这里 ,连狼只的气息都感应不到了 .四周寂静无声的气息反而
比刚才狼只围绕你的感觉更令人恐惧 .东边是一个小空地 ,而西边则是
一间残破的庙宇 .
LONG);

  set("outdoors","/open/badman");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"wolf15.c",
  "south" : __DIR__"wolf10.c",
  "west" : __DIR__"wolf13.c",
  "east" : __DIR__"wolf14.c",
]));

  setup();
}
