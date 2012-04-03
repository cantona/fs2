#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", HIW"天枢楼"NOR);
  set ("long", @LONG
这是七星塔中的最后一层, 看了看四周, 心中深感不可思议,
周围尽是一堆堆的白骨, 白骨旁散落着一堆堆的武器及装备, 你
正打算将功力凝聚到十成时, 楼主已经冲到你的身边, 以下了重
手,令你此时不知所措。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/gsword/room/g5-1.c",
  //"out" : __DIR__"room1.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/star/npc/star2.c" : 1,
]));

  setup();
}
void init()
{
        add_action("do_search", "search");
        add_action("do_jump","jump");
	add_action("do_enter","enter");
}

int do_jump(string str){
 int exp;  
 object me;
 string name;
 me = this_player();
 exp=me->query("combat_exp",1);
 name=me->query("name");

	if(!str || str != "hole")
	{
        tell_object(me,"你想跳到那里？\n");
	return 1;
        }
	if(present("starman",environment(me)))
	{
        if(me)
        tell_object(me,HIY"鬼宿说：还没打败我就想去那里呢？\n"NOR);
        return 0;
	}
	if(exp < 340000)
	{
        tell_object(me,"你经验值不够，进入魔界也是徒然送死。\n");
        return 0;
        }
        tell_object(me,"你纵身跳进这黑色的漩涡，顿时神智昏迷，迷迷糊糊中被传到某一地方.....。\n");
        tell_object(users(),HIB"
                   风萧萧兮易水寒～～
                                     壮士一去兮不复还～～         

      "HIM"七星塔顶乌云密布，魔界的入口渐渐浮现..."+HIY+name+HIM"毅然踏上了远征
      魔界的路途，誓言以自身之绝世武功铲平魔界所有危害人类的妖怪...
                   
"NOR);

            me->move("/open/mogi/forest/room1");
            return 1;

            
}

int do_enter(string str)
{
   object me = this_player();
  if(me->query("liyu")==2)
   me->move("/open/gsword/room/appo/liyu.c");
   return 1;
}

int do_search()
{
	object me;
	me = this_player();
	tell_object(me,"你找啊找，终于在墙上发现一个黑色的漩涡(hole)，怪诡异的，跳(jump)进去不知会到那里?\n");
	return 1;
}

int valid_leave(object me, string dir)
{
	if( dir=="up" && present("starman",environment(me)))
	return notify_fail(HIY"鬼宿说：还没打败我就想去那里呢？\n"NOR);
	return ::valid_leave(me,dir);

}
