// Room: /open/badman/room/b2
inherit ROOM;

void create ()
{
  set ("short", "恶人谷大街");
  set ("long", @LONG
平坦的大道，在盏盏灯火的照耀下，显得格外的宁静祥和。若
非谷口的那块石碑，认谁都不敢相信这山村一般的街道竟会是江湖
中黑白两道无不闻之丧胆的恶人谷之所在。
    四周越是平静，越是让人不得不绷紧了每一根神经，因为谁也
不知道那看不见的危险会向你吞噬而来。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/guard" : 2,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"b3",
  "east" : __DIR__"b1",
]));

  setup();
}
