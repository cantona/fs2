#include <room.h>
#include <ansi.h>
inherit ROOM;
 void create()
{
  set("short", "杀手报报室");
  set("long", @LONG
           -------  给我报报，我给你全世界  --------
       杀手总坛，目前扩建中。如果有任何虫虫，请尽速回报。
       如果虫虫够大只的话，天才小渡会透露一些总坛资料。
       呵。。。总坛是为杀手设计的。请好康的，不要乱说出去。
       不然被迫改掉，我可不管。大家请在此留言.....
       在一旁的(sign）似乎有记载一些事物
       有任何问题的杀手，请打 help killer 会有说明档
       打list 可以列出来目前线上的杀手排行榜。
       打want 可以查出目前线上被通缉的杀手全力追杀的人头

LONG);
        set("exits", ([ /* sizeof() == 1 */
            "north":__DIR__"r0.c",
            "south":__DIR__"floorm.c",
  ]));
set("item_desc", ([ /* sizeof() == 2 */
  
    "sign" : "想消除杀手全力追杀的人头者，可向叶秀杀问(血的试炼)\n",
   ]));
       setup();
        call_other("/obj/board/killerwizs_b","???");
}
int valid_leave(object me, string dir)
{
  if (me->query("class")!="killer" && dir=="north")
 return notify_fail("这是杀手的禁地!由于你没练霸雨螫魂,故你无法进入!\n");

return ::valid_leave(me,dir);
}
void init()
{
  add_action("do_pass","pass");
  add_action("do_billing","list");
  add_action("do_check","want");
}
int do_pass()
{
  object me;
  me = this_player();
  me->move("/open/center/room/inn");
  return 1;
}

int do_billing(string str) 
{
        object *user,me;
        int i,j,k;

        user = users();
        me = this_player();

        for(i=j=0; i<sizeof(user); i++)
           if(user[i]->query("class") == "killer" && !wizardp(user[i]))
              user[j++] = user[i];

        if(str == "combat_exp") 
		{
           call_out("do_exp",0,user,j);
           return 1;
        }
        else if(str == "rain-throwing") 
		{
           call_out("do_rain",0,user,j);
           return 1;
        }
	else if(str == "manakee") 
		{
           call_out("do_makee",0,user,j);
           return 1;
        }
        else if(str == "shadow-kill") 
		{
           call_out("do_shadow",0,user,j);
           return 1;
        }
        else
           return notify_fail("使用格式: list <种类>\n"
                              "经验值(combat_exp)\n"+
			      "魔气杀(manakee)\n"+	
                              "阎影匕首(shadow-kill)\n"+
                              "霸雨遮魂(rain-throwing)\n\n");
}
//query_function("manakee");
int do_check(string str) 
{
    object *user,me,cme,croom;
    int i,j,k;

    user = users();
    me = this_player();
	
	if (!str)
	{
    	for(i=j=0; i<sizeof(user); i++)
      		if(user[i]->query("title") == HIR"杀手全力追杀的人头"NOR)
          		user[j++] = user[i];
        printf(HIG"\t\t杀手全力追杀的人头通缉榜:\n\n"NOR);
        for(i=0; i<j; i++)
        {
			cme=find_player(user[i]->query("id"));
			croom=environment(cme);
           tell_object(this_player(),
              sprintf(HIC"\t%2d 号 %s(%s) 在 %-18s \n"NOR,i+1,
                      user[i]->query("name"),
                      user[i]->query("id"),
						croom->query("short") ) );
		 }
        printf("\n");
return 1;
	}
	return notify_fail("不要乱加指令啦，后面无需要加字串\n");
}

int do_exp(object *user,int j) 
{
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if(user[k]->query("combat_exp") > user[i]->query("combat_exp")) {
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t黑牙联经验值排行榜:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t第%2d名       %-18s %s(%s) \n"NOR,i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));

        printf("\n");
}

int do_makee(object *user,int j) 
{
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
if(user[k]->query("functions/manakee/level") > user[i]->query("functions/manakee/level"))
{
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t杀手魔气杀等级排行榜:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t第%2d名       %-18s %s(%s) \n"NOR,i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));

        printf("\n");
}

int do_rain(object *user,int j) {
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if(user[k]->query_skill("rain-throwing",1) > 
					user[i]->query_skill("rain-throwing",1)) 
				{
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t黑牙联霸雨遮魂排行榜:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t第%2d名       %-18s %s(%s) \n"NOR,
                      i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));

        printf("\n");
}

int do_shadow(object *user,int j) {
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if((int)user[k]->query_skill("shadow-kill",1) > 
					(int)user[i]->query_skill("shadow-kill",1)) 
			   {
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t 黑牙联阎影匕首排行榜:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t第%2d名       %-18s %s(%s) \n"NOR,
                      i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));
        printf("\n");
}
