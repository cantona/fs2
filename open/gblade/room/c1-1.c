inherit ROOM;

void create ()
{
  set ("short", "石室");
  set ("long", @LONG

石室的墙壁相当平整而且光滑，你抬头往上看，似乎有一个小洞可以通往
外面，不过对你来说那个小洞实在太高了，除非身长一丈才有可能攀上那
个小洞。

LONG);

  set("light_up",0);
  set("exits", ([ /* sizeof() == 1 */
  "south" :__DIR__"c1-2.c",
  
]));

  setup();
}
