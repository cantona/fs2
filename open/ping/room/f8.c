// Room: /open/ping/room/f8.c ~night~(小恋)

inherit ROOM;

void create ()
{
  set ("short", "广场");
  set ("long", @LONG

这是风行山寨内的大广场,面积十分广大,有几个小啰啰到处走动,巡逻着,保护山寨的安全,
眼前有一栋三层楼高的碉堡式建筑,占地十分辽阔,整个建筑物看来十分雄伟,装饰的富丽堂,你不禁羡慕起这栋建筑的主人了.你发现建筑物最上方有一圈白色的装饰品,仔细一看,竟是
一颗颗化成白骨的人头,你不禁打个寒颤,原来这就是传说中的风行山寨呀!!!


LONG);


  set("outdoors", "/open/ping");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"f5",
  "north" : __DIR__"f11",
  "west"  : __DIR__"f7",
]));

  setup();
}
