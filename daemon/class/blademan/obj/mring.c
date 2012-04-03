// Qc by anmy (98/3/3)
#include <armor.h>
#include <ansi.h>
inherit FINGER;
object me=this_player();
int cor,kar,intt,spi,cps;
void create()
{
        set_name(HIB"魔龙睛戒"NOR,({"mdragon ring","ring"}) );
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","件");
        set("value", 0);
        set("material","gem");
        set("long","此戒为魔龙眼睛所制成，有强大防护力。\n");
        set("no_auc",1);
        set("no_sell",1);
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
this_object()->set("armor_prop/move", 2);
this_object()->set("armor_prop/dodge", 3);
this_object()->set("armor_prop/parry", 4);
this_object()->set("armor_prop/force", 5);
this_object()->set("armor_prop/armor", 9);
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
        kar = me->query("kar",1);
        cor = me->query("cor",1);
        cps = me->query("cps",1);
        spi = me->query("spi",1);
        intt = me->query("int",1);
message_vision(HIB"戴上了魔龙睛戒后，一股邪恶的力量陇罩了$N。\n"NOR,me);
        set_heart_beat(1);
     }
}
int do_remove(string str)
{
   if(str=="mdragon ring" || str=="all" || str=="ring")
     if( query("equipped") )
     {
message_vision(YEL"$N脱下了魔龙睛戒邪恶的力量顿时消失。\n"NOR,me);
        set_heart_beat(0);
     }
}

void heart_beat()
{
object *enemy;
int i;
  if( !objectp(me) )
        {
        set_heart_beat(0);
        return;
        }
  if( me->is_fighting()&&query("equipped")&&me->is_busy() )
  {
enemy=me->query_enemy();
i=random(sizeof(enemy));
if( enemy[i]->query("class")=="scholar" ) {
    kar = kar/2;
    intt = intt/2; }
if( random(cor+cps+spi) > 85-random(kar+intt) )  
    {
    me->delete_busy();
message_vision(HIW+"\n魔龙睛戒忽然散发出一股邪恶的力量，使$N冲开了身上被封之穴道。\n"+NOR,me);
    }
  }
  return;
}
