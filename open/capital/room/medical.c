// Room: /open/capital/room/medical
inherit ROOM;

void create ()
{
  set ("short", "仁心药店");
  set ("long", @LONG
药店两旁的墙壁均立了两个大柜子, 再纵横分成了数百个小柜子,
每个小柜子上都标示了一种草药名, 仔细的算一算, 这儿有的药材之丰
富只怕是天下数一数二的了, 药店的伙计忙碌的走动着, 都忙的不可开
交, 在角落里一个小学童模样的小孩手里正拿着一把大扇子, 拼命的朝
着火盆搧风。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"h06",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/Pwaiter" : 1,
]));
  set("light_up", 1);

  setup();
}
