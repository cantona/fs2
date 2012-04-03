// Room: /open/gsword/room/gsword1-4.c
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
一条普通的走廊 ,连往仙剑的武器 ,防具室 .俗话说 :工欲擅其事 ,必先
利其器 ,没有好的配备怎么跟别人争长短呢 ?仙剑虽说是剑派 ,储藏室内不但
各式各样的剑齐备 ,就连其它武器也是一应俱全 .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g1-6.c",
  "east" : "/open/gsword/room/g1-3.c",
]));

  set("light_up", 1);

  setup();
}
