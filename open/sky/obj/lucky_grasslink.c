#include <armor.h>
#include <ansi.h>
inherit WRISTS;
object user;
object ob=this_object();
void create()
{
        	set_name(HIY"幸运草环"NOR, ({"lucky grasslink", "lucky", "grasslink"}));
        	set_weight(50);
       		if( clonep() )
                set_default_object(__FILE__);
        	else {
        	set("long", "一个天灵界中流落在这世上的草环，据说可以让穿载他的人能更快速\n"
		   +"的收集天灵地界失落在这世上的个式各样宝物。\n");
	        set("unit", "顶");
	        set("value", 1000000);
	        set("material", "steel");
                set("no_steal",1);
		set("type", 1); 
		set("no_give",1);
		set("no_sell",1);
                set("armor_prop/armor", 15);
		set("armor_prop/dodge", 5);
		set("armor_prop/parry", 5);
		set("armor_prop/attack", 5);
		set("armor_prop/force", 5);
        }
        setup();
}

void init()
{
     add_action("do_drop","drop"); 
     add_action("do_auc","auc"); 
     add_action("do_wear","wear");
     add_action("do_remove","remove");
}

int do_wear(string str)
{ 

     ::wear(); 
     if ( query("equipped") ) 
     {
	user = this_player();	  // 取得使用者
	message_vision("$N戴上了$n，感觉由心中然起了一丝奇异的感觉!!\n",user,ob);
	user->set_temp("bless",1);
	set_heart_beat(1);
     } 
}

int do_drop(string str)
{  
   if (str=="lucky grasslink" || str=="all" || str=="lucky" || str=="grasslink")
     if( query("equipped") )
     {
	message_vision("$N卸下了$n，奇异的感觉也跟着消失了!!\n",user,ob);
	user->delete_temp("bless");
	set_heart_beat(0);
     }	  
}

int do_remove(string str)
{
   if (str=="lucky grasslink" || str=="all" || str=="lucky" || str=="grasslink")
     if( query("equipped") )
     {
	message_vision("$N卸下了$n，奇异的感觉也跟着消失了!!\n",user,ob);
	user->delete_temp("bless");
	set_heart_beat(0);
     }
}
		
int do_auc(string str)
{
   if (str=="lucky grasslink" || str=="all" || str=="lucky" || str=="grasslink")
     if( query("equipped") )
     { 
	message_vision("$N卸下了$n，奇异的感觉也跟着消失了!!\n",user,ob);
	user->delete_temp("bless");
	set_heart_beat(0);
     }
}     
