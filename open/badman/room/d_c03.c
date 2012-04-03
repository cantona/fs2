inherit ROOM;

void create()
{
  set("short", "密室");
  set("long", "这里便是通道的尽头。你在稀微的火光之下看到角落堆积了
相当多的草料。一只身躯颇为庞大的骆驼正在低着头吃草。从牠
的嘴边却吐出了些许沙粒，看样子这就是老头说的珍贵骆驼了！
");
  
  set("exits", ([ /* sizeof() == 1 */
  "back" : __DIR__"d_c02.c",
]) );

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/t_camel.c" : 1,
]));
  set("light_up",1);

setup();
}
