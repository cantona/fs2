// 新增南方蛮族入主人间 war
#include <ansi.h>
inherit NPC;

string do_special_fight();
string do_special_perform1();

void create()
{
        set_name("秦啸天",({"wild blader","wild","blader"}));
        set("long","秦啸天，南方三霸之一，本是金刀门门主王元霸之师兄，二十年前因\n抢劫朝廷军营事迹败露而遭逐出师门，流放南方蛮夷之地，数十年来\n苦心锻炼刀法而有所大成，逐渐成为南蛮刀之霸主，一心只想着重回\n中原屠杀人间，以报流放南蛮数十年之苦。");
        set("gender","男性");
        set("class","blademan");
        set("nickname","南雄 - 刀霸");
        set("combat_exp",7000000);
        set("attitude","heroism");
        set("env/连击","YES");
        set("age",62);
        set("str", 99);
        set("cor", 99);
        set("int", 99);
        set("spi", 99);
        set("cps", 99);
        set("con", 99);
        set("kar", 99);
        set("max_gin", 40000);
        set("gin", 40000);
        set("max_kee", 150000);
        set("kee", 150000);
        set("max_sen", 40000);
        set("sen", 40000);
        set("max_atman", 35000);
        set("atman", 35000);
        set("max_mana", 35000);
        set("mana", 35000);
        set("max_force", 100000);
        set("force", 150000);
        set("functions/gold-dest/level",100);
        set("functions/fast-dest/level",100);
        set_skill("blade",120);
        set_skill("parry",120);
        set_skill("move",120);
        set_skill("dodge",120);
        set_skill("force",250);
        set_skill("magic",120);
        set_skill("spells",120);
        set_skill("riding",100);
        set_skill("gold-blade",100);
        set_skill("fast-blade",100);
        set_skill("sixforce",200);
        map_skill("blade","fast-blade");
        map_skill("parry","gold-blade");
        map_skill("force","sixforce");
        set_temp("roared", 1 );
        set_temp("apply/armor",100);
		set("random_move",200);
        set("force_factor",15);
        set("chat_chance_combat",80);
        set("chat_msg_combat",({
        (: do_special_perform1 :),
        }));
        setup();
		set("chat_chance",100);
            set("chat_msg",({
            (: random_move :),
	        }));
        create_family("金刀门",5,"门主");
        carry_object("/daemon/class/blademan/obj/gold-blade2")->wield();
        add_money("cash",100);
}

int accept_fight(object me,object who)
{
    who=this_player();
    kill_ob(who);
command("say "HIC"哈哈哈，就让你见识什么是刀者之魂吧！！！\n\n\n\n    "HIR"   ╭─╮            ╔                            ▁▂▃▄▅▆▇◤\n"HIR"       │  ╔╗︽︽︽︽︽║▆▆▆▆▆▆▆▆▆▆▆▆▇███████◤\n"HIR"       │  ╚╝︾︾︾︾︾║███████████████████◤\n"HIR"       ╰╮              ╚\n"HIR"         〨\n"HIR"         ⊙\n"HIR"         ╚══〓〓〓\n"NOR);
    who->start_busy(1);
    return 1;
}

int accept_kill(object who)
{
    who=this_player();
    kill_ob(who);
command("say "HIC"哈哈哈，就让你见识什么是刀者之魂吧！！！\n\n\n\n    "HIR"   ╭─╮            ╔                            ▁▂▃▄▅▆▇◤\n"HIR"       │  ╔╗︽︽︽︽︽║▆▆▆▆▆▆▆▆▆▆▆▆▇███████◤\n"HIR"       │  ╚╝︾︾︾︾︾║███████████████████◤\n"HIR"       ╰╮              ╚\n"HIR"         〨\n"HIR"         ⊙\n"HIR"         ╚══〓〓〓\n"NOR);
    who->start_busy(1);
    return 1;
}

string do_special_perform1()
{
        if( query_skill_mapped("blade") == "fast-blade" ) {
            command("perform blade.fast-dest");
            map_skill("blade", "gold-blade");
        }
        else if( query_skill_mapped("blade") == "gold-blade" ) { 
            command("perform blade.gold-dest");
            map_skill("blade", "fast-blade");
        }
        command("perform blade.gold-dest");
        return "";
}

void heart_beat()
{
 object env,mob,*enemy;
 int i,j,damage;
 string msg;
 j=random(100);
 mob = this_object();
 if(!mob) return ;
 if(!environment(mob)) return ;
 env = environment(mob);
 if( j < 40 && is_fighting())
 {
    enemy=mob->query_enemy();
	for(i=0;i<sizeof(enemy);i++){
	if(!enemy[i]) continue;
    if(environment(mob) == environment(enemy[i]))
    {
        message_vision(HIY"\n$N随着体内杀气无限提升，横刀高喊："HIW"‘  "HIM"魔 威 天 下  "HIW"～  "HIY"刀 "HIB"霸 人 间  "HIW"’\n\n        "HIW"《  "HIR"魔 "HIW"． "HIR"道 "HIW"． "HIR"极 "HIW"． "HIR"杀 "HIW"． "HIR"之   "HIY"狂   龙   "HIC"七   斩   诀  "HIW"》\n\n"NOR,mob,enemy[i]);

        {
        damage = random(300)+100;
                msg = HIB"$N体内战意源源不绝倾泄而出"HIW"《"HIY"狂龙"HIC"七斩诀"HIW"》"HIB"壹式"HIW"★"HIY"天刀"HIC"惊流痕"HIW"★"HIB"，$n"HIB"被无限刀意砍得体无完肤！\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i],0);
                }
                else {
                        msg +="( "HIW"$n出招似有若无，身影疾退数步，在无形之中将此招一一闪过。 "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

        {
        damage = random(300)+100;
                msg = HIB"$N体内战意源源不绝倾泄而出"HIW"《"HIY"狂龙"HIC"七斩诀"HIW"》"HIB"贰式"HIW"★"HIM"雷刀"HIR"破霜阙"HIW"★"HIB"，$n"HIB"被无限刀意砍得体无完肤！\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i]);

                }
                else {
                        msg +="( "HIW"$n出招似有若无，身影疾退数步，在无形之中将此招一一闪过。 "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

        {
        damage = random(300)+100;

                msg = HIB"$N体内战意源源不绝倾泄而出"HIW"《"HIY"狂龙"HIC"七斩诀"HIW"》"HIB"参式"HIW"★"HIY"地刀"HIG"震山河"HIW"★"HIB"，$n"HIB"被无限刀意砍得体无完肤！\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i]);
}
             else {
                        msg +="( "HIW"$n出招似有若无，身影疾退数步，在无形之中将此招一一闪过。 "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

        {
        damage = random(300)+100;

                msg = HIB"$N体内战意源源不绝倾泄而出"HIW"《"HIY"狂龙"HIC"七斩诀"HIW"》"HIB"肆式"HIW"★"HIR"火刀"HIY"焚混沌"HIW"★"HIB"，$n"HIB"被无限刀意砍得体无完肤！\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i]);
                }
                else {
                        msg +="( "HIW"$n出招似有若无，身影疾退数步，在无形之中将此招一一闪过。 "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

        {
      damage = random(300)+100;
                msg = HIB"$N体内战意源源不绝倾泄而出"HIW"《"HIY"狂龙"HIC"七斩诀"HIW"》"HIB"伍式"HIW"★"HIG"风刀"HIR"灭星辰"HIW"★"HIB"，$n"HIB"被无限刀意砍得体无完肤！\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i]);
                }
                else {
                        msg +="( "HIW"$n出招似有若无，身影疾退数步，在无形之中将此招一一闪过。 "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

        {
      damage = random(300)+100;

                msg = HIB"$N体内战意源源不绝倾泄而出"HIW"《"HIY"狂龙"HIC"七斩诀"HIW"》"HIB"陆式"HIW"★"HIM"雨刀"HIG"淋寰宇"HIW"★"HIB"，$n"HIB"被无限刀意砍得体无完肤！\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i]);
                }
                else {
                        msg +="( "HIW"$n出招似有若无，身影疾退数步，在无形之中将此招一一闪过。 "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

        {
        damage = random(300)+100;

                msg = HIB"$N体内战意源源不绝倾泄而出"HIW"《"HIY"狂龙"HIC"七斩诀"HIW"》"HIB"柒式"HIW"★"HIC"雪刀"HIM"冰千里"HIW"★"HIB"，$n"HIB"被无限刀意砍得体无完肤！\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->apply_condition("ad-blade",random(5)+5);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i]);
                }

                else {
                        msg +="( "HIW"$n出招似有若无，身影疾退数步，在无形之中将此招一一闪过。 "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

    }
 }
 }

    if( 70 < j && mob -> query("kee") < mob->query("max_kee")*0.6 )
    {
    message_vision( HIY"\n秦啸天运气丹田，瞬间刀中窜出无数阴魂，身上的伤口也渐渐愈合。\n"NOR, mob);
    mob->delete_busy();
    mob->clear_condition();
    mob->receive_heal("kee",1000);
    mob->receive_curing("kee",1000);
    mob->receive_heal("gin",800);
    mob->receive_curing("gin",800);
    mob->receive_heal("sen",800);
    mob->receive_curing("sen",800);

    }

    if( 40< j < 70 && is_fighting() ) 
	{
	enemy=mob->query_enemy();
	for(i=0;i<sizeof(enemy);i++){
	if(!enemy[i]) continue;
    if(environment(mob) == environment(enemy[i]))
	{
    message_vision( HIR"\n\n$N目露凶光，大喝一声 "HIW"‘  "HIY"天  雷  刀  "HIW"’\n\n"HIW"瞬间天际闪过数道雷霆从天而降击中$N\n\n"HIG"$N身上散发出阵阵绿光，刀法如漫天飞雪般的将你团团围住。\n\n"NOR, mob );
    enemy[i]->receive_damage("kee", 500 );
    enemy[i]->receive_damage("gin", 500 );
    enemy[i]->receive_damage("sen", 500 );
    enemy[i]->start_busy(1);
    COMBAT_D->report_status(enemy[i]);

    }
	}
	}

   set_heart_beat(1);
   ::heart_beat();

}

void die()
{
    object winner = query_temp("last_damage_from");
    string name = winner->query("name");
    string class1 = winner->query("family/family_name");
    if(!winner)
    {
    ::die();
    return ;
    }
    tell_object(users(),HIW"\n\n\n    "HIW"‘  "HIC"异 域 奇 缘    "HIY"横 刀 称 王 霸 群 雄 ！ \n\n             "HIG"乡 愁 离 情    "HIM"浩 瀚 星 海 恨 悠 悠 ！ "HIW"’\n\n\n"HIR"想我"HIC"南雄"HIM"刀霸"HIR"雄据南蛮数十载，如今败于"+HIC+class1+HIB"弟子"+HIY+name+HIR+"之手。\n"HIR"中原果真是卧虎藏龙，深藏不露，恨啊 ！！！\n\n\n"NOR);
      message_vision(HIY"\n"+winner->name()+"打死秦啸天得到五百点战功!!\n"NOR,winner);
      write_file("/log/get_warp",sprintf("%s(%s) 得到五百点战功于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  winner->add("war_score",500);
    ::die();
}
