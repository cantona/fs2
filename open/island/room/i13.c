inherit ROOM;

void create()
{  
   
   set("short","农田");
   set ("long", @LONG
金黄色的麦穗低低的垂下来，四周还有用木头做
起来的小篱笆，还有稀疏的摆着几个稻草人，真是幅
美丽的农庄景致．                     
LONG);
   set("light_up", 1);
set("objects", ([ /* sizeof() == 2 */
  "/open/start/npc/hen" : 2,
  "/open/start/obj/bogle" : 1,
]));
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 4 */
 
   "west" : "/open/island/room/i6",
    "north" : "/open/island/room/i15",
   "east" : "/open/island/room/m1",

]));
   set("outdoors", "/open/main");

 setup();
}

