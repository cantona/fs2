// Room: /open/gsword/room/g6-6.c
inherit ROOM;

void create ()
{
  set ("short", "思过崖");
  set ("long", @LONG
眼前正是仙剑思过崖，每当弟子犯下大错时，往往会被罚在崖上面璧
思过，北方有个小山洞，是思过之所在，站在崖边，视野异常辽阔，极目
远眺，甚至能看到大陆极东之新京，当你转头往西方瞧去，想看看仙剑禁
地是何模样，可惜事与愿违，一面大壁耸立在崖西，完全挡住了你的视线
。
 
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room/g6-7.c",
  "eastdown" : "/open/gsword/room/g6-5",
]));

  setup();
}
