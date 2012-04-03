inherit ITEM;
#include <ansi.h>
void create ()
{
set_name("最新科技人造人",({"super science robot","super","robot"}));
set("long","一个由创办人所制造的最新科技产品，用来判断竞技场
的系统运行是否正常的超级电脑。\n");
set("unit","部");
set("no_get",1);
set("no_sac",1);
setup();
}

int init(object me,object ob) 
{
me=this_player();
ob=this_object();
if(interactive(me))
	{
	  if(me->query("quest/start_game"))
	  {
	    if(!present("fight_card",me))
	    {
	      tell_room(environment(ob),HIY"系统显示："+me->query("name")+"遗失挑战晶片。\n"NOR);
	      tell_room(environment(ob),HIY"\n系统倒数三秒，档案传送目标‘"HIW+me->query("name")+HIY"’。\n\n"NOR);
	      me->start_busy(3);
	      call_out("time01",3,me);
	      return 1;
	    }
	    else
	    {
	      if(me->query("quest/start_game_prize")==1)
	      {
	      tell_room(environment(ob),HIY"系统显示：欢迎"HIG"‘"NOR+me->query("title")+HIG"’"HIY"～"HIW+me->query("name")+HIY"～进入会场。\n"NOR);	    
	      return 1;
	      }
	      else
	      {
	      tell_room(environment(ob),HIY"系统显示：欢迎挑战者‘"HIW+me->query("name")+HIY"’进入会场。\n"NOR);	    
	      return 1;
	      }
	    }
	  }
	  else
	  {
	    if(present("fight_card",me))
	    {
	      tell_room(environment(ob),HIY"系统显示：系统查询‘"HIW+me->query("name")+HIY"’持有非法挑战晶片。\n"NOR);
	      tell_room(environment(ob),HIY"\n系统倒数三秒，预备攻击目标‘"HIW+me->query("name")+HIY"’。\n\n"NOR);
      	      me->start_busy(3);
	      call_out("time",3,me);
	      return 1;
	    }
	    else
	    {
	      tell_room(environment(ob),HIY"系统显示：欢迎新手‘"HIW+me->query("name")+HIY"’进入会场。\n"NOR);	    
	      tell_room(environment(ob),HIY"系统显示：请大家多多照顾"+me->query("name")+"。\n"NOR);	    
	      return 1;
	    } 
	   }
	  }
}

int time(object me,object ob)
{
ob=this_object();
tell_room(environment(me),HIY"\n\n系统远距离攻击‘"HIR"喷墨器"HIY"’预备完成！目标‘"HIW+me->query("name")+HIY"’确认。\n"NOR);
tell_room(environment(me),"\n\n"HIW+me->query("name")+"遭到强力的喷墨攻击。\n\n"NOR);
tell_object(me,HIW"系统显示：‘请勿非经过正常管道获得挑战晶片。’\n"NOR);
me->set("title",HIY"盗版商"NOR);
me->command("recall");
tell_room(environment(ob),HIW"\n系统显示：系统变更完成。\n"NOR);
return 1;
}

int time01(object me,object ob)
{
ob=this_object();
tell_room(environment(me),HIY"\n\n系统远距离传送‘"HIR"转换器"HIY"’预备完成！目标‘"HIW+me->query("name")+HIY"’确认。\n"NOR);
message_vision(HIW"\n\n$N被一道镭光照射。\n\n"NOR,me);
new(__DIR__"f_card")->move(me);
tell_room(environment(ob),HIW"\n系统显示：晶片传送完成。\n"NOR);
return 1;
}