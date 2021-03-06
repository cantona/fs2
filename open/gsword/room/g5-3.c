// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
  set ("short", "大长廊");
  set ("long", @LONG
仙剑派的大长廊，连接派内各厅堂，两侧的墙壁上满是当年仙剑派的
开山祖师〔逍遥子〕大战群魔的情景，看着祖师爷身形飘忽，一只木剑在
手中竟能使的如此浑圆如意，看的你心炫神怡。两旁为客房。长廊向南北
延伸，北方为后堂，南边为剑士公会总本部 ─ 凌霄宝殿。

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/gsword/room/g5-7.c",
  "north" : "/open/gsword/room/g5-4.c",
  "south" : "/open/gsword/room/g5-2.c",
  "east" : "/open/gsword/room/g5-6.c",
]));

  set("light_up", 1);

  setup();
}
