// Room: /u/l/leei/blacktest0.c
inherit ROOM;

void create()
{
  set ("short", "杀手练习室一");
  set ("long", @LONG
   这里是中级杀手的训练室之一
想要成为好的杀手必须经过不断的锻炼
而这里便是培育优良杀手的房间之一
想要成为好的杀手来这里就对了!!

看着墙上的训练标语与残破的环境，想必这里便是当年的训练室了
据说当年每一间都有四位师兄在此训练杀手，
但是每一位的战斗经验其实都没超过七千点。
LONG);

  set("light_up", 10000);
  set("no_magic", 10);
  set("exits", ([ /* sizeof() == 1 */
	"west":__DIR__"r5",
]));
/*
  set("objects",([
	"open/killer/npc/trainee2": 4,
    ]));
*/
   setup();
}
