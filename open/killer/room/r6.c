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

LONG);

  set("light_up", 10000);
  set("no_magic", 10);
  set("exits", ([ /* sizeof() == 1 */
	"west":__DIR__"r5",
]));
  set("objects",([
	"open/killer/npc/trainee2": 4,
    ]));
   setup();
}
