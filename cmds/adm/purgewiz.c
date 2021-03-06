// modify purge.c by ice..

#include <ansi.h>
#define SYNTAX  "指令格式：purgewiz [<未上线天数><至少十天>] | <巫师姓名> because <原因> \n       | look [<未上线天数>] <观看功能，不杀档>\n"

inherit F_CLEAN_UP;

int do_purge_wizards(int day, int flag);

int main(object me, string arg)
{
        string name, reason;
        int day;
        object ob;

        if( me!=this_player(1) )
                return notify_fail("你没有权力使用这个指令。\n");

        if( !arg ) return notify_fail(SYNTAX);

        if( sscanf(arg, "%d", day) && day >= 10) return do_purge_wizards(day, 1);

        if( sscanf(arg, "look %d", day) ) return do_purge_wizards(day, 0);
        
        if( sscanf(arg, "%s because %s", name, reason)!=2 )
                return notify_fail(SYNTAX);

        seteuid(getuid());
        if( file_size(DATA_DIR + "login/" + name[0..0] + "/" + name + __SAVE_EXTENSION__)<0 )
                return notify_fail("没有这位使用者。\n");

        if(SECURITY_D->get_status(name) == "(player)")
                return notify_fail("这个指令只能 purge 巫师。\n");

        if(SECURITY_D->get_status(name) == "(admin)"
           || SECURITY_D->get_status(name) == "(guest)"
           || SECURITY_D->get_status(name) == "(manager)")
                return notify_fail("这个指令不能 purge ADMIN 以上的巫师。\n");

        if(ob=find_player(name))
                destruct(ob);

        SECURITY_D->set_player(name);
        rm(DATA_DIR + "login/" + name[0..0] + "/" + name + __SAVE_EXTENSION__);
        rm(DATA_DIR + "user/" + name[0..0] + "/" + name + __SAVE_EXTENSION__);
        write( "使用者 " + capitalize(name) + " 删除掉了。\n");
        log_file("static/PURGE_WIZ", sprintf("[%s] %s purged %s because %s.\n",
                ctime(time())[0..15], geteuid(this_player(1)), name, reason));

        return 1;
}

int do_purge_wizards(int day, int flag)
{
        int i, wiz_cnt, count;
        string *wiz;
        mixed info;

        wiz = sort_array(SECURITY_D->query_wizlist(), 1);
        seteuid(getuid());
        write("\n*** 整理巫师储存档中，请稍候.... ***\n");
        count=0;
        wiz_cnt=0;
        for(i=0; i<sizeof(wiz); i++)
        {
                wiz_cnt++;
                if(file_size(DATA_DIR + "login/" + wiz[i][0..0] + "/" + wiz[i] + __SAVE_EXTENSION__)<0 )
                {
                        if(flag)
                                SECURITY_D->set_player(wiz[i]);
                        count++;
                        write(wiz[i]+" : "+SECURITY_D->get_status(wiz[i])+" 早已不存在。\n");
                                continue;
                }

                if(SECURITY_D->get_status(wiz[i])=="(manager)" || SECURITY_D->get_status(wiz[i])=="(guest)" || SECURITY_D->get_status(wiz[i])=="(admin)" || SECURITY_D->get_status(wiz[i])=="(arch)")
                                continue;

                info = stat(DATA_DIR + "login/" + wiz[i][0..0] + "/" + wiz[i] + __SAVE_EXTENSION__);
                if( (time()-(int)info[1])/86400 >= day ) {
                        count ++;
                        write(wiz[i]+" : "+SECURITY_D->get_status(wiz[i])+" 已经有 "+(time()-(int)info[1])/86400+" 天没上线。\n");
                        if(flag)
                        {
                                SECURITY_D->set_player(wiz[i]);
                                rm(DATA_DIR + "login/" + wiz[i][0..0] + "/" + wiz[i] + __SAVE_EXTENSION__);
                                rm(DATA_DIR + "user/" + wiz[i][0..0] + "/" + wiz[i] + __SAVE_EXTENSION__);
                        }
                }
        }
        write("\n\n原来总共有 " + wiz_cnt + " 位巫师。\n");
        write( count + " 个超过 " + day + " 天未上线的巫师被清除掉了。\n");
        write("现在总共有 " + (wiz_cnt - count) + " 位巫师。\n");
        if(flag)
        log_file("static/PURGE_WIZ", sprintf("[%s] %s cleaned up %d wizards\n
        \t\t who didn't login for more than %d days\n
        \t\t Resulting statistics: %d wizards remaining.\n",
                ctime(time())[0..15], geteuid(this_player(1)), count, day, wiz_cnt - count));


        return 1;
}

int help()
{
        write(SYNTAX + @TEXT

清除一个巫师或清除超过一定天数(大于十天)不曾上线的巫师。
TEXT
        );
}
