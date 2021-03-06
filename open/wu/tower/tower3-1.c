// Room: /u/p/pokai/room/wu/tower3-1.c
inherit ROOM;

void create()
{
  set ("short","武威七杀塔三楼--");
  set ("long", @LONG
刚踏上这一层楼，你的视线就被一股深蓝色所占满。这一层的四周墙壁，已经
不再是刚刚的那种暗红，而是漆上了一种令人不寒而栗的深蓝；加上斑驳的血印，
使刚刚那股肃杀的气氛又笼罩在你身上。你注意到南边的墙上有一些小小的刮痕，
似乎是一些小字(words)。
LONG);

  set("light_up", 1);
  set("item_desc", ([ /* sizeof() == 1 */
  "words" : @LONG

    我 血风战狂 竞破峰 乙丑年登塔于此，势如破竹，叹无敌于天下　！！
        
LONG,
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"tower3-2",
  "down" : __DIR__"tower2-3",
]));
  setup();
}
