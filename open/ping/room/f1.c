// Room: /open/ping/room/f1.c ~night~(小恋)

inherit ROOM;

void create ()
{
  set ("short", "风行山寨外");
  set ("long", @LONG

这里就是风行山顶了,而风行山寨就建在这儿,山寨内好像有很多人在那走来走去的,如果你
想多活几年,现在下山去还来的及喔. 门口有两名守卫站着,看的出来,不是随便什么人都可
以进去的.


LONG);

   set("objects", ([ /* sizeof() == 2 */
   "/open/ping/npc/f-guard" : 2,
]));

  set("outdoors", "/open/ping");

  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"f2.c",
 "north" : __DIR__"f3.c",
  "down" : __DIR__"m19",
]));

  setup();
}
int valid_leave(object me,string dir)
{
        if(dir=="north"&&present("guard",environment(me)))
        {
        if(me->query_temp("weapon"))
        return notify_fail("山寨守卫怒气冲冲的看着你说: 干嘛 ? 来闹事 ?\n");
        }
        return 1;
}
