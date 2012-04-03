// Room: /open/wu/room/luroom30
// 泷山任晓吟雅筑
inherit ROOM;
void create ()
{
  set ("short", "晓吟雅筑");
  set ("long", @LONG
才刚刚进屋，你就闻到一股淡雅的清香。
这里是馆主独生女任晓吟的闺房，你可以看到这儿有一套红杉雕成的
桌椅，以及一张镶有翠玉的梳妆台，台上摆着各式各样的发饰，梳妆
台边是一张素净的单人床。看到床上摺叠整齐的被褥，你不禁想到自
己今早忘了摺棉被啦！
LONG);
  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/wu/room/luroom29",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/sheau-yin" : 1,
]));
  set("light_up", 1);
  setup();
}
