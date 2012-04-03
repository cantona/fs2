// Room: /open/poison/room/v5.c
inherit ROOM;

void create ()
{
  set ("short", "村长的家");
  set ("long", @LONG
这里是村长的家，村长是村中最有威严的人，村民们要是有了
争执或是有甚么不能解决的事，都会登门拜访请求村长的协助，而
村长也总是义不容辞的进力替村民们解决难题，排解纠纷，因而受
到村民们的敬崇。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"v2-6.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/vleader.c" : 1,
]));
  set("light_up", 1);

  setup();
}
