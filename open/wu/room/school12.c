// Room: /u/d/devils/school12.c

inherit ROOM;

void create()
{
	set("short", "地牢");
	set("long", @LONG
你走进一间阴暗潮湿的小房间，刚进房间时你觉得一片漆黑，等你
眼睛慢慢习惯黑暗后，你赫然发觉有个人被锁在这里，他四肢被铁链锁
住，琵琶骨也被铁链贯穿，他低着头动也不动，令你不知他是死是活..
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"school11",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/jen2" : 1,
]));
        setup();
}
