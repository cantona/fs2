// Room: /u/p/powell/room/biau.c

inherit ROOM;

void create ()
{
  set ("short", "镳局");
  set ("long", @LONG
这是武威镳局的总行, 但是因为年代久远, 却只有一间大厅, 
其实生意如此之好, 几乎是马不停蹄, 多于的房间老早就搬到蜀山
去了, 原因只是最近战乱频仍, 人人朝不保夕, 老镳头也因此不打
算整修这儿, 据说, 武威镳局生意日荣, 黑白两道都很吃的开, 因
这附近的路似乎就是为武威镳局而开设的, 连对面也因此聚集了世
上最有信誉的车马行. 听说车马行的老板跟老镳头当年曾经共同闯
荡江湖寻宝, 可是不知实情是怎样, 也许你可以多打听打听哦.
    西边的出口是通往专门处理文书的房间。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"road3",
  "west" : __DIR__"mail",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/questsfan/npc/assistant.c" : 1,
  "/open/center/npc/mercenary.c" : 2,
]));
  set("light_up", 1);

  setup();
}
