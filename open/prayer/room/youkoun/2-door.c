//open/prayer/room/youkoun/2-door.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","大门");
        set("long",@LONG

                ,,;,                ,,              ,;;;;;,,   ,,,,,,,,
            ,,;;;  ';;,          ,  ;'              ;;,,,,;;   ;,,,,,;;
 ,;;;;;;, '';,, ';,,;'       ,,;;'  ;   ;;;,,       ;;'''';;   ;''''';;
     ;       ;;;;''                 ;               ;;,,,,;;   ;,,,,,;;
  ,,,;,,,';;';;,,,,,,,     ,,;;;;;;;;;;;;;;;;;      ;;'''''          ;;
 '''';'''   ,'  ';                ;; ;              ;'               ;;
     ;    ,,,,,;;;';,,,,,       ,;'  ;             ;;                ;;
 ,,,;;;;;   ,,   ;   ,,       ,;'    ;            ,;'                ;;
 ''         ;;  ,;,,,;;   ,,;;'      ';,,,,,,,;;';;'                 ';,
             '''''''''    '''             '''''  ''                   ''

LONG);
     set("item_desc", ([ /* sizeof() == 1 */
      "north" : (: look_door,     "north" :),
]));

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"20",            //练武场
        "east":"/open/prayer/room/westarea/road34",     //马路
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/door-looker1" : 2,            //大门守卫 
                
]));
        set("light_up", 1);
        create_door("north","圣火刻纹精钢大门", "south",DOOR_CLOSED);
  setup();
}

int valid_leave(object me, string dir)
{

  if(dir=="north" && me->query("gender")== "男性" && !present("board",me))
      return notify_fail("[36m男人是无法进入瑶光门的!除非你有教主的令牌!![0m\n");
  
      return ::valid_leave(me,dir);
}
    
