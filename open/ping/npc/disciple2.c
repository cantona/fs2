#include </open/open.h>
inherit NPC;
void create()
{
        set_name("段家第十一代弟子",({"disciple"}));
         set("long","这是一名精壮的汉子, 正在和同伴练习六脉神剑的功夫。\n");
        set("gender","男性");
        set("class","scholar");
        set("combat_exp", 30000);
        set("attitude","peaceful");
        set("age",23);
        set("force",300);
        set("max_force",300);
        set_skill("force",30);
        set_skill("unarmed",40);
        set_skill("sunforce",30);
        set_skill("linpo-steps",40);
        set_skill("six-fingers",40);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("unarmed","six-fingers");
        map_skill("parry","six-fingers");
        set_temp("apply/dodge",30);
        setup();
        add_money("silver",20);
}
