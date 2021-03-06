inherit ITEM;
#include <ansi.h>

void create()
{
    set_name("女子雕像",({"statue"}));
    set("long","
一尊栩栩如生的女子雕像，从雕像的脸上，你可以感受到一种期待和盼望的神情
，似乎是在等待他的情郎能早日来与她相会，但再怎么盼却也盼不到他的来到，
你心中不禁同情心大发，一时突然想到说不定你可以用法术(cast)来召唤出她的
灵魂来...\n");
    set("unit","尊");
    set("value",100);
    set("no_get",1);
    set("no_sac",1);
    set("no_auc",1);
    set_weight(500000);
    setup();
}
void init()
{
        add_action("do_cast","cast");
        add_action("do_cast","co");
        add_action("do_cast","con");
        add_action("do_cast","conj");
        add_action("do_cast","conju");
        add_action("do_cast","conjur");
        add_action("do_cast","conjure");
}
int do_cast(string arg)
{
    object me = this_player();
        object ob = this_object();
        object fly = new("/open/mon/obj/soul");

    if(me->query_temp("icestorm/lovestory")==3
    && arg == "invocation on statue") {
        message_vision(HIW"$N喃喃地念了几句咒语。"HIC"\n
一阵清风吹过，"HIM"蝶魂"HIC"乘云缓缓从天而降。\n\n",me, ob);
        fly->move(environment(me));
        me->delete_temp("icestorm/lovestory");
        me->set_temp("icestorm/ice_spell",1);
        return 1;
    }
    else if(me->query("get_icestorm")==1
    && arg == "icestorm on statue") {
        message_vision("$N施展出刚习得的【冰雪风暴】，顿时一阵天摇地动，\n
只见瑞雪奏降，祥风清拂，一团白雾笼罩了雕像之后，随之出现一名美丽的少妇...\n\n",me);
        message_vision("少妇向$N说道：多谢救命之恩，奴家当以毕身之功力来协助$N...\n
说完便将双掌置于$N的天灵盖\，缓缓的输入真气...\n
$N只感到说不出的受用，张口欲言谢，却吐不出半个字来...\n
突然间，少妇将手收回，说道：奴家已助$N成就【冰雪风暴】之顶级功力，盼$N用于正途，就此告辞！\n\n
一阵白烟飘然而至，完全笼罩住少妇之后，又渐渐散去，那少妇已不知去向何方...\n"NOR,me);
        me->set("allow_icestorm",1);
        me->delete("get_icestorm");
        destruct(ob);
        return 1;
    }
    else return notify_fail("指令格式：cast <法术> [on <目标>]\n");
}
