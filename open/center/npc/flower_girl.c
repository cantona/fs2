#include <obj.h>
#include <ansi.h>
#include "/open/open.h"
 
inherit F_VENDOR;
static int reboot_time = 0;

string give_flower();

void create()
{
        set_name("卖花的小女孩", ({ "selling flower girl", "girl" }) );
        set("nickname",HIW"可怜没人爱"NOR);
        set("gender", "女性" );
        set("age", 16);
        set("long", @LONG
这是一位有着碧发蓝睛的卖鲜花的漂漂女孩，由于她受母亲之托, 所
以在此卖鲜花, 希望带给狂想的玩者一点小小心意。你也可以问她有
关赠品的事(ask girl about 赠品)

LONG);
        set("attitude", "friendly");
        set("rank_info/respect", "小妹妹");
        set("combat_exp",150000);

        set("vendor_goods", ({
            CENTER_OBJ"flower",
        }) );
        set("no_kill",1);

        set("inquiry",([
          "赠品":"嗯, 我这里有卖剩的一点鲜花, 你要的话我可以给你",
          "鲜花":(: give_flower :),
        ]));

        set("chat_msg", 5);
        set("chat_msg", ({
            "小女孩说道: 有人想要买鲜花送女友吗。\n",
        }) );

        set("greeting_msg", ({
            "小女孩说道: 快来买鲜花喔。\n",
        }) );
        setup();
}

string give_flower()
{
        object who, item;
        who = this_player();

        if( who->query("quests/happy") || who->query_temp("flower")==1 )
                return "你不是已经领了一束鲜花了吗？\n";
        else if( who->query_temp("鲜花")==2 ) {
                item = new("/open/center/obj/flower");
                item->move(who);
                message_vision("耶诞小女孩给$N一束鲜花。\n", who);
                who->set_temp("flower", 1);
                return"真是的,还好我还有备份！给你吧!\n";
        }
        else {
                item = new("/open/center/obj/flower");
                item->move(who);
                printf("小女孩给%s一个%s。\n",
                who->query("name"),item->short() );
                who->set_temp("flower", 1);
                return "祝你新年快乐啰 :P。\n";
        }
}
