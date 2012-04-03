// Room: /open/gsword/room/gsword5-7.c
inherit ROOM;

void create ()
{
  set ("short", "一楼楼梯口");
  set ("long", @LONG
中间一条木梯 ,相当精致 ,通往楼上掌门人及各大师兄的寝室 .楼梯旁种满了
花卉 ,远远看去 ,实在赏心悦目 .北边开了个大窗户 ,外面正是仙剑的后花园,和风
栩栩 ,满室芳香 ,住在此地 ,着实享受 .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/gsword/room/g3-12.c",
  "south" : "/open/gsword/room/g3-6.c",
]));

  set("light_up", 1);

  setup();
}
