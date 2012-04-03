inherit F_CLEAN_UP;

int main(object me,string arg)
{
        string str,onoff,name,reason;
        object ob;
        if(!arg||arg=="") return notify_fail("你要让谁闭嘴或恢复原状?\n");
  if(sscanf(arg,"%s %s",str,onoff)!=2)
                return notify_fail("指令格式: shutup <target> <on/off>\n");
        if(!ob=find_player(str)) return notify_fail("没有这个人喔.\n");
if(ob==me) return notify_fail("自己买块胶布贴起来吧..\n");
        if(onoff!="on"&&onoff!="off")
                return notify_fail("指令格式: shutup <target> <on/off>\n");
        if(wiz_level(me)<=wiz_level(ob))
return notify_fail("叫老大闭嘴?.疯了吗????.\n");
        if(onoff=="on") {
                ob->set("shutup",onoff);
                write("你取消了"+ob->name()+"公开频道的权利.\n");
log_file("static/SHUTUP", sprintf("[%s] %s shutup <%s> .\n",
ctime(time())[0..15], geteuid(this_player(1)),ob->query("id")));
                return 1;
     }
        ob->delete("shutup");
        write("你开放"+ob->name()+"公开频道的权利.\n");
log_file("static/SHUTUPO", sprintf("[%s] %s shutup <%s> off.\n",
ctime(time())[0..15], geteuid(this_player(1)),ob->query("id")));
        return 1;
}
int help(object me)
{
        write(@HELP
指令格式: shutup <target> <on/off>

这项指令可以令一个玩家失去使用频道的权利.
shutup <target> on 时, 代表关闭对方的频道, 也就是不让对方使用频道.
shutup <target> off 则是恢复原状.
HELP);
        return 1;
}

