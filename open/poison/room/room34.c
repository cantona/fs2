inherit ROOM;

void create ()
{
  set ("short", "猴王洞");
  set ("long", @LONG
走着走着 ,突然看见一只特别大的猴子 ,定神一看 ,原来是个人
披着猴皮 ,旁边还有一群小猴子正端着水果 ,哇咧 ,这种人还是
少惹为妙的好。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"room33",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/u/h/houng/mob/monkey1.c" : 1,
  "/open/poison/npc/ren.c" : 1,
]));

  setup();
}
