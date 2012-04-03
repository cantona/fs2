// Room: /open/gsword/room/gsword5-7.c
inherit ROOM;

void create ()
{
  set ("short", "三楼楼梯口");
  set ("long", @LONG
南边就是武林第一大宗师 ---郑士欣的寝居 .中间一条木梯 ,相当精致 ,往下
可达餐厅 ,楼梯旁种满了花卉 ,远远看去 ,实在赏心悦目 .北边开了个大窗户 ,外
面正是仙剑的后花园,和风栩栩 ,满室芳香 ,住在此地 ,着实享受 .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/gsword/room/g3-14.c",
  "down" : "/open/gsword/room/g3-12.c",
]));

  set("light_up", 1);

  setup();
}
