inherit ROOM;

void create ()
{
  set ("short", "小屋");
  set ("long", @LONG
一尘不染的小屋中 ,放满了竹制的家具 ,再配上炉子上煮茶的香
气 ,真是让人有一种超脱尘俗的感觉 ,一切的利禄功名 ,到了这
里都仿佛成为薄暮轻烟 .....屋主是个文雅的书生 ,看起来是个
好人。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"room38",
]));
   set("objects", ([ /* sizeof() == 1 */
   "/open/poison/npc/batking2.c" : 1,
 ]));

  setup();
}
