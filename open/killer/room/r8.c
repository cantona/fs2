inherit ROOM;
void create()
{
  set ("short", "杀手练习室");
  set ("long", @LONG
这是初级杀手训练的地方
想要成为好的杀手必须经过不断的锻炼
而这里便是培育优良杀手的房间之一

LONG);

  set("light_up", 100);
  set("no_magic", 10);
  set("exits", ([ /* sizeof() == 1 */
        "north":__DIR__"r5",
]));
  set("objects",([
	"open/killer/npc/trainee1" :3, ]));
 setup();
}
