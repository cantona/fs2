#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "仙剑派前山");
	set("long", "你的眼前尽是垂直的峭壁，光滑的连一根草也无法在上面着根，维独在峭壁(cliff)的
左侧，颜色较趋暗色，好奇心使你想看的清楚些，不过那高度实在太高你再怎么努
力，也无法瞧个仔细。        
");

  set("item_desc", ([ /* sizeof() == 1 */
  "cliff" : "岩壁中唯一的裂缝,高度也较低,使劲一爬(climb),说不定爬的上去哦
",
]) );
  seteuid(getuid());

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"rroad1",
  "east" : __DIR__"rroad3",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}

void init()
 {
 add_action("climb_cliff","climb");
 }
 int climb_cliff(string str)
 {
	string skill;
   if(str!="cliff")
  {
    return 0;
   }
//	if(!stringp(skill = this_player()->query_skill_mapped("move")))
//	{
//	message_vision("$N想爬上这陡峭的山壁，但是因为没练轻功而有心无力，只好放弃\n", this_player());
//	return 1;
//	}
	message_vision("$N使出"+to_chinese(skill)+"身影消失在山壁中\n",this_player());
this_player()->move(__DIR__"hole");
 return 1;
 } 
