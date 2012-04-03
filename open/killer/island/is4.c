inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "船只搁浅处");
  set ("long", @LONG
前往东瀛的船只就搁浅在这里, 几位船员正在忙碌的修补船底, 而其他的船
员也在此地搭起营帐 (tent). 此地大约位在小岛的东南方,东边是沙岸, 海岸的
景色十分优美, 北边也是沙滩, 除了一两棵干枯的树干, 其他空旷矿的没有什么
东西.
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "tent" : "
随行人员所搭建的,从他们的手法来看应该是相当丰富. 船员们正开始分
工合作,有些做饭有些修船,有些将船上贵重物品搬运下来,十分的有效率.

",
]));
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"is7.c",
  "east" : __DIR__"is5.c",
  "west" : __DIR__"is3",
]));
  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/son.c" : 1,
  __DIR__"npc/shipm.c" : 1,
]));
  set("outdoors", "/u/u");
  setup();
}
void init()
{
object me=this_player();
add_action("report_ok", "report");
if (me->query_temp("can_back",1))
{
tell_object(me,HIY"\n鲁寻突然匆匆忙忙跑过来说: 船只修好了!!\n鲁寻说道: 等你准备好要返行时回报(report)我一声就行了.\n"NOR);
return ;
}
return ;
}
int report_ok()
{
object me;
me=this_player();
if (me->query_temp("can_back")==1)
{
tell_object(me,HIY"你说道: 我准备好了, 可以出发了!!\n"NOR);
call_out("b1",2,me);
me->delete_temp("can_back",1);
return 1;
}
else
{
return 0;
}
}
int b1(object me)
{
tell_object(me,HIC"\n当一切准备就绪, 我和船员们搭上商船离开这座岛屿. \n"NOR);
me->move(__DIR__"ship");
call_out("b2",4,me);
return 1;
}
int b2(object me)
{
tell_object(me,HIC"船只在海上缓缓航行, 那座小岛在眼中也渐渐变小 ...\n"NOR);
call_out("b3",6,me);
return 1;
}
int b3(object me)
{
tell_object(me,HIC"回程上风平浪净并没有发生什么意外, 过了几天我们终于回到枫林港. \n"NOR);
call_out("b4",3,me);
return 1;
}
int b4(object me)
{
tell_object(me,HIY"鲁寻说道: 我们回到枫林港了, 该去跟我父亲回报(report)这次出行发生的事了 !\n"NOR);
me->move("/open/port/room/r5-3");
return 1;
}

