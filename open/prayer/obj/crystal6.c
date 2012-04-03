//浑天水晶(第十层玄宇宙心法)

inherit ITEM;

void create()
{
        set_name("[32m绿水晶[0m", ({ "green-crystal","crystal" }));
        set("title", "浑天心法之");
        set_weight(750);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "根");
          set("long","这是一根会泛出[32m淡绿光芒的水晶[0m, 里面刻有[36m浑天宝鉴第十层[32m玄宇宙心法[0m的练功口诀。\n");
          set("value", 800);
          set("material", "gem");
          set("no_drop", 1);
          set("no_get", 1);
          set("no_sell", 1);
          set("no_auc", 1);
          set("no_give", 1);
          set("skill", ([
          "name" : "superforce",  // name of the skill
          "exp_required" :  2400000,     // to learn this skill.
          "sen_cost" : 60,              // gin cost every time study this
          "difficulty" : 25,             // modify is gin_cost's (difficulty - int)*5%
          "max_skill":  250
          ]) );
        }
}

int valid_learn(object me)
{
        if(me->query("family/family_name")!="圣火教")
          return -1;
        return 1;
}
