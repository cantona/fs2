// Room: /u/d/devils/school8.c

inherit ROOM;

void create ()
{
        set("valid_startroom", 1);
  set ("short", "正晴武馆");
  set ("long", @LONG
这是正晴武馆大厅，挑高四米二，雕梁画栋，装饰华丽，五张太师椅
位于上首，居中的太师椅坐着一位威严的老者，正以锐利的目光盯着你，
他便是馆主－－任正晴...
LONG);

  set("exits", ([ /* sizeof() == 5 */
  "south" : "/open/wu/room/school11",
  "north" : "/open/wu/room/school10",
  "west" : "/open/wu/room/school7",
  "eastup" : "/open/wu/room/school15",
  "east" : "/open/wu/room/school9",
]));

        set("objects",([
          "/daemon/class/fighter/master_jen":1,
        ]));
  set("light_up", 1);
        set("no_clean_up", 0);
  setup();
  call_other("obj/board/lungshan_b.c","???");
}
int valid_leave(object me, string dir)
{
        if(me->query("class")!="fighter"&&dir=="south")
return notify_fail("不是武者不准进!\n");
return ::valid_leave(me,dir);
}
void init()
{
  add_action("do_pass","pass");
}
int do_pass()
{
  object me;
  me = this_player();
  me->move("/open/center/room/inn");
  return 1;
}
