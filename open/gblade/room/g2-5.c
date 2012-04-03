inherit ROOM;

void create ()
{
  set ("short", "水池");
  set ("long", @LONG

你一步步行到水池来，只见各色水禽尽都在池中浴水，也认不出名色来，
但见一个个文彩闪灼，好看异常，因而站住，看了一回。池中有一亭，亭
上有一匾，写着‘滴翠亭’亭子四面俱是游廊曲栏，四面雕镂隔子，糊着
纸。池边略略有几点山石，种着芭蕉，那边有两只仙鹤在松树下剔翎。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/crane.c" : 2,
]));
  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"g2-3",
]));

  set ("资源/液体", ([
       "种类" : "水",
       "名称" : "清水",
       "止渴" : 30
  ]) );

  setup();
}
