// Room: /open/badman/room/forest14.c
// written by powell 96.4.26@FS
inherit ROOM;

void create ()
{
  set ("short", "森林边缘");
  set ("long", @LONG
突然你眼睛一亮，终于离开了这个鬼森林，这儿看起来荒凉的
很；西边是片茂盛的竹林，北边则是回到那个该死的恶人森林。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"forest15",
  "north" : __DIR__"forest13",
]));
  set("outdoors", "/open/badman");

  setup();
}
