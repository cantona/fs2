inherit F_CLEAN_UP;

int main(object me, string str)
{
	if( !me->query("clan") )
		return notify_fail("你没有帮派。\n");
        if( me->query("clan/rank") > 1)
            return notify_fail( "这个指令只有帮主可以用!!!\n" );
        if( me != this_player(1) )
                return 0;
        if( me->query("clan/passwd") == "0" )
        {
                write("请输入新的密码:");
                input_to("get_new_pass", 1, me);
                return 1;
        }
        write("为了安全起见, 请输入你原来的密码。\n");
        input_to("get_old_pass", 1, me);
        return 1;
}

void get_old_pass(string pass, object me)
{
        string old_pass;

        old_pass = me->query("clan/passwd");
        if( crypt(pass, old_pass) != old_pass ) {
                write("密码错误。\n");
                return;
        }
        write("请输入新的密码:");
        input_to("get_new_pass", 1, me);
        return;
}

int check_passwd (string passwd)
{
  int   i, n, word,cnt;
  string txt;
  if ((n = strlen (passwd)) < 5) return 0;

  cnt=0;
  for(i=0;i<sizeof(passwd);i++)
  {
    txt=sprintf("%d",passwd[i]);
    sscanf(txt,"%d",word);
    if((word <= 122 && word >= 97) ||
       (word <= 90 && word >= 65))
      cnt++;
  }
  if(!cnt) return 0;
  else if(cnt==sizeof(passwd)-1) return 0;
  else return 1;

}

void get_new_pass(string pass, object me)
{
        if(!check_passwd (pass)) {
                write ("密码必须至少含有一个普通英文字母跟一个非普通英文字母.\n");
                write("\n请再输入一次新的密码：");
                input_to("get_new_pass", 1, me );
        }
        write("\n请再输入一次刚刚的密码，以资确认：");
        input_to("confirm_new_pass", 1, me, crypt(pass,0));
}

private void confirm_new_pass(string pass, object ob, string new_pass)
{
        write("\n");
        if( crypt(pass, new_pass)!=new_pass ) {
                write("对不起，您输入的密码并不相同，继续使用原来的密码。\n");
                return;
        }
        if( !ob->set("clan/passwd", new_pass) ) {
                write("密码变更失败！\n");
                return;
        }
        ob->save();
        write("密码变更成功。\n");
}
int help(object me)
{
  write(@HELP
指令格式 : c_passwd
指令说明 :
         这个指令是用来更改帮派的密码,在帮主宣布灭帮时会用到!!
也是帮派的最后防线,所以身为帮主的人要记着帮派的密码!!!
         系统基本上
         会要求你不能使用下列情形当密码：
             1.  太短，目前设定是不能比五个字元短。
             2.  全部都是英文字，至少必须包括数字或特殊符号。
             3.  全部都是特殊符号，如全部都是数字。
HELP
    );
    return 1;
}
