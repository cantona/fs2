#include <room.h>
inherit ROOM;
string search();
void create()
{
        set("short", "药房");
        set("long", @LONG

    房间里摆满了药柜，此处便是银针门储药的地方，华陀也常常吩
咐弟子们来此抓药，因为这里有些稀世罕见的草药，所以通常这里有
药童在此看守，没事最好别待在这，以免被误会为贼。

LONG
        );
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"3",            
        "south":__DIR__"9",          
        "east":__DIR__"5",          
        ]) );
        set("light_up", 1);
         set("objects", ([ /* sizeof() == 1 */
  "/open/doctor/npc/mdguard.c" : 1,
]));

   setup();
 set("search_desc", ([ /* sizeof() == 1 */
  "药柜" : (: search :),
]));
  setup();
}


string search()
{
if (this_player()->query_temp("shaswordtime")==1)
{
   message_vision("$N在药柜中找来找去 , 摸出了一颗土法珠并收进口带中 \n",this_player() );
   this_player()->set_temp("quests/findball5",1);
   new("/open/gsword/obj1/soilball")->move(this_player());
   return "";
  }
        message_vision("$N在这翻来覆去 , 结果什么也没发现 \n",this_player());
        return "";
}
