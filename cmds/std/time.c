// time.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	write("现在是" + NATURE_D->game_time() + "。\n");
	return 1;
}

int help(object me)
{
     write(@HELP
指令格式 : time
指令说明 :
           这个指令让你(妳)知道现在的狂想空间时辰。
其他参考 :
           date，uptime
HELP
    );
    return 1;
}
