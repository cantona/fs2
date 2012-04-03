// Room: /open/poison/room/room17
inherit ROOM;

void create ()
{
  set ("short", "魔殿侧殿");
  set ("long", @LONG
这里是冥蛊魔教的侧殿，这里连同正殿，摆设许多奇花
异木，散发出阵阵迷人的清香，大殿内前有一黄金炉，黄金
炉内飘来阵阵麝檀香，整个魔殿香烟袅袅的，如梦如幻。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"room1",
  "down" : __DIR__"coolroom",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/right_hufa" : 1,
]));
  set("light_up", 1);

  setup();
}
int valid_leave(object me, string dir)
{
if (dir == "down" && !me ->query("mark/love",1) )
     return notify_fail("未经允许不得进入！ \n");
     return :: valid_leave(me, dir);
}

