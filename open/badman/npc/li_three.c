#include "/open/open.h"
inherit NPC;
void do_sword_book();
void create()
{
        set_name("李三", ({ "li three","li","three" }) );
        set("family/family_name","恶人谷");
        set("class","bandit");
        set("gender", "男性" );
        set("age", 38);
        set("long",
"一脸贼头贼脑的样子，见你走来忙将某物
藏于身后，见他腰间佩带着一把名剑，看
来是把宝剑喔，忍不住想问他一问。\n");
        set("combat_exp",2500000);
        set("max_kee",7500);
        set("kee",7500);
        set("max_sen",1500);
        set("sen",1500);
        set("max_gin",1500);
        set("gin",1500); 
        set("max_force",3000);
        set("force",6000);
        set("force_factor",10);
        set("bellicosity",3000);
        set("title","妙手空空 ");
        set_skill("parry",100);
        set_skill("dodge",100);
        set_skill("sword",100);
        set_skill("badsword",100);
        set_skill("ghost-steps",100);
        set_skill("force",120);
        set_skill("badforce",200);
        map_skill("dodge","ghost-steps");
        map_skill("force","badforce");
        map_skill("sword","badsword");
        map_skill("parry","badsword");
        set_temp("apply/attack",20);
        set_temp("apply/armor",20);
        set_temp("apply/dodge",20); 
        set("inquiry",([
"宝剑" : "这是我从江南四侠处偷来的，可是很有价值呢！",
"偷来" : "呵～我偷的技术可是很高明的喔，也因此才会被人追杀而躲入谷内",
"追杀" : "哼！等我练成一项武学后，就是我出谷时了！",
"武学" : "怎可跟你透露呢，我要练功了，滚吧～",
"魔日剑法" : "魔日剑法？那不是秦云的拿手绝技吗？你怎会问我这问题呢？",
"魔日剑谱" : (: do_sword_book :),
]));
        setup();
        carry_object("/open/gsword/obj/sword.c")->wield();
        carry_object("/u/k/know/plan/sword.c");
        carry_object("/u/k/know/plan/book.c");
}
void do_sword_book()
{
object me=this_player();
command("think "+me->query("id"));
command("say 既然你已查到我头上来了，休怪我无情了！");
command("kill "+me->query("id"));
}
int accept_kill(object who)
{   
    command("say 纳命来吧！");
    command("wield all");
    return 1;
}
void die()
{
   object me;
   me= this_object()->query_temp("last_damage_from");
   if( me&& userp(me) ) 
   {
   me->set_temp("get_badsword_book",1);
   }
   ::die() ;
}
