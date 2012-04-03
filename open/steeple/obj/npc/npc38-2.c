#include <ansi.h>
inherit NPC;
void create()
{
        set_name("仙剑双侠",({"sword1 man","man"}));
        set("long","魔龙塔守护者，由幻影系统copy。\n");
        set("gender","男性");
        set("combat_exp",12000000);
        set("sec_kee","god");
        set("attitude","heroism");
        set("get_sha_sp",1);
        set("max_s_kee",1000);
        set("s_kee",1000);
        set("title",HIW"～幻影～"NOR);
        set("age",60);
        set("class","swordsman");
        set("family/family_name","仙剑派");
        set("force",500000);
        set("max_gin",9000);
        set("max_kee",50000);
        set("max_sen",9000);
        set("clan_kill",1);
        set("bellicosity",3000);
        set("max_force",50000);
        set("force_factor",15);
        set("str",45);
        set("cor",45);
        set("mpower",1);
        set_skill("shasword", 120);
        set_skill("literate",120);
        set_skill("sha-steps",120);
        set_skill("dodge",120);
        set_skill("shaforce",120);
        set_skill("parry",120);
        set_skill("sword",120);
        set_skill("force",120);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        map_skill("force", "shaforce");
        map_skill("dodge", "sha-steps");
        set_temp("apply/defense",100);
        set_temp("apply/armor",100);
        setup();
       carry_object("/open/gsword/obj/silver_sword")->wield();
        add_money("gold", 20);
}
void heart_beat()
{
object me,room,*target;
int i,j;
me=this_object();
room=environment(me);
target=me->query_enemy(room);
if(i=sizeof(target)) {
if(random(100) > 50)
{
if(random(9) >= 5)
{
message_vision(HIY"仙剑双侠用剑气往你身上一划，顿时伤及见骨！\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-1800); }
   }
   else
   {
message_vision(HIC"仙剑双侠仰天一笑，瞬时内息稳固。\n"NOR,me);
if(random(9) >= 5) {
me->receive_curing("kee",2000);
me->receive_heal("kee",2000); }
    me->clear_condition();
   }
  }
}
  ::heart_beat();
  }
int accept_fight(object who)
{
 command("say 走开别烦我！\n");
 return 0;
}
int accept_kill(object who)
{
 who=this_player();
 command("kill "+who->query("id"));
 command("cmd god_kee");
 return 1;
}
int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"系统：战斗停止，$N回收中，。\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}
