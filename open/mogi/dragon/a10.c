// Room: /u/p/poloer/dragon/a10
inherit ROOM;

void create ()
{
  set ("short", "炎龙谷前段");
  set ("long", @LONG
进到了谷中，四周昏暗无光，要小心奕奕的走才行。只能摸
着墙壁前进，感觉身旁不时有东西走过，偶而还能听到鬼怪哭嚎
的声音，听起来令人起寒。
    前方有看到微微的灯光，是什么东西呢?

LONG);
      set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"ring-are",
  "north" : __DIR__"a8",
]));

  setup();
}
