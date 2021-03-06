// Room: /open/badman/room/forest12.c
// written by powell 96.4.26@FS

inherit ROOM;

void create ()
{
  set ("short", "恶人森林");
  set ("long", @LONG
你走进了一大片森林之中，走着走着你才发现四周的景物似乎
一直都没变过，让你完全失去了方向。原来这里就是著名的恶人森
林，据说只有恶人谷的人知道如何顺利通过这片森林。

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"forest08",
  "west"  : __DIR__"forest09",
  "south" : __DIR__"forest11",
  "east"  : __DIR__"forest04",
]));
  set("outdoors", "/open/badman");

  set("objects", ([ /* sizeof() == 4 */
  "/open/badman/npc/wolf.c" : 4,
  ]));

  setup();
}

void init()
{
  add_action("do_search","search");
}
int do_search()
{
  object who;
  who = this_player();
  tell_object(who,"\n你发现了一个小洞...便顺着洞口钻了进去\n\n");
  tell_object(who,"\n......爬啊...爬啊......爬啊....\n\n");
  tell_object(who,"\n...爬啊..终于爬到出口了,你不禁喘了一口气.\n\n");
  who->move("/open/badman/room/wolf01.c");
  tell_room(this_object(),"你只看到"+who->query("name")+"弯了身子,一下子就不见了\n");
  return 1;
}
