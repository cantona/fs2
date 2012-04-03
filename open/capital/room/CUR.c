// Room: /open/capital/room/CUR.c

inherit ROOM;

void create ()
{
  set ("short", "银针门");
  set ("long", @LONG
进到这里，你几乎无法想像这样寒酸的地方竟是医者公会－银针门
之所在，简单朴素的装潢，简陋的家具和一般的住家没有两样，唯一不
同的是，这里十分的干净。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"h08",
]));

 
  set("objects", ([ /* sizeof() == 1 */
  "/open/doctor/master_ben" : 1,
]));

  set("light_up", 1);
  set("no_magic", 1);

  setup();
        call_other("/obj/board/doctor_b", "???");
}
