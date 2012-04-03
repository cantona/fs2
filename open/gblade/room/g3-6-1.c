#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "卧房");
  set ("long", @LONG

这间凡间华丽异常，墙上挂的是唐伯虎的‘海棠春睡图’，案上设的是武
则天当日镜室中设的宝镜；一边摆着赵飞燕立着舞的金盘；盘内盛着安禄
山掷过伤了太真乳的木瓜；榻上是西施挽过的纱衾，红娘抱过的鸳枕。看
看这里又想想王大小姐的房间，没想到即使是姊妹彼此间的差别也是很大
的。


LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "north" : (: look_door,     "north" :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"g3-6",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/shoue.c" : 1,
]));
  set("light_up", 1);
	create_door("north","雕花紫檀木门", "south",DOOR_CLOSED);

  setup();
}
