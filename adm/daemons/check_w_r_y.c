#include <ansi.h>
//用来检查玩家所在的房间的目录档名,以防有玩家误闯除/open以外的房间
// by bss
int flag=0;
int main(object user)
{
        int i;
        object room;
        string room_name,dir,record;

        seteuid(getuid());
        if(flag) return 1;
        if(!user)
        {
        record="can't find user"+ctime(time())+"!!\n";
        CBIP_D->record(record,"/u/b/bss/record/no_in_open");
        flag=1;
        return 1;
        }
        dir="";
        record="";
        room=environment(user);
        if(!room){
        return 1;
        }
        room_name=file_name(room);

        for(i=1;i<sizeof(room_name);i++)
        {
                if(room_name[i]=='/')
                        break;
        }
        dir=room_name[1..(i-1)];
       if(dir!="open" && !user->query_temp("有作弊嫌疑") && userp(user)&& !wizardp(user))
        {
        record=sprintf("%s(%s)身处与%s在%s。\n",user->query("name"),user->query("id"),room_name,ctime(time()));
//        log_file("no_in_open",sprintf("%s(%s)身处与%s在%s。\n",user->query("name"),user->query("id"),room_name,ctime(time())));
        CBIP_D->record(record,"/u/b/bss/record/no_in_open");
        user->set_temp("有作弊嫌疑",1);
        }
        return 1;
}
