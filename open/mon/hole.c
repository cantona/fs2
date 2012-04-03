#include <ansi.h>
inherit ROOM;

void create ()
{
        set ("short", "石穴");
        set ("long", @LONG
你移开雕像之后，走进了这个洞穴，发觉里头一点亮光都没有，
伸手不见五指，更不用谈要查看四周的环境了，当你正自摸黑搜索时
，不知不觉中好像踢到了什么东西，你心中不禁想着：要是能制造出
一点点光源就好了...
LONG);
        set("exits", ([
        "out"    : __DIR__"mon48",
]));
        setup();
}

void init()
{
        add_action("con_light","conjure");
        add_action("con_light","conjur");
        add_action("con_light","conju");
        add_action("con_light","conj");
        add_action("con_light","con");
        add_action("con_light","co");
}

int con_light(string arg)
{
        object me = this_player();
        object room = this_object();
        object ske = new("/open/mon/obj/skeleton");
        object fire = new("/daemon/class/taoist/gmagic/obj/lightfire");
        
        if(me->query_temp("icestorm/ice_spell")==5)
        {
        if(!arg || arg != "lightfire") return 0;
                message_vision("
$N两指一比，造出了一枚$n飘在空中。\n
$N用$n四处照了照，竟赫然发现角落有具披着道袍的骨骸...\n\n",me, fire);
                fire->move(me);
                ske->move(environment(me));
                me->set_temp("icestorm/ice_spell",6);
                return 1;
        }
}
