// Room: /open/badman/room/temp
inherit ROOM;

void create()
{
  set ("short", "暂存区");
  set ("long", @LONG
这里用来放一些过渡的东东....
LONG);

  set("no_clean_up", 1);
  setup();
}
