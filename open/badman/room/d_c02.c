inherit ROOM;

void create()
{
  set("short", "密室");
  set("long", "往前走了数十步，密闭的空间，不流通的空气，使你的气息
微微散乱。这里的风砂更为猛烈，微尘飞舞，使你不得不眯着眼
睛。由你身上所发出的火光更是漂浮不定，仿佛随时都会熄灭般
。通道的尽头看来就在前面。
");

  set("exits", ([ /* sizeof() == 2 */
  "forward" : __DIR__"d_c03.c",
  "back" : __DIR__"d_c01.c",
]) );

  set("light_up",-1);

setup();
}
