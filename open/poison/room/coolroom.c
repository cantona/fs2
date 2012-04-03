inherit ROOM;

void create ()
{
  set ("short", "魔殿秘室");
  set ("long", @LONG
这里是一间神秘的地下室，里面立有二十五尊黝暗的铜人，每一尊铜人都
摆了一个不同的姿势，而它们的表情也随着动作而有所不同。两旁烧着熊
熊的大火，将这间地下室照的神秘而诡异。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"room17",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/teacher.c" : 1,
]));
  set("light_up", 1);

  setup();
}
