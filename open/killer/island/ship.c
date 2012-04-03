inherit ROOM;
#include <ansi.h>
string out();
void create ()
{
  set ("short", "商船中");
  set ("long", @LONG
房间的摆设十分的简单，除了几张固定的双层木床外，几乎
可以说空无一物了，在每一张木床旁，都有一个可以向外眺望的
圆形玻璃窗，你可以透过窗户看看外面(out)的景象。
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "out" : (: out :),
]));
  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/shipm.c" : 3,
  __DIR__"npc/son.c" : 1,
]));
  set("light_up", 1);

  setup();
}

string out()
{
 object ob;
 object me;
 ob=this_object();
 me=this_player();
 if (me->query_temp("lookout") != 1)
 {
 tell_object(me,HIY"你往远处望去 ,只见商船缓缓航行在海上 ,海上天气晴朗 ,风平浪净 ,让你感到十分舒服."NOR);
 me->set_temp("lookout",1);
 call_out("out_01",10,me);
 return "\n";
 }
 else return "没看到啥特别的东西\n";
}
int out_01(object me)
{
tell_object(me,HIR"\n海面上天气突然转阴 ,并且刮起大风!!\n"NOR);
call_out("out_02",2,me);
return 1;
}
int out_02(object me)
{
tell_object(me,HIR"\n海面上的浪越来越大 ,风也越刮越强!!\n"NOR);
call_out("out_03",2,me);
return 1;
}
int out_03(object me)
{
tell_object(me,HIY"\n甲板上的船员回报 :风浪太强 ,船只已经失控偏离航向了!!\n"NOR);
call_out("out_04",2,me);
return 1;
}
int out_04(object me)
{
tell_object(me,HIY"\n嗯....希望这恶劣的天气能赶快过去....\n"NOR);
call_out("out_05",2,me);
return 1;
}
int out_05(object me)
{
tell_object(me,HIW"\n船只在海面上剧烈的摇晃着 ,船员都开始有了晕船的现象....\n"NOR);
call_out("out_06",2,me);
return 1;
}
int out_06(object me)
{
tell_object(me,HIR"\n突然轰隆一声 ,船只似乎撞上了什么东西 .\n"NOR);
call_out("out_07",2,me);
return 1;
}
int out_07(object me)
{
tell_object(me,HIY"\n一位船员回报 :我们现在搁浅在一座小岛上 ,船底破了一个大洞 ,我们得赶快先将物品运出船外!!\n"NOR);
call_out("out_08",1,me);
return 1;
}
int out_08(object me)
{
me->move("/open/killer/island/is4.c"); 
return 1;
}

