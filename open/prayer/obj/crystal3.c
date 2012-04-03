//浑天水晶(第七层靛沧海心法)

inherit ITEM;

void create()
{
        set_name("[34m蓝水晶[0m", ({ "blue-crystal","crystal" }));
        set("title", "浑天心法之");
        set_weight(600);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "根");
          set("long","这是一根会发出[34m蓝色光芒的水晶, 里面刻有[36m浑天宝鉴第七层[34m靛沧海心法[0m的练功口诀。\n");
          set("value", 700);
          set("no_drop", 1);
          set("no_get", 1);
          set("no_sell", 1);
          set("no_auc", 1);
          set("no_give", 1);
          set("material", "gem");
          set("skill", ([
          "name" : "superforce",  // name of the skill
          "exp_required" :  900000,     // to learn this skill.
          "sen_cost" : 30,              // gin cost every time study this
          "difficulty" : 25,             // modify is gin_cost's (difficulty - int)*5%
          "max_skill":  110
          ]) );
        }
}

int valid_learn(object me)
{
        if(me->query("family/family_name")!="圣火教")
          return -1;
        return 1;
}
