inherit ROOM;

void create()
{  
   
   set("short","草原");
   set ("long", @LONG
在你眼前的是一片绿波轻漾，微风带来一阵阵的
青草香气，原野间满布着不知名的小花，远远的才看
的到几棵大树，令人悠然的陶醉其中．                     
LONG);
   set("light_up", 1);
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 4 */
 "west" : "/open/island/room/i1",
   "south" : "/open/island/room/i6",
    "north" : "/open/island/room/i2",
  "east" : "/open/island/room/i15",
]));
   set("outdoors", "/open/main");

 setup();
}

