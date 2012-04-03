// show_final_skill.c
//
//                                              Created by Chan
int main(object me, string arg)
{
        int limit,number;
        string message;
        if( !me->query("final/ko_king"))
                return notify_fail("你并没有资格使用终极拳势!!!!\n");
        if( me->query("combat_exp") < 5000000)
                return notify_fail("你的武学修为未达到自创成招的境界!!\n");
        if( !arg )
                return notify_fail("指令格式：shown_final_skill <数字(1~4)>\n");
        number=atoi(arg);
        limit=me->query("final/limit");
        if(number < 1)
                return notify_fail("招式名称输入错误哦!!\n");
        if(number > limit)
                return notify_fail("你输入的数值超过你能力的范围了!!!\n");
        if(!me->query("final/action"+arg))
                return notify_fail("你尚未设计自己的招式,请先用design_skill!!设计!!!\n");
        message=me->query("final/action"+arg);
        write("----------------你所设计的招式叙述如下-------------------\n");
        printf("%s\n",message);
        write("----------------      显示完成        -------------------\n");
        return 1;
}
int help( object me )
{
        write(@HELP

格式说明:show_final_skill <数字(1~4)>

此指令用来让观看武者观看所设计的终极拳势的招式在讯息上是不是有问题!!!!
例如:
     show_final_skill 1
     此时就会显示出你所设计的第一招skills的叙述!!!!
HELP    );
        return 1;
}
