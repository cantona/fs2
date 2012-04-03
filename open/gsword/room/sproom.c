// Room: /open/gsword/room/wghouse.c
inherit ROOM;

void create ()
{
  set ("short", "后堂");
  set ("long", @LONG
这里是仙剑的后堂 ,往西是仙剑的藏剑室 ,东南边是仙剑的中心位置 , 一般掌门
是不许弟子来此的 ,为了避免麻烦 ,还是尽早离开为妙 
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g5-5.c",
  "southeast" : "/open/gsword/room/g5-4.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/npc/swordman" :1,
]));

  set("light_up", 1);

  setup();
}
int valid_leave(object me, string dir)
{
if( dir=="west" && present("han toung",environment(me)))
   return notify_fail(" 邢涛说道 :这里是仙剑重地 ,你还是快离开吧!!!\n");
return ::valid_leave(me,dir);
}
