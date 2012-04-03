// Room: /open/badman/room/b19
inherit ROOM;

void create ()
{
	set("short", "恶人谷南街");
	set("long", "恶人谷的南街。人来人往的景像，很难让人联想这是个与世隔
绝之地；而虽人多，人人的脸上却都是副冷漠的表情；仿佛任何事
都是不干己身的模样，让人瞧了不禁心冷。");

  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/dog.c" : 1,
  "/open/badman/npc/boy.c" : 1,
]) );

  set("outdoors", "/open/badman" );

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"b18",
  "north" : __DIR__"b7",
]) );


  setup();
}
