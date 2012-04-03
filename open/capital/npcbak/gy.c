#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string answer_head()
{
 int head;
head=this_player()->query("head",1);
         return sprintf("你共有%d点战功点数。\n",head);
}
int head;
void create()
{
        object ob;
         set_name("李  唤",({"officer lee","officer","lee"}));
        set("long","他是专门给护国有功的战士授与奖励。 \n");
        set("gebder","男性");
         set("nickname",HIC"首席战情官"NOR);
        set("combat_exp",100);
          set("inquiry",([
             "战功":(: answer_head :)
        ]));
          set("list",([
        "雪莲丹": ([
                "local":"/open/gsword/obj/ff_pill",
                "head":2,
                "amount":500,
                "id":"force pill",
                       ]),
          "灵芝仙丹": ([
                  "local":"/open/gsword/obj/f_pill",
                  "head":3,
                  "amount":500,
                  "id":"super pill",
                        ]),
           "血影摧心": ([
                    "local":"/open/main/obj/unarmed-b",
                    "head":100,
                    "amount":1,
                    "id":"blood figring",
                           ]),
          "火鸟胫甲": ([
                  "local":"/open/main/obj/bird_legging",
                  "head":20,
                  "amount":10,
                  "id":"fire bird leggings",
                         ]),
          "赤麟肩甲": ([
                  "local":"/open/main/obj/armband",
                  "amount":8,
                    "head":30,
                  "id":"red chilin armband",
                         ]),
            "金蚕手套": ([
                    "local":"/open/main/obj/g_glove",
                    "amount":5,
                    "head":40,
                   "id":"gold gloves",
                          ]),
            "阎月披风": ([
                    "local":"/open/main/obj/m_cloak",
                    "amount":3,
                    "head":50,
                   "id":"dark moon cloak",
                          ]),
            "圣灵战甲": ([
                    "local":"/open/main/obj/plate",
                    "amount":1,
                    "head":100,
                   "id":"holy ghost plate",
                          ]),
            "青龙偃月刀": ([
                    "local":"/open/main/obj/dragon-moon",
                    "amount":1,
                    "head":100,
                   "id":"green dragon blade",
                          ]),
            "留香扇": ([
                    "local":"/open/main/obj/present-f",
                    "amount":1,
                    "head":100,
                   "id":"ancient fan",
                          ]),
]));
        setup();
}
void init()
{
        add_action("do_list","list");
        add_action("do_convert","convert");
}
int do_list(object me)
{
        string *name;
        int i;

        me=this_player();
        name = keys(query("list"));
        tell_object(this_player(),"目前所能换到的奖□ \n");
    tell_object(this_player()," ｛ 奖品 ｝ ｛ 所须战功点数 ｝\n");
        for(i=0;i<sizeof(name);i++)
tell_object(this_player(),sprintf("%10s%10d\n",name[i],query("list/"+name[i]+"/head")));
        return 1;
}
int do_convert(string weapon)
{
        object ob;
        if(this_player()->query("head")<=10)
{
          command("say 没功劳要啥奖，早点回去睡吧!\n");
                return 1;
}
        if(!query("list/"+weapon))
        {
                command("say 你想要什么赏赐?\n");
                return 1;
        }
        if(query("list/"+weapon+"/amount")<=0)
{
                command("say 这样东西现在缺货。\n");
                return 1;
}
 if (this_player()->query("head") < query("list/"+weapon+"/head") ) {
    sprintf("你共有%d点护国战功点数。\n", head);
    command("say 等你战功足够再来换吧！\n");
      return 1;
}
        ob=new(query("list/"+weapon+"/local"));
        ob->add_amount(1);
        add("list/"+weapon+"/amount",-1);
        this_player()->add("head",-query("list/"+weapon+"/head"));
            ob->move(this_player());
        ob->set("no_drop",1);
        ob->set("no_give",1);
        message_vision( "$N拿给$n所要的"+ob->name()+"\n",this_object(),this_player());
                return 1;
}
