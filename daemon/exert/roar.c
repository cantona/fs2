// roar.c 震昏 by Onion
//加入,只要玩家set no_roar_player,就可以避掉在同一格的玩家by bss
int exert(object me,object target)
{

        object *enemy;
        int force_cost = me->query("max_force")/4+30;
        int valid,i;

        string *ATT_MESSAGE=({
        "但$N似乎早有准备，硬受$n一击却恍然无事的样子。",
        "但$N只是受到一点惊吓便恢复正常。",
        "结果$N似乎被$n吓的目瞪口呆, 一时无法言语。",
        "$N觉得头昏眼花，分不清楚东南西北。",
        "结果$N被$n的喝声惊的跌坐在地上, 口吐白沫, 久久无法动作。",
        "[1;31m只见得$N双手摀耳, 惨叫一声, 昏厥了过去。[0m"
        });
        if( me->query("class") != "fighter" )
          return notify_fail("只有武者才能使出。\n");
        if( environment(me)->query("no_fight")==1 )
          return notify_fail("这里不准战斗。\n");
        if( force_cost > me->query("force") )
          return notify_fail("你的内力不够。\n");

        message_vision("\n[1;36m$N大喝一声, 将全身内力贯注丹田, 忽然间一股震耳欲聋的声音罔若平地焦雷般的半空爆开！[0m\n",me);
        me->add("force",-force_cost);
        enemy = all_inventory( environment(me) );
        for( i=0; i<sizeof(enemy); i++ )
        if( enemy[i]->is_character() && !enemy[i]->is_corpse() && living(enemy[i]) &&
            !enemy[i]->query_temp("roared") && !enemy[i]->query("no_kill") && enemy[i]!=me &&
            !in_edit(enemy[i]) && !in_input(enemy[i]) && !enemy[i]->query_temp("netdead") &&
  !wizardp(enemy[i]) && !enemy[i]->query("horse"))
        {
// 加入 对 16岁以下的人 roar无效 by anmy
        if(!(me->query("env/no_roar_player") && userp(enemy[i]))){
        if(enemy[i]->query("age")>=16)
        {
                if( me->query("max_force") > enemy[i]->query("max_force") )
                        valid=random(sizeof(ATT_MESSAGE)-1)+1;
                else
                        valid=random(sizeof(ATT_MESSAGE)-1);
                message_vision("[36m"+ATT_MESSAGE[valid]+"[0m\n",enemy[i],me);
                if( valid == sizeof(ATT_MESSAGE)-1 )
                        enemy[i]->unconcious();
                else
                {
                        enemy[i]->kill_ob(me);
                        me->kill_ob(enemy[i]);
                        enemy[i]->start_busy(valid);
                        enemy[i]->receive_damage("kee", force_cost/4);
                        COMBAT_D->report_status(enemy[i],1);
                }
                if(enemy[i])
                enemy[i]->set_temp("roared",1);
        }
        }
        }
        return 1;
}
