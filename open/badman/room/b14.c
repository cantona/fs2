// Room: /open/badman/room/b14
inherit ROOM;

void create ()
{
  set ("short", "恶人谷南街");
  set ("long", @LONG
当你自北向南转进此处，正如普通小城镇一般，映入你眼帘的
是一幢幢普通的民宅。而大概是众人只想有个能遮风避雨之处吧，
这里多数的房子皆显得有些简陋，不过却是居民们在恶人谷的安身
立业之所。
    西边传来阵阵的么喝声，好像是恶人谷的练武场.

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/three.c" : 1,
  "/open/badman/npc/six.c" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r6",
  "north" : __DIR__"b4",
  "south" : __DIR__"b15",
]));

  setup();
}
