inherit F_CLEAN_UP;

int main(object me, string name)
{
   string msg;
   object ob;
   int	  login_time, current;

   seteuid(getuid(me));

   if( !name ) ob = me;
   else if (!wizardp(me))
     return notify_fail ("你是他老婆啊，查勤查那么严。\n");
   else ob = find_player(name);
   if( !ob ) return notify_fail ( "目前线上无此人。\n" );
// by konn  把系统时间调整回现实时间
//   current = time();
   current = LOGIN_D->query_time();
   login_time = ob->query_temp("login_time");

   msg  = sprintf( "现在中原标准时间为: %s\n\n", ctime(current) );
   msg += sprintf( "%s是%s连线进来的。\n",
                    name?ob->name():"你",
                    CHINESE_D->chinese_time(login_time) ); 
   if ((login_time=current-login_time) >= 60)
     msg += sprintf( "%s此次上线时间至目前为止共%s。\n",
                      name?ob->name():"你",
                      CHINESE_D->chinese_period( login_time ));

   msg += sprintf( "%s这周的第一天是从%s开始起算的．\n",
                    name?ob->name():"你",
                    CHINESE_D->chinese_time(ob->query("一周") )); 

   msg += sprintf( "%s这周已经上线%s．\n",
                    name?ob->name():"你",
                    CHINESE_D->chinese_period(ob->query("一周上线时间") )); 

   if (!name)
     if (login_time > 86400)
       msg += "\nㄛ喔，这样不行喔，不分昼夜的玩泥巴会搞坏身子ㄋㄟ。\n";
     else if (login_time > 28800)
       msg += "\n哇哩，你上线也未免太久了吧，赶快去办正事啦。\n";
     else if (login_time > 14400)
       msg += "\n嗯，该考虑考虑现实生活了吧。\n";
     else
       msg += "\n希望狂想空间让您思想奔放!!\n";

   write (msg);
   return 1;
}

int help(object me)
{
   write( @HELP
指令格式 : date						一般用法
	   date <人名>					巫师专用
指令说明 :
           这个指令告诉你台湾现在的时刻，并同时告知你何时上线，
         以及上线多久了。
其他参考 :
           time，uptime
HELP );
   return 1;
}
