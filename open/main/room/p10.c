// Room: /open/main/room/p10.c

inherit ROOM;

void create ()
{
  set ("short", "沼泽");
  set ("long", @LONG
这是一片充满污泥的沼泽,几支芦苇抽枝而起,却掩盖不住
这里的泥狞与恶臭,点点浮萍漂在地面的污水上,你恨不得敢快
离开.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/toad" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/main/room/p9",
  "south" : "/open/main/room/p16",
  "north" : "/open/main/room/p4",
  "east" : "/open/main/room/p11",
]));

  setup();
}
