
// sun_armband.c
#include <armor.h>
#include <ansi.h>
inherit EQUIP;
object user;
void create()
{

set_name(""HIB"□HIW"□HIB"□HIW"□HIB"□HIW"u"HIB"□HIW"□NOR"",({"God_Armband","armband"}));
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","上面有着海神的祝福, 让你对真气运转有更深层的了解");
        set("unit","个");
                set("no_put",1);
                set("no_give",1);
                set("no_sell",1);
                set("no_auc",1);
                set("no_drop",1);
   set("no_get",1);
        set("material","crimsonsteel");
        set("armor_type","armbands");
        set("armor_prop/armor", 8);
        set("armor_pror/parry",10);
        set("armor_prop/force", 10);
        set("armor_prop/dodge", 10);
        }
        setup();
}

int init()
{
    add_action("do_wear","wear");
    add_action("do_remove","remove");
}
int do_wear(string str)
{
::wear();
 if( query("equipped") )
 {
   user = this_player();
  if(user->query_temp("god_armband",1))
  return notify_fail("你已经将"HIB"□HIW"□HIB"□HIW"□HIB"□HIW"u"HIB"□HIW"□NOR"装备在手臂上了！\n");
   message_vision("$N将"HIB"□HIW"□HIB"□HIW"□HIB"□HIW"u"HIB"□HIW"□NOR"往手臂一带。\n",user);
   user->add("force_factor",5);
   user->add_temp("god_armband",1);
   set_heart_beat(1);
 }
}

int do_remove(string str)
{
::wear();
 if( query("equipped") )
 {
   user = this_player();
   message_vision("$N将"HIB"□HIW"□HIB"□HIW"□HIB"□HIW"u"HIB"□HIW"□NOR"卸下。\n",user);
   user->set("force_factor",10);
   user->delete_temp("god_armband",1);
   set_heart_beat(1);
 }
}

