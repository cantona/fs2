//room:/open/dancer/room/roomsw3s.c :cgy

inherit ROOM;

void create ()
{
  set ("short","厨房" );
  set ("long", @LONG

这里是夜梦小筑的厨房在这里你闻到了阵阵的饭菜香，这
里由镜月岛的弟子掌厨，别看她正当妙龄之际一手厨艺还真是
令人赞不绝口，走到此处你不禁食指大动想大吃一顿。

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "north"     :"/open/dancer/room/roomsw3.c",
  
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/npc/leing.c" : 1,
]));

  setup();

}
