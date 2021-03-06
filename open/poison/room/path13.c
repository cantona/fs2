// Room: /open/poison/room/path13
#include <ansi.h>
#include <room.h>

inherit ROOM;
void create ()
{
  set ("short", "牢房");
  set ("long", @LONG
这里便是石牢所在地，由此看去可看见三个牢房，东边
是有一密封铁门，北面有一道只留一小小洞口的厚铁门，南
面则是一般牢房，由一面铁窗隔离，此地极为阴森恐怖。
LONG);

  set("item_desc", ([ /* sizeof() == 3 */
  "south" : (: look_door,     "south" :),
  "north" : (: look_door,     "north" :),
  "east" : (: look_door,     "east" :),
]));
  set("exits", ([ /* sizeof() == 4 */
  "westup" : __DIR__"path12",
  "north" : __DIR__"room19",
  "south" : __DIR__"room20",
  "east" : __DIR__"room22.c",
]));
  create_door("south",HIR"红色铁门"NOR,"north",DOOR_LOCKED);
  create_door("north",HIB"蓝色铁门"NOR,"south",DOOR_LOCKED);
  set("need_key", ([ /* sizeof() == 3 */
  "south" : 1,
  "north" : 1,
  "east" : 1,
]));

  setup();
}
void init()
{
  object me = this_player();
  if(me->query_temp("poison_help")==2) {
        remove_call_out("greeting");
        call_out("greeting",1,me);
      }
}
void greeting(object me)
{
  tell_object(me,HIC"你听到南面传来阵阵求救声。\n");
  tell_object(me,HIC"救～～我～～出～～去～～\n");
  if(!present("red key",me)) {
        remove_call_out("greeting2");
        call_out("greeting2",1,me);
      }
}
void greeting2(object me)
{
  me->set_temp("poison_help",3);
  tell_object(me,HIC"啊! 你没有钥匙呀! 赶快去向勾魂使拿吧! \n");
  tell_object(me,HIC"只要你救我出去我就告诉你一些秘密。\n");
}
