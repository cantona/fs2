// Room: /open/capital/room/convert_room.c
inherit ROOM;

void create ()
{
  set ("short", "战情室");
  set ("long", @LONG
这里是战情官的办公室，所谓战情，顾名思意便是战争情形，古
人有云：知己知彼，百战百胜，所以前线探子都会先来这里回报战况
，如果你在战场上的战功到了一定的程度，那么战情官便会给予你适
当的奖励。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"r05.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/gy.c" : 1,
]));
  set("no_fight", 1);
  set("light_up", 1);
  set("no_magic", 1);

  setup();
}
void init()
{  add_action("do_team","team"); }
int do_team(){
   object me=this_player();
   tell_object(me, "李 唤叫道：不要在这里组 team,或用 team 砍人。\n");
   return 1;
}
