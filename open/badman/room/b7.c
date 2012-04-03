// Room: /open/badman/room/b7
inherit ROOM;

void create ()
{
  set ("short", "殿前大道");
  set ("long", @LONG
你终于来到殿前大道的尽头，南北两边的街道上行人稀稀落落
，似乎充满着肃杀之气。你看到西边有一栋雄伟的建筑，大门上挂
着一块写着‘恶人谷’的匾额，门口还燃着两盆熊熊的火炬。在火
焰的照耀下，显得特别神秘，令人透不过气来。

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"b19",
  "north" : __DIR__"b13",
  "west" : __DIR__"g1",
  "east" : __DIR__"b6",
]));
  set("outdoors", "/open/badman");

  setup();
}
