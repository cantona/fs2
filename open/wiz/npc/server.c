#include <ansi.h>

inherit NPC;

void do_patrol();
void create()
{ 
	set_name("小泥巴星球",({"server","Sserver"}));
  set("age",2);
  set("long","泥巴星球的小啰啰,属于欺恶怕善型,专们对付利用bug频频来此的玩家\n");
  set("title","天界守护者");
  set("no_kill",1);
  set("combat_exp",1000000); 
  set("chat_chance",25);
  set("chat_msg", ({
  (: do_patrol :)
  }));
  setup();
}


void init() {
object obj;
::init();
        if(interactive(obj=this_player())) {
	   if(userp(obj)&&!wizardp(obj)) {
	      if(obj->query_temp("gowiz")) {
		if(obj->query("gowiz")) {
		   command("say 看样子你似乎不怕死嘛!!..来这么多次");
		obj->save();
		   obj->die();
		   return;		
		}
		seteuid(ROOT_UID);
		command("say 说不能来了还来....明知故犯!!找死！！");
		message_vision("$N二话不说,将$n踢出了这个世界!!\n",this_object(),obj);
		obj->set("gowiz",1);
		destruct(obj);
		return;
	      } else {
		command("say 这里是禁止玩家参观的,不要再来了。");
		message_vision ("$N伸手一招,将$n送离了此处。\n",this_object(),obj);
		obj->set_temp("gowiz",1);
		obj->move("/open/common/room/inn");
                obj->set("startroom","/open/common/room/inn");
		return;
	      }	 
	  }
      
        }

return;
}

void do_patrol()
{
  if( random(2) == 1)
	command("go west");
  else
	command("go east");
  return;
}


