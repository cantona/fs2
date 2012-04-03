#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "树丛小径");
  set ("long", @LONG
你感觉似乎走了好久，刚刚看到的那座塔就在不远的地方啦！你发觉这四周的
花草树木已不像刚刚那些地方那样浓密了。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road2",
  "east" : __DIR__"road4",
]));
set("objects", ([ /* sizeof() == 1 */
  "/open/tendo/room/tower/npc/su" : 1,
]));
  set("outdoors", 1);
  set("no_smash",1);
  set("no_dest",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="east"&&present("elder su",environment(me))) {
  return notify_fail("苏星河大叫：想过去！先杀了我再说吧!!\n");
  } 
 return 1;
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
        call_out( "death_stage", 1, previous_object());
}

void death_stage(object ob)
{
        if( !ob || !present(ob) ) return;
        if ( ob->query("combat_exp") < 450000 ){
                message_vision(HIW "\n\t你突然感觉到一阵迫人的气息!\n" NOR,ob,environment());
                message_vision(HIW "     －－由于你的经验不足，所以被苏星河的内力震了出来－－\n\n" NOR,ob,environment());
                ob->move(__DIR__"road2.c");
        }
        call_out("death_stage", 1, ob);
}



