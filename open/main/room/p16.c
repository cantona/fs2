// Room: /open/main/room/p16.c

inherit ROOM;

void create ()
{
  set ("short", "沼泽");
  set ("long", @LONG
这是一片充满污泥的沼泽,几支芦苇抽枝而起,却掩盖不住
这里的泥狞与恶臭,点点浮萍漂在地面的污水上,你恨不得敢快
离开.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/main/room/p10",
  "west" : "/open/main/room/p15",
  "south" : "/open/main/room/f14",
  "east" : "/open/main/room/p17",
]));

  set("outdoors", "/open/main");

  setup();
}
