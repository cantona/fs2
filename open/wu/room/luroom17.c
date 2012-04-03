// Room: /open/wu/room/luroom17.c
// 泷山武馆的玄关
inherit ROOM;
void create ()
{
  set ("short", "玄关");
  set ("long", @LONG
这里是泷山派玄关,往西的话是通往泷山派的大厅,东边则是泷山派的
练武场地,由于此处极为重要,所以任正晴委派泷山派高手--陈玄龙--
来看守。看到看守的人的目光,不禁让你心神一震!!!!
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"luroom9.c",
  "east" : __DIR__"luroom18.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/chen" : 1,
]));

  setup();
}
