#include <ansi.h>
inherit ROOM;
void create ()
{
set("short", HIW"试炼之塔--售票大厅"NOR);
set("long", @LONG

一堆奇装异服的人在此处来往走着，甚至还有一些狗头人身的‘人’在此地
与其他‘无法形容’的生物交谈着，在加上一堆超现在化科技设备呈现眼前
，机器人、液晶显示版、自动系统....等等，你突然觉得你来到了一个不同
的空间，难道这是在作梦吗？

右边有一块规则版(rule_sign)，左边一套晶片申请系统(Electornic chip)。

LONG);
set("item_desc",([
"rule_sign":HIW"
			试炼塔挑战赛：

规则一：里面被NPC打死了，会呈晕眩状态回到recall地方。（感谢SWY大大的苦心编辑）

规则二：如果玩家自己在里面PK的话，死了恕主办人不负这个责任。

规则三：挑战规则是需打倒每一层把关者才能再继续前进，若已经有人在你
	之前闯关的话，那就请等等再进去。

规则四：闯关的奖品，请到右边的领奖处索取。

规则五：打完时，必须更新晶片，否则晶片的档案会与系统不合。

				主办人	Firedancer@F.S.
"NOR,
"chip":HIW"目前是试验阶段，一切晶片免费，请打apply chip申请登记挑战。

	更新晶片打apply newdata。

	想看某一个人的战绩的话，请输入list <IP>。

	目前尚不开放塔主名单。

				主办人  Firedancer@F.S
\n"NOR,
]));
set("exits",([
"out":__DIR__"steeple",
//"east":__DIR__"prize",
"enter":__DIR__"up00",
"north":__DIR__"nick",
]));
set("no_fight",1);
set("no_die_room",1);
set("no_magic",1);
set("no_transmit",1);
set("objects",([
__DIR__"ticket_robot":1,
]));
setup();
}


int valid_leave(object me,string dir)
{
 if(dir=="out"||dir=="east"||dir=="north")
   {
   me->delete_temp("fighting_apply");
   return 1;
   }
 if(dir=="enter")
   {
   me->delete_temp("fighting_apply");
   if(!present("fight_card",me))
     {
     tell_object(me,HIW"系统：物件扫瞄，找不到晶片，进入失败。\n"NOR);
     return 0;
     }
   if(!me->query("quest/start_game"))
     {
     tell_object(me,HIW"系统：人体扫瞄，找不到档案，进入失败。\n"NOR);
     return 0;
     }
   return 1;	
   }
}

void init()
{
	add_action("do_apply","apply");
	add_action("do_list","list");
}

int do_apply(string str)
{
int i=(random(10)+1);
object me=this_player();
if(!str||str != "chip")
{
if(str!="newdata")
return notify_fail(HIW"系统：请确定申请的目标？\n"NOR);
{
if(me->query_temp("change_time"))
return notify_fail(HIW"系统：尚在更新档案，请稍后。\n"NOR);
{
me->set_temp("change_time",1);
call_out("change_card",i,me);
message_vision(HIW"系统：开始进行资料更新。\n"NOR,me);
me->start_busy(i);
message_vision(HIW"资料传输缓冲时间： "+i+" 秒\n"NOR,me);
return notify_fail(HIW"系统：开始接收"+me->query("name")+"档案。\n"NOR);
return 1;
}
}
}
if(me->query_temp("fighting_apply"))
return notify_fail(HIW"系统：系统尚在确认中，请耐心等待。\n"NOR);
if(me->query("quest/start_game"))
return notify_fail(HIW"系统：申请手续已办过，请勿再申请。\n"NOR);
else
{
message_vision(HIW"系统：申请手续中请勿走动。\n"NOR,me);
message_vision(HIW"系统：Id‘"+me->query("id")+"’申请确认中，请稍待"+i+"秒。\n"NOR,me);
me->set_temp("fighting_apply",1);
call_out("check_time",i,me);
return 1;
}
}

int check_time(object me)
{
if(present("fight_card",me))
{
me->delete_temp("fighting_apply");
tell_object(me,HIW"系统：请勿拿着别人的晶片申请。\n"NOR);
return 1;
}
if(!me->query_temp("fighting_apply"))
{
tell_object(me,HIW"系统：目标移动，资料错误，申请失败。\n"NOR);
return 1;
}
else
{
tell_object(users(),

HIY"欢迎"+me->query("name")+"加入挑战"HIG"‘"HIR"试炼□塔"HIG"’"HIY"的行列
		
		"HIW"希望"+me->query("name")+"能不负众望，勇闯第一百层"HIG"‘"HIY"天□閤"HIG"’"HIW"。
"NOR);
new(__DIR__"f_card")->move(me);
tell_object(me,"你得到了一个晶片。\n");
me->set("quest/start_game",1);
me->delete_temp("fighting_apply");
return 1;
}
}


int change_card(object me)
{
if(!me->query("quest/start_game"))
{
tell_object(me,HIW"系统：系统找不到你的资料，请重新进行申请。\n"NOR);
me->delete_temp("change_time");
return 1;
}
if(!present("fight_card",me))
{
tell_object(me,HIW"系统：抱歉，你的晶片不见了，请先补发吧。\n"NOR);
me->delete_temp("change_time");
return 1;
}
else
{
destruct(present("fight_card",me));
new(__DIR__"f_card")->move(me);
call_out("send_card",1,me);
return 1;
}
}

int send_card(object me)
{
message_vision(HIY"系统：开始传送物件‘"HIW+me->query("name")+"□晶片"HIY"’。\n"NOR,me);
message_vision(HIY"\n\n系统远距离传送‘"HIR"转换器"HIY"’预备完成！目标‘"HIW+me->query("name")+HIY"’确认。\n"NOR,me);
message_vision(HIW"\n\n$N被一道镭光照射。\n\n"NOR,me);
tell_object(me,HIW"你拿到了一片‘"+me->query("name")+"□晶片’\n"NOR);
me->delete_temp("change_time");
me->set_temp("apply_newdata",1);
return 1;
}

int do_list(string arg)
{
object me=this_player();
object ob;
ob = LOGIN_D->find_body(arg);
if(!ob)
return notify_fail(HIW"系统：查询失败，此人目前不在线上。\n"NOR);
else
{
int i=ob->query("quest/start_game");
int a=i-1;
int j=ob->query("quest/lose_game");
tell_object(me,"
 
"HIW"▕▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▏
▕▕▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▏▏
▕▕                      火神舞‘超级系统查询机 ’                         ▏▏
▕▕▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▏▏
▕▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▏"NOR"


		   名字："HIW+ob->query("name")+NOR"

		   帮派："NOR+ob->query("clan/name")+NOR"

		   师傅："NOR+ob->query("family/master_name")+NOR"

		   目前挑战楼层：第 "HIY+i+NOR" 楼

		   目前登记失败次数： "HIY+j+NOR" 次
	");
return 1;
}
}