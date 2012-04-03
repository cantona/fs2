// Room: /u/r/ranko/room/p1.c
inherit ROOM;

void create ()
{
  set ("short", "晒谷\场");
  set ("long", @LONG
在你眼前的是一大片的空地，这里是村民收割谷物之后用来放
置谷物接受曝晒的地方，有稻米、小麦、玉黍蜀、蕃薯、以及一些
豆类等等。不时会有一群麻雀及一些不知名的鸟类飞下来偷吃谷物
惹的看守这里的村民气呼呼的追赶着，演出一场人兽追逐战，令人
看了不觉莞尔。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"pl3.c",
  "west" : __DIR__"pl7.c",
  "east" : __DIR__"pl5.c",
]));
  set("outdoors", "/open/poison");

  setup();
}
