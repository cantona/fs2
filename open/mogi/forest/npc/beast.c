#include <ansi.h>
inherit ITEM;
int do_temp(object);
int dec_kee(object);
int do_set(object);
int do_delete_temp(object);
string ud;
object obj,room;
int utime,inf;

void create() {
        set_name("魔石雕像",({"evil stone" , "stone", "evil"}));
        set("no_get",1);
        set("no_sac",1);
        set("chat_chance",15);
        set("chat_msg",({

            HIB"阵阵透骨刺寒的阴风吹过～～\n"NOR,
      }));
        setup();
 }

void init()
{
	utime=uptime();
	obj = this_player();
	room = environment(this_object());
	ud = geteuid(obj);//改用euid，因为badman可以变换id

	if(!room->query("no_clean_up"))
	room->set("no_clean_up",1);

//  先mark这个比对时间，发现比对时间会造成某种错误，造成可以重覆呼叫mob
//	if(!room->query_temp("ud"))//没有比对的时间，设定比对时间
//	{
//	room->set_temp("ud",utime);
//	}else{
//	  if( utime - room->query_temp("ud") >= 3600)//超过一小时，重设
//	  room->set_temp("ud",utime);
//	}

	if(interactive(obj))
	{
	  if(!room->query_temp(ud)) //如果没有该玩家名字，叫mob
	  {
	  room->set_temp(ud,utime);//在房间设上玩家来过的记号，并呼叫mob
	  do_set(obj);
	  dec_kee(obj);
	  }else{//已经有了，判断是否大于一小时，大于一小时则重设并呼叫mob
	  if( utime - room->query_temp(ud) > 3600 )
	    {
	    room->set_temp(ud,utime);
	    do_set(obj);
	    dec_kee(obj);
	    }
	  }
	}
}

int dec_kee(object obj)
{
	obj = this_player();
        obj->add("gin",-150);
        obj->add("kee",-250);
        obj->add("sen",-150);
        return 1;
}

int do_set(object obj)
{
        object mob;
	obj=this_player();
        if(obj->query("race") == "野兽") return 1;
        if(obj->query("max_force") < 500 &&
           obj->query("combat_exp") < 250000) return 1;
        switch(random(4)+1)
        {
           case 1  : mob=new("/open/mogi/forest/npc/mob1");
                     mob->move(environment(obj));
                     break;
           case 2  : mob=new("/open/mogi/forest/npc/mob2");
                     mob->move(environment(obj));
                     break;
           case 3  : mob=new("/open/mogi/forest/npc/mob3");
                     mob->move(environment(obj));
                     break;
           case 4  : mob=new("/open/mogi/forest/npc/mob4");
                     mob->move(environment(obj));
                     break;
           default : break;
        }
        switch(random(4)+1)
        {
           case 1  : mob=new("/open/mogi/forest/npc/mob1");
                     mob->move(environment(obj));
                     break;
           case 2  : mob=new("/open/mogi/forest/npc/mob2");
                     mob->move(environment(obj));
                     break;
           case 3  : mob=new("/open/mogi/forest/npc/mob3");
                     mob->move(environment(obj));
                     break;
           case 4  : mob=new("/open/mogi/forest/npc/mob4");
                     mob->move(environment(obj));
                     break;
           default : break;
        }

        return 1;
}
