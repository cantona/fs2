// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
  set ("short", "大长廊");
  set ("long", @LONG
仙剑派的大长廊 ,连接派内各厅堂 ,两侧的墙壁上满是当年仙剑派的
开山祖师--逍遥子--大战群魔的情景，看着祖师爷身形飘忽，一只木剑在
手中竟能使的如此浑圆如意，看的你心炫神怡。北边的三楼大屋就是仙剑
生活重心 -- 流云轩 .南边是掌管财物收支的帐房 .

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/gsword/room/g2-16.c",
  "south" : "/open/gsword/room/g2-17.c",
  "east" : "/open/gsword/room/g2-14.c",
  "enter" : "/open/gsword/room/g3-2.c",
]));

  set("light_up", 1);

  setup();
}
