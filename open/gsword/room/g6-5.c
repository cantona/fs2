// Room: /open/gsword/room/g6-5.c
inherit ROOM;

void create ()
{
  set ("short", "悬崖边");
  set ("long", @LONG
你来到思过崖的边缘，这里的山壁较为缓和，西边一条羊肠小径，直
通崖顶，虽颇为陡峭，但对你来说，似乎算不了什么！
 
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
   "westup" : "/open/gsword/room/g6-6.c",
  "southwest" : "/open/gsword/room/g6-4",
]));

  setup();
}
