// Room: /open/start/room/eqroom
inherit ROOM;

void create()
{
	set("short","雪仓库");
	set("exits",([ /*sizeof()==1 */
	"down" : __DIR__"room2",
 ]));
	set("no_clean_up", 1);
  set ("long", @LONG
让雪苍弟子堆垃圾的地方，里面说不定藏着有你需要的宝藏。
LONG);

  set("light_up", 1);
	set("no_fight",1);
  setup();
}
