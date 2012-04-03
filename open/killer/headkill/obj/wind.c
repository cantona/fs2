#include <ansi.h>
inherit ITEM;
inherit F_GUILDCMDS;
void create()
{
        set_name("清风卷轴", ({ "wind roll","roll","wind"}) );
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else 
	{
                set("unit", "把");
		set("value", 10);
		set("long",@LONG
         这是一个用来使出五鬼搬运大法的卷轴,专门提供给杀手潜入各门派用,
         但是，据说只有蓝凤组才持有这一个卷轴，一般杀手并没有这种卷轴。
 
      现今提供的各传点: 1. 火之试炼场  2. 风之试炼场 
			3. 水之试炼场  4. 土之试炼场 
                        5. 蓝凤组所在地       
	没有通过四次试炼的话，五鬼将无法将你传送到蓝凤组所在地
 
      移动方法：windrun <number>
LONG);
        }
}

void init()
{
        if( environment() == this_player() )
	{
        add_action("do_windrun", "windrun");
	}
}

int do_windrun(string arg)
{ 
    mixed count;
    int money,i,gmove;
    object me,roomm;

    string room="";
    me = this_player();
    if( me->query("class") != "killer")         return 0;
    if( me->query_temp("head") != 6)		return 0;
    if( me->query_temp("unconcious") )          return 0;
    if( me->is_fighting() )
        return notify_fail("战斗中无法使用。\n");
    if( environment(me)->query("no_transmit") )
    {
      message_vision( HIG+"只见地下冒出五鬼，令$N眼前一花，然后走了\n"+NOR ,me);   
       return 1;
    }

    message_vision( HIG+"只见地下冒出五鬼，一拥而上，令$N眼前一花.\n"+NOR ,me);   
    switch(arg)
    {
       case "1":
         room="/open/killer/headkill/room/testrm1.c";		break;
       case "2":
         room="/open/killer/headkill/room/testrm2.c";		break;
       case "3":
         room="/open/killer/headkill/room/testrm3.c";		break;
       case "4":
         room="/open/killer/headkill/room/testrm4.c";		break;
       case "5":
	{
	 if (me->query_temp("kill_ghost") >= 4)
	 {
		me->set_temp("head",7);
	        room="/open/killer/headkill/room/bluerm1.c";		
	 }
	 else
         {
		room="";
		write(" 五鬼说: 你想我搬你去哪里呢？...\n");
		return 0;
         }
	 break;		
	}
       default:
   }
   if( !me->move(room) )
   {
	
	write(" 五鬼说: 你想我搬你去哪里呢？...\n");
	return 1;
   }
   return 1;
}
