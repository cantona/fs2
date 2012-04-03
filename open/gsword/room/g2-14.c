// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
  set ("short", "大长廊");
  set ("long", @LONG
仙剑派的大长廊 ,连接派内各厅堂 ,两侧的墙壁上满是当年仙剑派的
开山祖师--逍遥子--大战群魔的情景，看着祖师爷身形飘忽，一只木剑在
手中竟能使的如此浑圆如意，看的你心炫神怡。长廊呈东西走向 ,西北方
一栋三楼大屋 ,正是流云轩 ,西边尽头是一片菜圃 .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g2-15.c",
  "east" : "/open/gsword/room/g2-10.c",
]));

  set("light_up", 1);

  setup();
}
