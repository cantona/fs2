// X'mas gift by nike 12/5/2001
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(HIR"圣诞小袜袜"NOR, ({"X'mas sock","sock"}));
    set_weight(100);
    set("no_sell",1);
    set("no_give",1);
    set("no_put",1);
    set("no_auc",1);
    set("no_get",1);
    set("no_drop",1);
    set("unit","只");
    set("long",@LONG
一只圣诞老耐吉发的圣诞小袜袜，可以用<open_sock>来看看你得到啥礼物唷！
LONG);
}
void init()
{
    add_action("do_open", "open_sock");
}
int do_open(string arg)
{
        object me = this_player();
    object ob2, ob = this_object();
        int force = (int)me->query_skill("force",1);
        
        if(me->query("id") != ob->query("geter"))
                return notify_fail(HIR"耐吉小精灵质问你道：你怎么可以偷人家的小袜袜咧？\n"NOR);
        switch(random(7))
        {
        case 0:
                arg = HIW"珍珠十颗"NOR;
                ob2 = new("/obj/money/pearl")->set_amount(10);
                ob2->move(me);
                break;
        case 1:
                arg = HIR"替身二个"NOR;
                me->add("standby",1);
                break;
        case 2:
                arg = HIG"潜能十万点"NOR;
                me->add("potential",100000);
                break;
        case 3:
                arg = HIC"经验值五万点"NOR;
                me->add("combat_exp",50000);
                break;
        case 4:
                arg = HIB"铭谢惠顾一张"NOR;
                ob2 = new("/obj/gift/x'mas/obj/paper")->move(me);
                break;
        case 5:
                arg = HIM"评价一万点"NOR;
                me->add("score",10000);
                break;
        case 6:
                arg = HIM"基本内功二十级"NOR;
                me->set_skill("force",force+10);
                break;
        }
                message_vision(HIW"$N开心的打开小袜袜，发现里头原来是「"+arg+"”ㄚ！\n"NOR,me);
                me->set("gift/x'mas/get_gift",1);
                destruct(ob);
                return 1;
}

