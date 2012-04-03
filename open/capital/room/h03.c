// Room: /open/capital/room/h03.c

inherit ROOM;

void create()
{
	set("short", "文来胡同");
	set("long", "文来胡同上也是一条热闹的大街, 平常来来往往的人潮, 都是来选
购一些文房四宝--笔、墨、纸、砚。这儿卖的东西绝对没有一些俗货, 
每件东西都算的上是精品, 因此大部分的文人都喜爱来这选购他们吃饭
的家伙。
");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"h02",
  "east" : __DIR__"h04",
]) );

  set("outdoors", "/open/capital" );


  setup();
}
