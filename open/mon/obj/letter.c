inherit ITEM;
#include <ansi.h>

void create()
{
    set_name("破损的信笺",({"break-letter","letter"}));
    set("long","
一封有点破损的信笺，你可以将它打开(apart)来看看...
        \n");
    set("unit","封");
    set("value",100);
    set("no_give",1);
    set("no_drop",1);
    set("no_put",1);
    set("no_sac",1);
    set("no_get",1);
    set("no_steal",1);
    set("no_auc",1);
    set_weight(20);
    setup();
}

void init()
{
        add_action("apa_letter","apart");
}

int apa_letter()
{
        object me = this_player();
        object ob = this_object();
        
        if(me->query_temp("icestorm/ice_spell")==7)
        {
                write("你拆开了信笺，拿出了里面的信，缓缓的唸了出来...\n");
                write(HIW"
你唸道：有缘人啊...贫道早知道会有这么一天...\n
　　　　虽然贫道不认识你，但想必你应该是陆清风那小子的什么人吧...\n
　　　　唉～其实贫道并不是故意要冰封小蝶的，只是她太过于痴心...\n
　　　　竟然不顾一切一心一意的要等到陆小子来接她下山...\n
　　　　贫道只好出此下策，免得她遭遇不幸，想来也真是太委屈她了...\n
　　　　只是...万万没想到来不及将她复原，贫道就将在此长眠了...\n
　　　　于是只好提笔写下此书，只望有人能再机缘中寻得此处，救出小蝶...\n
　　　　有缘人啊...既然你有能力寻得这个石穴，想来法力也是不弱...\n
　　　　你就好好的修习我所遗下的‘冰封秘咒’，等到你有了一定的功力...\n
　　　　便可以破冰救出受冰封之苦小蝶了...\n
　　　　　　　　　　　　　　　　　　　　　　　　　　　　灵韵师太绝笔...\n
"NOR);
                me->delete_temp("icestorm/ice_spell");
                me->set("get_book",1);
                return 1;
        }
}

