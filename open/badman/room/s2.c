inherit ROOM;
 
void create ()
{
  set ("short", "岩穴入口");
  set ("long", @LONG
 前面伫立着几个守卫，看守着这个乌七码黑的山洞，难道这就是恶人谷传说中的禁地?
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "northup" : __DIR__"s1-3",
]));

  setup();
}
