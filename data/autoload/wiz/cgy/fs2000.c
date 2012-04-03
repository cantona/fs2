// FS2000ring
#include <armor.h>
#include <ansi.h>
inherit F_AUTOLOAD;
inherit FINGER;
object me=this_player();

void create()
{
	set_name(HIC"FS2000"HIW"纪念戒"NOR,({"fs2000"}));
	set("long","这是狂想空间2000年网聚纪念品，只有当天参加的人才能拥有，可以用来照明及基本技能之增加。\n");
	set_weight(10);
	set("unit", "只");
        set("armor_type","finger");
	set("light_up",-1);  
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
	/*	set("value",2000);      */
		set("material","gold");
		 }
		setup();
	set("armor_prop/move", 4);
    set("armor_prop/dodge", 4);
	set("armor_prop/parry", 4);
    set("armor_prop/force", 4);
    set("armor_prop/armor", 4);
	set("light",-1);
       
        
}


void init()
{
     add_action("doo_light","light");
	  add_action("do_wear","wear");
     add_action("do_remove","remove");
}
int do_wear(string str)
{
     ::wear();
     if( query("equipped") )
     {
        
message_vision(HIY"$N戴上了"HIC"FS2000"HIW"纪念戒"HIY"后，一股神圣的力量保护着$N。\n"NOR,me);
        set_heart_beat(1);
     }
}
int do_remove(string str)
{
   if(str=="fs2000" || str=="all")
     if( query("equipped") )
     {
message_vision(HIC"$N脱下了"HIC"FS2000"HIW"纪念戒"HIC"顿时失去了神力的庇护。\n"NOR,me);
        set_heart_beat(0);
     }
}
int doo_light(string str)
{
    object me;
    me=this_player();

    if(str!="fs2000")
    return 1;
    message_vision("$N使出特殊能力点亮了"HIC"FS2000"HIW"纪念戒"NOR"煞时间"HIC"FS2000"HIW"纪念戒"NOR"发出了七彩的光芒。\n",me);
    return 0;
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
if(me->query("id")=="cgy") 
 {
    me->delete_busy();
message_vision(HIC+"FS2000"HIW"纪念戒"NOR"发出了神圣的力量，使$N感到活力充沛。\n"+NOR,me);
    }
else if( random(100) > 60 )  
    {
    me->delete_busy();
message_vision(HIC+"FS2000"HIW"纪念戒"NOR"发出了神圣的力量，使$N感到活力充沛。\n"+NOR,me);
    }
  }
  return;
}
int query_autoload()
{
   return 1;
}
