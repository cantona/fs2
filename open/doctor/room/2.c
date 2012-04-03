#include <room.h>
inherit ROOM;
void create()
{
        set("short","银针门大厅");
        set("long",@LONG
进到这里，你几乎无法想像这里竟是银针门的大厅，简单朴素的装潢
，简陋的家俱和一般的住家没有两样，唯一不同的是，这里十分的干净，
而且散发着耀眼的光芒。通常神医华陀都在此替人义诊，瞧他忙的还挺开
心的，一旁的药童盯着神医针灸的手法，如果你有什么身体上的疑难杂症
，可以请神医帮你看看，不过看他拿针方式，若被抸上一下，似乎不太好
受。
LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"eq_room",
        "south":__DIR__"5",          
        "east":__DIR__"1",           
        "west":__DIR__"3",          
        "enter":__DIR__"book",          
        ]) );
  set("objects", ([ /* sizeof() == 2 */
  "/open/doctor/npc/master_tor.c" : 1,
  "/open/doctor/npc/mdboy.c" : 1,
]));
  set("light_up", 1);
  set("valid_startroom", 1);

  setup();
call_other("/obj/board/doctorr_b.c",  "???");
}
int valid_leave(object me, string dir)
{
        if(me->query("class")!="doctor"&&dir=="north")
        return notify_fail("对不起, 里面是银针门弟子的聚会之地!!\n");

        return ::valid_leave(me,dir);
}
void init()
{
    object me, ob;
    me = this_player();
    ob = new("/open/doctor/obj/b-mark");

    if(me->query("doctor/start_quest")==1
    && present("master tor",environment(me))
    && !present("book_mark",me))
{
	write("华陀把入阁令交给了你，说道：这重要的东西，为何不收好？");
	ob->move(me);
  }
}
