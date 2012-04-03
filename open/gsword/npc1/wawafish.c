#include <ansi.h>
inherit NPC;
void create()
{
set_name("娃娃鱼", ({ "wawafish", "fish" }) );
set("race", "野兽");
set("age", 30);
set("long", "他浑身散发出一道金色光芒,对你这个不速之客感到有趣。\n");
set("attitude", "peaceful");
set("str", 33);
set("cor", 30);
set("limbs", ({ "头部", "身体", "鱼尾" }) );
set("verbs", ({ "bite" }) );
set("combat_exp", 100);
set("chat_chance", 6);
set("chat_msg", ({
   "ㄨㄚ......ㄨㄚ......"}) );
set_temp("apply/attack", 15);
set_temp("apply/damage", 6);
set_temp("apply/armor", 2);
setup();
}
void die()
{
   object winner = query_temp("last_damage_from");
if(winner->query("family/family_name")=="仙剑派" && winner->query("bloodsword")==1)
{
        tell_object(users(),HIM"\n\n
"HIC"郑士欣"HIW"叹道: 天意如此…众弟子严阵以待随时防备血魔入侵.\n\n"NOR);
winner->set("killyao",1);
}
::die();
}
