//room:/open/dancer/room/roomsw3n.c :cgy

inherit ROOM;

void create ()
{
  set ("short","药房" );
  set ("long", @LONG

这里是夜梦小筑的药房在这里你闻到了阵阵的草药芳香，
由于镜月岛山林草地甚广故各种的草要可说是应有尽有就算是
希有的药草恐怕也不在少数吧!!整理有序的药柜令人心生舒适
之感。

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south"     :"/open/dancer/room/roomsw3.c",
  
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/npc/yi.c" : 1,
]));

  setup();

}
