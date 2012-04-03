// design_final_skill.c
//
//                                              Created by Chan
#include <ansi.h>
int done_setskill(string str, string text);

int main(object me, string arg)
{
        int limit,number,value;
        if( !me->query("final/ko_king"))
                return notify_fail("你并没有资格使用终极拳势!!!!\n");
        if( me->query("combat_exp") < 5000000)
                return notify_fail("你的武学修为未达到能使用终极拳势的境界!!\n");
        if( !arg )
                return notify_fail("指令格式：design_final_skill <数字(1~4)>\n");
        value = me->query("functions/final-unarmed/level");
        value=(value / 20)+1;
        if(value > 4)
         value =4;
        number=atoi(arg);
        limit=me->query("final/limit");
        if(value > limit)
         me->add("final/limit",1);
        limit=me->query("final/limit");
        if(number < 1)
                return notify_fail("招式名称输入错误哦!!\n");
        if(number > limit)
                return notify_fail("你输入的数值超过你能力的范围了!!!\n");
        write("符号说明：$N 代表自己 $n 代表敌方 $l 代表敌方被攻击的部位 !!\n");
        write("例如：$N 使出绝招，一拳击向 $n 的 $l的地方!!!!\n");
        me->edit( (: done_setskill,arg :) );
        return 1;
}

int done_setskill(string str,string text)
{

        this_player()->set("final/action"+str,text);
        write("ok!!!设计完成!!!请用show_skill的指令看是否有问题!!!\n");
        write("注意!!!在设计自己的招式时不能有\" 符号!!!\n");
          return 1;
}

int help( object me )
{
        write(@HELP

格式说明:design_final_skill <数字(1~4)>

此指令用来让武者设计终极拳势的招式
例如:
     desgin_final_skill 1
     此时就会要你输入招式的长叙述!!!!
     注意：长叙述的内容不能有 " 也不能太长(超过十五行!!!),否则会造成错误!!!

HELP    );
        return 1;
}
