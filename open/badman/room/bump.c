inherit ROOM;
 void create()
{
  set ("short","庙庭中的大洞");
  set ("long",@LONG
这是一个坍塌的大洞，身后便是刚闯进来的地方。但用力推开的
石堆又因为你的使力过猛，又再度坍方。你仔细地看了一下周围，发
现身处的大洞显然地是由一股相当强大的外力所造成。在前方不远处
有股奇妙的蓝光正在闪烁着。
LONG);

  set("outdoors", "/open/badman");

  set("exits", ([ /* sixeof() == 1 */
  "west" : __DIR__"bump01.c",
]));

  setup();
}
