inherit ROOM;

void create ()
{
  set ("short", "圣火秘密集会中心");
  set ("long", @LONG

    这里是圣火教众们集会的场所,在这里,你可享受到外面
所没有的言论自由及人身安全,同时你也可将收集来的eq置
放在这,给后进晚辈一些贴心的关怀..:)

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "down" :"/open/prayer/room/punch1.c",
]));

  set("light_up", 1);
  set("no_clean_up",1);
  set("no_fight",1);
  setup();
  call_other("/obj/board/prayersss_b","????");
}
