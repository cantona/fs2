
inherit ITEM;
#include <ansi.h>

void create()
{
set_name(HIY"哨子"NOR,({ "come" }));
     set("long",
     "这是一个特制的哨子，可呼唤你的凤凰，呼唤时请用(come-sum)\n"
     "，要请凤凰回去时请(go-way)。\n");
     set("no_sell",1);     set("no_auc",1);     set("unit","个");
     set("save_obj",1);    set("call-in-Lbird","YES");
     setup();
}
void init()
{
     add_action("do_summon", "come-sum");
     add_action("do_home", "go-way");
}
int do_summon(string str, object me)
{
    object Lbird, env;

    seteuid(getuid());     me = this_player();     env = environment(me);
    if( me->query_temp("come-sum") )
    return notify_fail(GRN"<"HIG"恰吉"GRN">"HIC" 说道"CYN"："HIC"唉呀"CYN
    "～！"HIC"你真贪心"CYN"，"HIC"不都已经召出了一只凤凰了吗"CYN"？\n"NOR);
    if( !sizeof(me->query_mlists()) )
    return notify_fail(GRN"<"HIG"恰吉"GRN">"HIC" 说道"CYN"："HIC"哇咧"CYN
    "～"HIC"你连一只宠物都没有"CYN"，"HIC"更何况召唤凤凰"CYN"！\n"NOR);
    if( !str ) return notify_fail(GRN"<"HIG"恰吉"GRN">"HIC" 说道"CYN"："
    HIC"你要呼唤谁来"CYN"？"HIC"请(mlist)查询你的凤凰"CYN"！\n"NOR);
    if( !me->query_mlist(str) )
    return notify_fail(GRN"<"HIG"凤凰"GRN">"HIC" 说道"CYN"："HIC
    "你并没有养这种凤凰吧"CYN"？\n"NOR);
    if( file_size("/open/marksman/obj/"+str+".c") < 0
    &&  !find_object("open/marksman/obj/"+str) )
    return notify_fail(GRN"<"HIG"恰吉"GRN">"HIC" 说道"CYN"："HIC"嗯"CYN
    " ....."HIC"虽然你的确有养这只宠物"CYN"，"HIC"不过这种凤凰好像绝种了"
    CYN"！\n"HIC"你还是另请高明吧"CYN"！\n"NOR);
    Lbird = new("/open/marksman/obj/"+str);
    tell_room(env, HIY+me->name()+HIY"用哨子吹了一声口哨"YEL"，"HIY
    "只见天空突然裂出一个洞"YEL"，"HIY"有一个不明物体冲了过来"YEL"！！\n\n"NOR);
    if( me->is_fighting() ) me->start_busy(4); else me->start_busy(1);
    me->set_temp("come-sum","YES");
    Lbird->move(env);
    Lbird->set("level",me->query_mlist(str));
    Lbird->set("owner",me->query("id"));
    Lbird->set_leader(me);
    Lbird->set_skill("move",me->query_mlist(str));
    tell_room(env, HIY"转眼间风云变色"YEL"，"HIY"一只可爱的"
    +Lbird->name()+HIY"出现在你面前"YEL"。\n\n"NOR);
    write(GRN"<"HIG"恰吉"GRN">"HIC" 说道"CYN"："HIC"成功召出凤凰"CYN"！\n"HIW"Ok.\n"NOR);
    return 1;
}
int do_home(string str, object me)
{
    object Lbird, env;

    seteuid(getuid());
    me = this_player();
    env = environment(me);
    if( !str ) return notify_fail(GRN"<"HIG"恰吉"GRN">"HIC" 说道"CYN"："
    HIC"你要叫谁回家呢"CYN"？\n"NOR);
    if( !me->query_temp("come-sum") )
    return notify_fail(GRN"<"HIG"恰吉"GRN">"HIC" 说道"CYN"："HIC
    "你都还没有召出凤凰呢"CYN"！"HIC"要如何命令它回家"CYN"？\n"NOR);
    if( me->query_temp("is_rid") == "Lbird"
    &&  me->query_temp("rider/myself") )
    return notify_fail(GRN"<"HIG"恰吉"GRN">"HIC" 说道"CYN"："HIC
    "你还骑着你的凤凰喔"CYN"。\n"NOR);
    if( !objectp(Lbird = present(str, env)) )
    return notify_fail(GRN"<"HIG"宠物妖精"GRN">"HIC" 说道"CYN"："HIC
    "你的凤凰不见了说"CYN"！！\n"NOR);
    if( Lbird->query("owner") != me->query("id") )
    return notify_fail(GRN"<"HIG"恰吉"GRN">"HIC" 说道"CYN"："HIC
    "这不是你的凤凰吧"CYN"！"HIC"爽白烂呀"CYN"！\n"NOR);
    me->delete_temp("come-sum");
    tell_room(env, HIG+me->name()+HIG"轻声的跟"+Lbird->name()+HIG"说了一些话"
    GRN"，"HIG"只见凤凰展开翅膀，往天空飞去，转眼间不见了。"GRN"！\n"NOR);
    destruct(Lbird);
    return 1;

}
