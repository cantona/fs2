// Qc by anmy (98/3/3)
#include <armor.h>
#include <ansi.h>
inherit CLOTH;
object me=this_player();
int cor;
int ekee=me->query("max_kee",1);
void create()
{
        set_name( HIB "魔龙血铠" NOR ,({"mdragon cloth","cloth"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "件");
                set("value",0);
                set("long","这是件淋过魔龙血的铠甲，有股隐藏的力量。\n");
                set("material","steel");
                set("armor_prop/armor",24);
                set("no_sell",1);
                set("no_auc",1);
                set("no_give",1);
                set("no_put",1);
                set("no_drop",1);
                set("no_get",1);
        }
        setup();
if(me->query("class")=="blademan")  this_object()->set("armor_prop/blade", 5);
if(me->query("class")=="fighter")   this_object()->set("armor_prop/unarmed",5);
if(me->query("class")=="swordsman") this_object()->set("armor_prop/sword",5);
if(me->query("class")=="scholar")   this_object()->set("armor_prop/stabber",5);
if(me->query("class")=="bandit")    this_object()->set("armor_prop/unarmed",5);
                this_object()->set("armor_prop/parry", 10);
                this_object()->set("armor_prop/move", 10);
                this_object()->set("armor_prop/force", 10);
}
void init()
{
     add_action("do_wear","wear");
     add_action("do_remove","remove");
}
int do_wear(string str)
{
     ::wear();
     if( query("equipped") )
     {
        cor = me->query("kar",1);
        cor = cor *2;
message_vision(HIB"$N穿上了魔龙血铠一股无穷的力量涌上心头。\n"NOR,me);
        set_heart_beat(1);
     }
}
int do_remove(string str)
{
   if(str=="mdragon cloth" || str=="all" || str=="cloth")
     if( query("equipped") )
     {
message_vision(YEL"$N脱下了魔龙血铠神秘的力量顿时消失。\n"NOR,me);
        set_heart_beat(0);
     }
}

void heart_beat()
{
  if( !objectp(me) )
        {
        set_heart_beat(0);
        return;
        }
  if( me->is_fighting()&&query("equipped")&&me->query("eff_kee")!=ekee )
  {
    if( random(100) > 55)
    {
    me->receive_curing("kee",cor*10);
    me->receive_heal("kee",cor*10);
message_vision(HIB+"\n魔龙血铠一阵血际过后，$N顿时觉的血气凌人，畅快无比。\n"+NOR,me);
    }
  }
  return;
}
