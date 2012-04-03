#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "断魂桥");
  set ("long", @LONG
两旁岩壁陡峭，原本有一座桥，但不知为何早已遭受破坏许久，
此处临空数百丈，俯视脚下，惊险万状，你注意到高空垂着一条长索
长索的另一端绑在一块大石头上，崖下山林飞瀑，河川奇石，崖下景
物尽收眼底。
LONG);

  set("exits", ([
  //"south" : "/open/tendo/room/g5-1.c",
  ]));
  set("light_up", 1);
  set("outdoors",1);

  setup();
}
void init()
{
        add_action("do_search", "search");
        add_action("do_fly","fly");
}

int do_fly(string str){
 int exp;
 object me;
 string name;
 me = this_player();
 exp=me->query("combat_exp",1);
 name=me->query("name");
  if(!str || str != "line"){
        tell_object(me,HIC"你还真的以为你会临空飞渡啊!!不借力怎飞跃呢？\n"NOR);
        return 1;
                           }
  if(exp < 1500000){
        tell_object(me,HIC"你的武学修为还不够，可能会飞不过去而跌死喔。\n"NOR);
        return 1;
                  }
  tell_object(me,HIC"只见你借力使力，一脚踏在长索上,顺势而过。\n"NOR);
  tell_object(users(),HIW"
         「孤卒浴血斗志高，千秋定论难争峰；

                昊日显照星光掩，百川汇宗谁与共。”

      "+HIY+name+HIW"临空飞渡了"HIR"断魂之桥"NOR"，毅然地步上了锁妖塔之途。\n"NOR);
  me->move("/open/tendo/room/tower/tree1");
  return 1;
}
int do_search()
{
object me;
 me = this_player();
 tell_object(me,HIW"一条破破烂烂的长索(line)，看起来摇摇欲坠，如果你胆子够大的话，可以试着临空飞渡而过(fly)。\n"NOR);
 return 1;
}
