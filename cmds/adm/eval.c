// eval.c
//
// Modified by Kenny@Broken.History (3/3/1997)

inherit F_DBASE;
inherit F_CLEAN_UP;

string doith(string arg);

int main(object me, string arg)
{
        string file, filename, err;
        mixed  ret;
        int    cost;

        if( !arg ) 
                return notify_fail("指令格式: eval <LPC 命令>\n");

        seteuid(geteuid(this_player(1)));
        filename = user_path(me->query("id"));

        if( get_dir(filename) == 0 )
                return notify_fail("你没有私人工作目录，不能使用此指令！\n");

        filename += ("eval_"+me->query("id")+".c");

        file = @EndText

// This file is made by the "eval" command.

#include <ansi.h>
#include <command.h>
#include <function.h>
#include <localtime.h>
#include <origin.h>
#include <room.h>
#include <type.h>
#include <user.h>

inherit F_CLEAN_UP;

mixed eval(string euid)
{
        seteuid(euid);
        {
EndText
                + doith(replace_string(arg, "\n", "")) + ";\n\t}\n}\n";


        seteuid(geteuid(this_player(1)));

        if (ret=find_object(filename)) destruct(ret);

        write_file(filename, file, 1);

        log_file("EVAL", sprintf("[%s] %s eval %s\n",
                ctime(time()), geteuid(me), arg));

        cost = eval_cost();
        err = catch( ret = call_other(filename, "eval", geteuid(this_player(1))));
        cost -= eval_cost();
        if (!err)
        {
                write(sprintf("传回值为: %O\n执行指令数：%d\n执行成功。\n", ret, cost));
                rm(filename);
                if( ret=find_object(filename) ) destruct(ret);
/*
                set("channel_id", sprintf("%s(%s)", me->name(),
                        capitalize(me->query("id"))));
                CHANNEL_D->do_channel(this_object(), "sys",
                        sprintf("eval %s", arg));
*/
        }
        else write("执行失败！\n");
        return 1;
}


string doith(string arg) {

        int i;    // pointer to string within array containing an exploded bit
        int j;    // pointer to character within a given string
        int cnt;  // current count of (+1) ('s and (-1) )'s
        int poq;  // (waiting on) parethesisisis or quote; dual state
        string *inp = explode(arg, ";");

        for (i=0; i<sizeof(inp); i++) {
                for (j=0; j<strlen(inp[i]); j++) {
                        if(!poq && inp[i][j] == ')') cnt --;
                        if(!poq && inp[i][j] == '(') cnt ++;
                        if(inp[i][j] == '\\' && inp[i][j+1] == '"') j+=2;
                        if(inp[i][j] == '"') poq = (!poq);  // toggle poq state
                        if(strlen(inp[i])==j+1) {
                                if(sizeof(inp) == i+1) {
                                        if (cnt>0)
                                                write("!!!!!! 你多写了 "+cnt+"一个左括号「(”。!!!!!!\n");
                                        else if(cnt<0)
                                                write("!!!!!! 你多写了 "+(-cnt)+ "一个右括号「)”。!!!!!!\n");
                                        else if(poq)
                                                write("!!!!!! 字串不正常结束 !!!\n");
                                        // error or no error we return here at the end
                                        return "\t"+implode(inp, ";\n\t");
                                }

                                else if (poq || cnt)
                                        inp[i] = inp[i] + ";"+ inp[i+1], inp -= ({inp[i+1]});
                        }
                }
        }
}


int help(object me)
{
write(@HELP
指令格式 : eval <LPC 命令>

执行指定的 LPC 命令。

例如：eval this_player()->set( "test", ({"test_data"}) )

相关指令：info、data、setqmark、call。
HELP
    );
    return 1;
}

