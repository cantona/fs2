// made by ccat
// obs要我改的喔...
// 经验值高于30万的不能使用,经验值高于100万的mob照不出来&不能照玩家...by nike
inherit ITEM;
void create()
{
        set_name("水晶宝镜",({"mirror"}) );
        set_weight(1000);
        if(clonep())
        set_default_object(__FILE__);
        else
        {
                set("long","以东海海底水晶所制的宝镜,可以窥视他人的秘密.(showexp ID)");
                set("unit","件");
                set("value", 1000);
                set("material","steel");
        }
}
void init()
{
        add_action("do_show","showexp");
}
int do_show(string str)
{
        object who, me = this_player();
        int exp,kee;
        who = present(lower_case(str), environment(me));
        exp = who->query("combat_exp");
		kee = who->query("kee");

        if(!str) return notify_fail("水晶宝镜对你说 : 主人！你要照谁ㄚ？\n");
        if(!who) return notify_fail("水晶宝镜对你说 : 主人！此地没有这个生物！\n");
        if(who == me)
                return notify_fail("水晶宝镜对你说 : 主人！干麻照你自己咧？\n");
        if(!who->is_character() || who->is_corpse())
                return notify_fail("水晶宝镜对你说 : 主人！那并不是活物。\n");
        if(!wizardp(me))
         if(exp > 1000000)
           return notify_fail("水晶宝镜对你说 : 主人！此生物经验值过高,照不出来！\n");
        message_vision("$N拿出水晶宝镜往$n身上照了照.\n\n",me,who);
        printf("水晶宝镜对你说 : 主人！此生物的经验值为%d,气血为%d\n",exp,kee);
        return 1;  
}

