inherit ROOM;
#include <ansi.h>
int done;
void create ()
{
  seteuid(getuid());
set ("short", "密室");
  set ("long", @LONG
一入房门 ,你马上感到寒气扑面而来 ,略一凝神 ,只见左手一个平台上 ,一个暗蓝色的(box)散发出令你赶到无比舒适的灵气，使你忍不住想去开启它。
LONG);
  set("exits", ([ /* sizeof() == 2 */
  "out" : "/open/scholar/room/r17.c"
]));
  set("light_up", 1);
  set("no_clean_up",1);
  setup();
}
 void init()
{
 add_action("open_box","open");
  }

int open_box(string str)
 {
  object me;
  me =this_player();
  if( done== 0 )
      {
      message("system",HIC"\n远方天空出现突然出现数以千计的蓝色光点..\n"NOR,users());
      message_vision(HIC"\n只见无数彩蝶围绕在$N身边，眼前的景象看的你目瞪口呆..\n"NOR,this_player());
      call_out("msg1",3,me);
     }
   else
    message_vision("箱内竟是空无一物 ,你不禁呆了一会\n",me);
    me->set("liyu",0);
  done=1;
    return 1;
}

int msg1(object me)
{
  object ob;
  message("system",HIC"\n转眼间蓝色光点慢慢聚集在世外书香..\n"NOR,users());
  message_vision(HIC"\n无数彩蝶顿时朝向$N飞去，惊愕之余，彩蝶已幻化为笔凝聚在$N手中..\n"NOR,me);
  ob=new("/open/gsword/new/pen.c");
  me->set_temp("liyu_pen",1);
if(!me->query("quests/shasword")) me->set("quests/shasword",1);
  me->set("liyu",0);
  ob->move(me);
  return 1;
  }
