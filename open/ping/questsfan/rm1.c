// Room: /u/d/dhk/questsfan/rm1
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", ""HIY"嵩山"CYN"地界"NOR"");
  set ("long", "此地就是名闻暇尔的五岳之首＂中岳嵩山″地界。传闻\n"
+"中岳嵩山因地形地势特殊的关系，向来有不少隐士、武林高\n"
+"手将此地当成隐居避世之地。而且来来往往的游客、行人有\n"
+"不少误中他们设的机关、迷阵因而丧命。久而久之，嵩山本\n"
+"身已是灵气黯然又加入离奇的路径、迷阵，为中岳更增加许\n"
+"多不少神秘的色彩。若无熟人带路就莽然入山，简直找死的\n"
+"的行为。\n"
+"                                          ┌──┐\n"
+"                                        ┌┘    │\n"
+"                                        |   "HIY"嵩"NOR"   |\n"
+"                                        |   "HIY"山"NOR"   |\n"
+"                                        |   "HIY"地"NOR"   |\n"
+"                                      __|__ "HIY"界"NOR" __|__\n"
+"\n"
);

  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"rm2",
"westdown" : "/open/main/room/M16",
]));

  setup();
}
