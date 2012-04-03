// Room: /open/gsword/room/gsword1-5.c
inherit ROOM;

void create ()
{
  set ("short", "武器室");
  set ("long", @LONG
这里是仙剑派的武器储藏室 ,左首一排长架摆满了各式各样的剑 :长剑 ,
短剑 ,细剑 ,竹剑 ...等 ,一应俱全 ,就只差没有宝剑 .右首的长架则摆满
了其它各式各样的武器 ,不论是大刀 ,铁棍 ,长鞭 ,短匕 ,暗器 ,尽皆齐备.

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/gsword/room/g1-6.c",
]));
  set("objects", ([ /* sizeof() == 3 */
  "/open/gsword/obj/woodsword" : 1,
  "/open/gsword/obj/chusword" : 2,
  "/open/gsword/npc/trainee-4" : 1,
]));

  setup();
}
