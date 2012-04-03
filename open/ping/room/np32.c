inherit ROOM;

void create ()
{
  set ("short", "武器室");
  set ("long", @LONG
这里是段王府的武器储藏室 ,左首一排长架摆满了各式各样的刺术武
器 ,有竹笔 ,铁扇 ,打穴撅..等 ,一应俱全 ,右首的长架则摆满了其它各
样的武器 ,不论是大刀 ,铁棍 ,长鞭 ,短匕 ,暗器 ,尽皆齐备。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "northwest" : __DIR__"np2.c",
]));
  set("light_up", 1);
  set("no_fight", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/obj/fan-2" : 2,
]));

  setup();
}
