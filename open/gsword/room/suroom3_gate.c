// Room: /open/gsword/room/suroom3_gate.c

inherit ROOM;

void create ()
{
  set ("short", "林家大邸入口");
  set ("long", @LONG
这里是蜀中富商林万金的住宅,鲜红的巨门前座立着两只貌
形凶猛的石狮，金艳四色的雕铜门把紧镶在门前，这一看就知道
是个豪邸，也只有林家这种富豪，才敢把住宅盖在将军府旁.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"su12",
]));
  set("light_up", 1);

  setup();
}
