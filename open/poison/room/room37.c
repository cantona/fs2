inherit ROOM;

void create ()
{
  set ("short", "小溪边");
  set ("long", @LONG
顺着小溪往前走 ,前面是一小片竹林 ,令你不禁想起了苏东坡的
名句 :无竹使人俗 .想起这位大文豪 ,你不自觉的想起了垂涎已
久的东坡肉 ,望着自己微凹的小腹 ,唉 ,无肉使人瘦真是一点也
不假啊 !

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"room27",
  "north" : __DIR__"room38",
]));
  setup();
}


