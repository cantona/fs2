// 帮派赦免指令 by Chan 11/29/98
// 只能由帮主发布。
#include <ansi.h>
inherit F_CLEAN_UP;
int help( object me );
int main( object me,string str )
{
  int cgold;
  object ob,killer;
  if( !sizeof(str) )
    return notify_fail( "输入格式错误!!请打help cforgive\n" );
  if(me->query("clan/rank") > 2)
    return notify_fail("你的阶级不够,不能使用追杀令!!!\n");
  ob=find_player(str);
  if(!ob) ob=find_living(str);
  if(!ob) ob=LOGIN_D->find_body(str);
  if(!ob)
     return notify_fail("你想赦免的人不在线上哦???\n");
 if(wizardp(ob)) // 修正by avgirl..真自私的cgy..只改自己的pig..av妳改错了..反正ppl都只看我而已
     return notify_fail("你想赦免的人不在线上哦???\n");
  if(!userp(ob))
     return notify_fail("你只能赦免线上玩家哦!!!!\n");
  if(ob==me)
      return notify_fail("你想赦免自己呀!!!有没有搞错呀???\n");
  if(!ob->query("ckill"))
      return notify_fail("他又没有被追缉!!怎么赦免呀!!!\n");
  if(ob->query("ckill_id") != me->query("clan/name"))
      return notify_fail("你不是追缉他的帮派所以无法赦免!!!\n");
    message_vision("$N发出帮派特赦令,取消对$n所有的追缉及追杀!!\n",me,ob);
    CHANNEL_D->do_channel(me, "shout", "我"+me->query("clan/name")+"的"+me->query("clan/title")+"发出特赦令,原谅"+ob->query("name") +"并取消追杀令!!" );
    ob->delete("ckill_id");
    ob->delete("ckill");
  return 1;
}

int help( object me )

{
    write(@HELP

格式说明:cforgive <ID> 赦免被帮派追缉的人 (限帮主及阶级二的人使用)
指令说明:
这是发出帮派的赦免令取消被帮派所发出追杀令的人的追缉令。
相关指令:help ckill
HELP
    );
 return 1;
}

