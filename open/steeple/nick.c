inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "Title 变更处");
  set ("long", @LONG
这里是用来修改成经挑战过试炼之塔的人们的封号
，只有武者可以进行更改，请输入change title。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"ticket",
]));

  setup();
}

void init()
{
add_action("do_change_title","change");
}

int do_change_title(string arg)
{
object me=this_player();
if(!arg||arg!="title")
return 0;
if(!me->query("quest/start_game_prize"))
{
tell_object(me,"火神舞说道：你又没有改过title。\n");
return 1;
}
if(me->query("class")!="fighter")
{
tell_object(me,"火神舞：你不是武者...我不帮你改title。\n");
return 1;
}
else
{
me->delete("quest/start_game_prize");
me->set("title",HIY"玄天武尊"NOR);
tell_object(me,"称号称改成功。\n");
return 1;
}
}
