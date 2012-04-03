// Room: /open/wu/room/luroom28.c
// 泷山任朝阳的寝室
inherit ROOM;
void create ()
{
  set ("short", "朝阳阁");
  set ("long", @LONG
你一走进房间，一股浓厚的酒味扑鼻而来，令你顿时头昏眼花，差点跌倒
，你回神过来，看到地上摆满了酒壶，一个彪型大汉正躺在地上呼呼大睡，墙
上挂这一个锦旗写着：县大会武术冠军，你不禁怀疑....难道他是真人不露相?
LONG);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"luroom25",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/sun_jen.c" : 1,
]));
  set("light_up", 1);
  setup();
}
