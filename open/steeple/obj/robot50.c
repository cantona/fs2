inherit ITEM;
#include <ansi.h>
void create ()
{
set_name("超科技人型机体",({"surpass science robot","surpass","robot"}));
set("long","
一个与真人没有两样的超科技产品，拥有人工学习机能AI，
另外还有丰富的感情机能，不过由于此机能在试炼之塔并
无需要，所已被火神舞给拿掉了。\n");
set("unit","部");
set("no_get",1);
set("no_sac",1);
setup();
}

void init(object me,object ob) 
{
me=this_player();
ob=this_object();
if(interactive(me))
	{
	  if(!me->query("quest/start_game"))
	  {
	  tell_room(environment(ob),HIY"查询到不明物体入侵。危险！危险！\n"NOR,me);
	  tell_room(environment(ob),HIY"\n系统倒数三秒，预备攻击目标‘"HIW+me->query("name")+HIY"’。\n\n"NOR);
	  call_out("time",3,me);
	  }
	  else
	  {
	    if(!present("degu sa",environment(ob)))
	    {
	    object mob;
	    mob=new(__DIR__"npc/npc50");
	    mob->move(environment(ob));
	    tell_room(environment(ob),HIW"系统：战斗申请合格，NPC制作完成。\n"NOR);
	    }
	    else
	    {
	    tell_room(environment(ob),HIR"系统：战斗申请失败，尚有NPC。\n"NOR);
	    }
	  } 
	}
}

int time(object me,object ob)
{
ob=this_object();
tell_room(environment(me),HIY"\n\n系统远距离攻击‘"HIR"喷墨器"HIY"’预备完成！目标‘"HIW+me->query("name")+HIY"’确认。\n"NOR);
tell_room(environment(me),"\n\n"HIW+me->query("name")+"遭到强力的喷墨攻击。\n\n"NOR);
tell_object(me,HIW"系统显示：‘请跟巫师firedancer说明你是如何进入的，以便修正BUG。’\n"NOR);
me->set("title",HIY"作弊天王"NOR);
me->move(__DIR__"steeple");
tell_room(environment(ob),HIW"\n系统显示：入侵者已经受到惩罚，请继续闯关。\n"NOR);
}
