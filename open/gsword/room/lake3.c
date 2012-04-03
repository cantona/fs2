#include "/open/open.h"

inherit ROOM;
int counter = 10;
void create ()
{
  set ("short", "昆明湖南");
  set ("long", @LONG
这是昆明湖的最南端,苍葱的树木与苔鲜是这里的要角,
昆明湖水于此向南溢出,一河清水斜躺在树阴下,鹅白的石子
在水中,更显得晶盈.你不禁想弯下腰去触摸(touch)溪水,洗
去你一身的尘埃...
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/squirt" : 1,
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
  "northeast" : "/open/gsword/room/lake2",
  "northwest" : "/open/gsword/room/lake0",
]));

  set ("资源/液体", ([
       "种类" : "水",
       "名称" : "清水",
       "止渴" : 30
  ]) );

  setup();
}

void init()
{
     add_action("touch_water","touch");
}
int touch_water(string arg)
{  
   int _gin;
   message_vision("只见一阵烟波从$N身上流过....\n",this_player());
   if( (counter + random(10)) > 10 )
   {
     message_vision("$N觉得全身舒爽....\n\n",this_player());
     this_player()->add("kee",10);
     counter --;
     return 1;
   } else {
      _gin = this_player()->query("gin");
      message_vision("$N觉得全身一阵寒意...\n\n",this_player());
      if( _gin >5 )
      { 
       this_player()->add("gin", -5);
      }else{
       message_vision("$N似乎冻昏了!!\n",this_player());
       this_player()->set("gin", 1);
       this_player()->set("kee", 1);
      }    
      return 1;
   }
}                              
