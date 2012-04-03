#include <ansi.h>
inherit F_CLEAN_UP;
void create(){ seteuid(getuid());}
int main(object me,string arg)
{
    mapping emote;
    string name;

    if(!arg) return notify_fail("name_emote emote 中文名称\n");

    if(sscanf(arg,"%s %s",arg,name)!=2)
      return notify_fail("name_emote emote 中文名称\n");

    emote=EMOTE_D->query_emote(arg);
    if(!mapp(emote)) return notify_fail("没有这个emote!!\n");

    emote["short"]=name;
    printf("你设定%s的中文名称为(%s)\n",arg,name);
    EMOTE_D->set_emote(arg, emote);
    write("ok.\n");
    return 1;
}
int help(object me)
{
        write(@HELP
指令格式: name_emote emote的英文名 emote的中文名

可以帮没有中文名的emote命名, 也可以帮已经有中文名的emote改名
HELP
        );
        return 1;
}


