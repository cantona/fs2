#include <ansi.h>
#include <mudlib.h>
inherit NPC;
void create() {
set_name(HIM"驒騱\驹"NOR, ({"twosee horse" , "horse"}));
set("title", "上古神马");
set("long","
相传牠为上古时的一种野兽，后来被人在云南一带所发现，带回中原
饲养后，发现其习性与马极像，便将牠与马并为一种。\n");
set("str",40);
set("cor",40);
set("cps",40);
set("max_force",3000);
set("force",3000);
set("max_gin",5000);
set("max_kee",5000);
set("max_sen",5000);
        set("age", 30);
        set("horse",1);
        set("race", "野兽");
        set("gender", "雄性");
        set("combat_exp", 500000);
        set("attitude", "peaceful");
        set("score",10000000);
        set("gold", 30);
        set("exp", 80000);
        set_skill("parry", 80);
        set_skill("move", 80);
        set_skill("dodge", 80);
        set_skill("unarmed", 80);
        set("limbs",({"马头","马脚","马腿","马背","马腹"}));
        set("verbs",({"bite","claw"}));
        set_temp("apply/armor",100);
        set_temp("apply/defense",100);
        set_temp("apply/damage",100);
        set_temp("apply/attack",100);
        setup();
}

void init() {
        add_action("do_ride","ride");
        add_action("do_dismount","dismount");
        add_action("do_full","addforce");
}

int do_ride(string str) {
        object me,horse;
        me = this_player();
        horse = this_object();
        if((str != "horse") && (str != horse->query("id")))
           return notify_fail("你想骑什么？\n");
       if(me->query("class")!="blademan"&&me->query("class")!="marksman")
        return notify_fail("你不是刀客，所以不能骑马。\n");
       if(horse->query("horse")!=1)
       return notify_fail("这不是马不能骑唷！\n");
   if(me->query_temp("marks/ascend"))
return notify_fail("有骑马了还想骑，想被 K 呀。\n");

        if(me->query_skill("riding", 1) < 30)
           return notify_fail("你的骑术不够，无法驾驭牠。\n");
        if(me->query("id") != horse->query_temp("my_boss")) {
message_vision("$N被"+horse->query("name")+"狠狠的踢了一脚，似乎受了点伤！\n",me);
           me->add("kee", -50);
           return 1;
        }
        if(me->query_temp("is_riding"))
           return notify_fail("你已经骑在马上了。\n");
message_vision("$N一个翻身，已骑在"+horse->query("name")+"的背上！\n",me);
        me->set_temp("is_riding", 1);
if(me->query("family/family_name")=="魔刀门" ||
   me->query("family/family_name")=="魔刀莫测") {
        me->add_temp("apply/attack", 15);
        me->add_temp("apply/defense",15);
        me->add_temp("apply/damage",15);
        me->add_temp("apply/armor", 15);
        me->add_temp("apply/parry",15);
        me->add_temp("apply/dodge", 15);
        me->add_temp("apply/move", 30); } else {
        me->add_temp("apply/attack", 15);
        me->add_temp("apply/parry",15);
        me->add_temp("apply/defense",15);
        me->add_temp("apply/damage",15);
        me->add_temp("apply/armor", 15); }
	me->set_temp("ride_name",me->name()+"骑在一匹"+horse->name()+"上");
return notify_fail("顿时，"+horse->query("name")+"仰天长鸣一声！人马合一，你的力量增加了不少！\n");
}

int do_dismount() {
        object me,horse;
        me = this_player();
        horse = this_object();
        if(!me->query_temp("is_riding"))
           return notify_fail("你现在并没有骑马！\n");
        if(me->query("id") != horse->query_temp("my_boss"))
           return notify_fail("这匹马不是你的座骑！\n");
        me->delete_temp("is_riding");
if(me->query("family/family_name")=="魔刀门" ||
   me->query("family/family_name")=="魔刀莫测") {
        me->add_temp("apply/attack", -15);
        me->add_temp("apply/parry",-15);
        me->add_temp("apply/defense",-15);
        me->add_temp("apply/damage",-15);
        me->add_temp("apply/armor", -15);
        me->add_temp("apply/dodge", -15);
        me->add_temp("apply/move", -30); } else {
        me->add_temp("apply/attack", -15);
        me->add_temp("apply/defense",-15);
        me->add_temp("apply/parry",-15);
        me->add_temp("apply/damage",-15);
        me->add_temp("apply/armor", -15); }
	me->delete_temp("ride_name");
        message_vision(HIW"$N一个翻身下了马来！\n"NOR,me);
        return 1;
}

int do_full() {
        object me;
        me = this_player();
	if(!me->query_temp("is_riding"))
        return notify_fail("你没有骑马唷。\n");
        if(me->query("max_force") == 0)
           return notify_fail("你并没有内力！\n");
        if(me->query("force") >= me->query("max_force"))
           return notify_fail("你的内力已满！\n");
        me->add("force", me->query("max_force")/20);
        return notify_fail("你的内力增加了！\n");
}

void die() {
        object me;
        me = find_living((string)this_object()->query_temp("my_boss"));
	if(me->query_temp("is_riding")) {
if(me->query("family/family_name")=="魔刀门" ||
   me->query("family/family_name")=="魔刀莫测") {
           me->add_temp("apply/attack", -15);
           me->add_temp("apply/parry",-15);
           me->add_temp("apply/defense",-15);
           me->add_temp("apply/damage",-15);
           me->add_temp("apply/armor", -15);
           me->add_temp("apply/dodge", -15);
           me->add_temp("apply/move", -30);
	} else {
        me->add_temp("apply/attack", -15);
        me->add_temp("apply/defense",-15);
        me->add_temp("apply/parry",-15);
        me->add_temp("apply/damage",-15);
        me->add_temp("apply/armor", -15); } }
        me->delete_temp("ride_name");
        me->delete_temp("horse");
        me->delete_temp("is_riding");
        me->delete_temp("have_horse");
	destruct(this_object());
}

int accept_fight(object me) {
        return notify_fail("这是别人的财产，你杀不得！\n");
}

int accept_kill(object me) {
        return notify_fail("这是别人的财产，你杀不得！\n");
}
void heart_beat()
{
 object env,mob,*enemy,target;
 int i;
 mob = this_object();
 env = environment(mob);
if( random(100) > 90)
 {
    enemy=mob->query_enemy();
    if(i=sizeof(enemy)) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
message_vision(HIY"
突然间，驒騱\驹像发狂似的向$N冲撞而来\n"+
"$N闪避不及，被撞个四脚朝天，鲜血直吐\n"NOR,target);
target->receive_damage("kee",150,mob);
      target->start_busy(1);
      COMBAT_D->report_status(target,1);
    }
 }
}
   ::heart_beat();
}
