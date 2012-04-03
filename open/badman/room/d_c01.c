inherit ROOM;

void create()
{
  set("short", "密室");
  set("long", "刚落得地来，眼前一片暗蒙蒙地，看不太清楚。你点起身
上可照亮周围之物，始能看清通道走向。这里只有一条往前的
路和身后的暗道入口。风砂由前面吹来，看来骆驼的饲养地应
该就在前面不远处。
");
  
  set("exits", ([ /* sizeof() == 2 */
  "forward" : __DIR__"d_c02.c",
  "out" : __DIR__"d_c.c",
]) );

  set("light_up",-1);

setup();
}
