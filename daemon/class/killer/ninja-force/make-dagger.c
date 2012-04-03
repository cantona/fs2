#include <ansi.h>
int maked(object me,int lv);
int perform(object me,object ob)
{
int lv;
me=this_player();
lv=me->query("functions/make-dagger/level");
if(me->query("force") < 500 )return notify_fail("你的内力不够, 休息一下再用吧!!\n");
if(me->query("darkforce/make-ken/exp") > 0 )return notify_fail("你并非以匕首系为主的忍者!!\n");
if(me->query("class") !="killer" ) return notify_fail("你的职业无法使用!!\n");
if(objectp(ob = present("evil dagger", me))) return notify_fail("你身上已经有一把魔气匕了!!\n");
if(me->is_fighting()) me->start_busy(1);
message_vision(HIB"$N凝聚体内内力转为魔气, 魔气渐渐在手中形成一把匕首!!\n"NOR,me);
me->add("force",-500 );
call_out("maked",2,me);
return 1;
}
int maked(object me,int lv)
{
object obj;
lv=me->query("functions/make-dagger/level");
message_vision(HIB"一把泛着蓝光的魔气匕已经在$N手中形成!!\n"NOR,me);
obj=new("/daemon/class/killer/ninja-force/evil_dag.c");
if ( lv >= 0 && lv < 25) 
{
obj->set("name",HIB"(蓝光)"HIC"魔气匕"NOR"--"HIW"冰牙"NOR);
obj->set("weapon_prop/dagger",5);
obj->set("weapon_prop/dodge",10);
obj->set("weapon_prop/parry",10);
obj->set("weapon_prop/damage",10);
obj->set("weapon_prop/attack",10);       
}
if (lv >= 25 && lv < 50) 
{
obj->set("name",HIB"(蓝光)"HIC"魔气匕"NOR"--"HIR"炎牙"NOR);
obj->set("weapon_prop/dagger",10);
obj->set("weapon_prop/dodge",20);
obj->set("weapon_prop/parry",20);
obj->set("weapon_prop/damage",30);
obj->set("weapon_prop/attack",30);
}
if (lv >= 50 && lv < 75) 
{
obj->set("name",HIB"(蓝光)"HIC"魔气匕"NOR"--"HIG"魂牙"NOR);
obj->set("weapon_prop/dagger",15);
obj->set("weapon_prop/dodge",30);
obj->set("weapon_prop/parry",30);
obj->set("weapon_prop/damage",50);
obj->set("weapon_prop/attack",50);
}
if (lv >= 75 && lv < 100) 
{
obj->set("name",HIB"(蓝光)"HIC"魔气匕"NOR"--"RED"血牙"NOR);
obj->set("weapon_prop/dagger",20);
obj->set("weapon_prop/dodge",40);
obj->set("weapon_prop/parry",40);
obj->set("weapon_prop/damage",70);
obj->set("weapon_prop/attack",70);
}
if (lv == 100) 
{
obj->set("name",HIB"(蓝光)"CYN"真˙魔气匕"NOR);
obj->set("weapon_prop/dagger",25);
obj->set("weapon_prop/dodge",50);
obj->set("weapon_prop/parry",50);
obj->set("weapon_prop/damage",100);
obj->set("weapon_prop/attack",100);
}
obj->move(me);
if(me->query_function("make-dagger",1) < 100)
              {
me->function_improved("make-dagger",random(300));
              }
return 1;
}
