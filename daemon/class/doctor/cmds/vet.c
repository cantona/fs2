#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int report=0;
int vet(object me);
int main(object me, string arg)
{
    object ob, coco;
    int sk, sk2, mk, tk, mg, tg, ms, ts, amount;
    string str, name, id;
    id = me->query("id");
    sk = (int)me->query_skill("cure",1);
    sk2 = (int)me->query_skill("godcure",1);
    
    if(!me) return 1;
    if(!arg) return notify_fail("指令格式：cmd vet <id>\n");
    if(environment(me)->query("no_kill") == 1)
    return notify_fail("此地不适合医生看诊唷！\n");
    if(arg == id) return notify_fail("你想要自己帮自己看诊？\n");
    if(me->query("family/family_name") != "银针门" && !wizardp(me))
    return notify_fail("你不是个医生，怎么能帮人看诊？\n");
    if(sk < 120) return notify_fail("你的医术不够，尚无资格帮人看诊！\n");
    if(sk2 < 100) return notify_fail("你的华佗医术不够，尚无资格帮人看诊！\n");
    if(!me->query("doctor/vet")) return notify_fail("你还没有经过华佗的认证唷！n");
    if(me->query("gin") < 50) return notify_fail("你的精力不足，没有办法帮人看诊！\n");
    if(me->query("sen") < 50) return notify_fail("你的神瞑不足，没有办法帮人看诊！\n");
    if(me->is_fighting() || me->is_busy()) return notify_fail("你还是先把手边的事忙完吧！\n");
    arg = lower_case(arg);
    ob = present(arg, environment(me));
    if(!objectp(ob)) return notify_fail("你想要看诊哪位病人啊？\n");
    if(!ob->is_character()) return notify_fail("你只能帮人看诊好不好！\n");
    if(ob->is_corpse()) return notify_fail("现在才要帮他看诊疗...太迟了些吧？\n");
    if(ob->query("no_kill")) return notify_fail("他看起来似乎不需要接受看诊的样子！\n");
    if(ob->query("no_askgod")) return notify_fail("他看起来似乎不需要接受看诊的样子！\n");
    if(ob->query_temp("netdead")) return notify_fail("他离开了这个世界，因此无法帮他看诊！\n");
    if(ob->query_temp("for_vet") == 1) return notify_fail("你想二次看诊？难道你要推翻自己的看诊结果？\n");
    
    mk = (int)ob->query("max_kee");
    tk = (int)ob->query("max_kee");
    mg = (int)ob->query("max_gin");
    tg = (int)ob->query("gin");
    ms = (int)ob->query("max_sen");
    ts = (int)ob->query("sen");
    name = ob->query("name");
    
    switch(random(12))
    {
    case 0:
        report = 1;
        str = YEL"嗯..."+name+"看来只是一点小小的伤风感冒，喝点水休息一会就好了！\n"NOR;
        ob->add("kee",-(random(50)+50));
        break;
    case 1:
        str = HIY"喔～"+name+"的肠胃相当不好唷！要注意少吃点刺激性的食物哪！\n"NOR;
        ob->set("food",-2);
        ob->set("water",-2);
        break;
    case 2:
        str = RED"天呀！"+name+"的心肝脾肺肾全烂光了，看来还是回家准备料理后事吧！\n
\n"HIB"没想到"+name+"闻言，居然「咚”的一声，晕死过去了！\n"NOR;
        ob->unconcious();
        ob->set("gin",mg);
        ob->set("kee",mk);
        ob->set("sen",ms);
        break;
    case 3:
        str = HIC"唷喝！"+name+"的脉像四平八稳，毫不紊乱，身强体健，没有瑕疵，不错呐！\n"NOR;
        break;
    case 4:
        str = WHT"哎呀！"+name+"面无血色，手脚冰冷，看来是阴阳不合，气血失调唷！\n"NOR;
        ob->add("kee",-random(sk));
        ob->apply_condition("ff_poison",(int)sk/20);
        break;
    case 5:
        str = HIM"嘿嘿！"+name+"脸泛潮红，目露色光，看来是欲火高涨，寂寞难耐哪！\n"NOR;
        ob->apply_condition("spring",(int)sk/20);
        break;
    case 6:
        str = CYN"嗯..."+name+"额冒虚汗，全身无力，看来是肝弱胆衰，虚火上升！\n"NOR;
        ob->add("gin",-(random(50)+50));
        ob->add("kee",-(random(50)+50));
        ob->add("sen",-(random(50)+50));
    case 7:
        str = MAG"不得了！"+name+"脸色泛青，嘴唇发紫，一看就知道是被蛇咬伤，中了蛇毒唷！\n"NOR;
        ob->add("kee",-random(sk));
        ob->apply_condition("snake_poison",(int)sk/20);
        break;
    case 8:
        str = HIR"ㄟ..."+name+"额头发烫，头晕目眩，想来必是日照过多，一不小心就中暑了！\n"NOR;
        ob->add("kee",-random(sk));
        ob->apply_condition("burn",(int)sk/20);
        break;
    case 9:
        str = HIB"咿！"+name+"全身发冷，不停颤抖，推断应是体湿吹风，受了风寒，无啥大碍也！\n"NOR;
        ob->add("kee",-random(sk));
        ob->apply_condition("cold",(int)sk/20);
        break;
    case 10:
        str = GRN"去..."+name+"看来不过就只是酒喝太多，有点酒后微醺，神智不清而已！\n"NOR;
        ob->apply_condition("drunk",(int)sk/20);
        break;
    case 11:
        str = HIG"啧啧！"+name+"的身体居然健壮如牛，毫无病痛，真是恭喜恭喜！\n"NOR;
        break;
        }
        message_vision(HIW"$N抓着$n的手，聚精会神的为$n把把脉，开始看诊了起来！\n\n"NOR,me, ob);
        message_vision(HIW"过了良久......\n\n$N终于开口说道："+str+"\n",me, ob);
        ob->set_temp("for_vet",1);
        amount = random(sk/3)+30;
        coco = new("/obj/money/silver");
        coco->add_amount(amount);
        coco->move(me);
        message_vision(HIW"$N帮$n看完诊，酌收费用"+CHINESE_D->chinese_number(amount)+"文钱！\n"NOR,me, ob);
        me->receive_damage("gin",50);
        me->receive_damage("sen",50);
        return 1;
}
int help(object me)
{
        write(@HELP
指令格式：cmd vet <id> || 限医生使用
指令说明：
　　　　医生应本着仁民爱物的精神，多使用此指令来替人
　　　　进行诊疗，正是所谓「及早发现及早治疗”咩！
HELP);
        return 1;
}

