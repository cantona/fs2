//--暂时关闭，以免经验值暴高   firedancer 2002/7/28
inherit ROOM;

void create ()
{
        set( "short", "昆仑山顶" );
        set( "long", @LONG
偌大的银色山谷，终年白雪皑皑，地上还积
了一层薄薄的雪，虽是如此还是长了不少的花草
，你到处找找说不定还能找到一些珍贵的药物。

LONG);

  set("outdoors", "1");
        set("no_fight", 1);
        set("no_magic", 1);
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"m4",
//  "enter" : "/open/fire-hole/f-1.c",
  "west" : __DIR__"m6",
  "south" : __DIR__"m2",
]));

  setup();
}
//改成进去在check
// int valid_leave( object me, string dir )
//{
//      if( dir=="enter" && me->query("combat_exp")<5000000 )
//              return notify_fail( "经验值不够, 进入火龙幻界也是徒然送死。\n" );
//      return 1;
//}
