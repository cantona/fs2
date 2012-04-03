inherit ROOM;
string screen();
#include <ansi.h>
void create()
{
set("short","无重力传送区");
set("long",@LONG

四周都是无止尽的空间，你整个人就像是漂浮在外太空一般，
没有所谓的上下左右，而你旁边似乎也漂浮着许多挑战试炼之
塔的人们，每个人眼前都有一个萤幕(screen)跟随着，你也不
例外。

LONG);
set("item_desc",([
"screen":(:screen:),
]));
set("no_fight",1);
set("no_kill",1);
set("no_magic",1);
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
setup();
}

string screen()
{
object me=this_player();
tell_object(me,HIW"
传输资料：
		使用者："+me->query("name")+"

		使用指令：move <number>


     1. 试炼塔大厅     2. LV10中继站     3. LV20中继站
     4. LV30中继站     5. LV40中继站     6. LV50传送站
"NOR);
return "\n";
}

void init()
{
add_action("do_move","move");
}

int do_move(string str)
{
object me=this_player();
int i,j;
j=me->query("quest/start_game");
sscanf(str,"%d",i);
switch(i)
{
	case 1: tell_room(environment(me),HIW"系统：资料符合，开始传送挑战者"HIY+me->query("name")+HIW"。\n"NOR,me);
		me->move(__DIR__"ticket");
		message_vision(HIW"$N缓缓的从玻璃柱状体内走出来。\n"NOR,me);
		break;
	case 2: if(j>10)
		{tell_room(environment(me),HIW"系统：资料符合，开始传送挑战者"HIY+me->query("name")+HIW"。\n"NOR,me);
		me->move(__DIR__"up10");
		message_vision(HIW"$N缓缓的从玻璃柱状体内走出来。\n"NOR,me);
		return 1;}
		else
		{call_out("lowlevel",1,me);
		return 1;}
		break;
	case 3: if(j>20)
		{tell_room(environment(me),HIW"系统：资料符合，开始传送挑战者"HIY+me->query("name")+HIW"。\n"NOR,me);
		me->move(__DIR__"up20-1");
		message_vision(HIW"$N缓缓的从玻璃柱状体内走出来。\n"NOR,me);
		return 1;}
		else
		{call_out("lowlevel",1,me);
		return 1;}
		break;
	case 4: if(j>30)
		{tell_room(environment(me),HIW"系统：资料符合，开始传送挑战者"HIY+me->query("name")+HIW"。\n"NOR,me);
		me->move(__DIR__"up30-1");
		message_vision(HIW"$N缓缓的从玻璃柱状体内走出来。\n"NOR,me);
		return 1;}
		else
		{call_out("lowlevel",1,me);
		return 1;}
		break;
	case 5: if(j>40)
		{tell_room(environment(me),HIW"系统：资料符合，开始传送挑战者"HIY+me->query("name")+HIW"。\n"NOR,me);
		me->move(__DIR__"up40-1");
		message_vision(HIW"$N缓缓的从玻璃柱状体内走出来。\n"NOR,me);
		return 1;}
		else
		{call_out("lowlevel",1,me);
		return 1;}
		break;
	case 6: if(j>50)
		{tell_room(environment(me),HIW"系统：资料符合，开始传送挑战者"HIY+me->query("name")+HIW"。\n"NOR,me);
		me->move(__DIR__"up50-1");
		message_vision(HIW"$N缓缓的从玻璃柱状体内走出来。\n"NOR,me);
		return 1;}
		else
		{call_out("lowlevel",1,me);
		return 1;}
		break;
	default: tell_object(me,HIW"系统：无法判断，请重新输入。\n"NOR);
		break;
}
return 1;
}

int lowlevel(object me)
{
tell_object(me,HIR"系统：错误！你的等级尚不足以通往该处。\n"NOR);
return 1;
}