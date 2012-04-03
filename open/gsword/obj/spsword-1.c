#include <weapon.h>
inherit SWORD;
object ob;
object *target;
object ob1=this_object();
int sp_value;
int sp_hit;
void create()
{
	set_name("赤麟□剑",({"blood_sword"}) ); // 绝对不要单独 sword
	set_weight(15000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
 set("long","这是一把由血兽的血所粹炼出来的一把邪恶之剑,他会帮你一起打击对手,
            相传得此剑者也能一统江湖,所以这也是绿毛老祖最爱的一把剑...");
	set("unit","件");
	set("value", 1000);
	set("material","steel");
	set("no_sell", 1);
	}
	init_sword(60);
	setup();
}

void init()
{
     add_action("do_drop","drop"); 
     add_action("do_auc","auc"); 
     add_action("doo_wield","wield");
     add_action("do_give","give");
     add_action("do_unwield","unwield");
}

int doo_wield(string str)
{
    int max_sp_hit;
    max_sp_hit=250;
    ob=this_player();
    sp_value=(ob->query("spi")+ob->query("kar"))*2+ob->query("bounds")/100+
    ob->query("combat_exp")/1000;
    sp_hit=ob->query("MKS")/1000+random(80);
    if(str!="blood_sword")
      return 0;
    else 
     ::wield();   
    if( sp_hit >max_sp_hit)
       sp_hit=max_sp_hit;
    if(ob1->query("equipped"))
    {
       set_heart_beat(1);
       message_vision("$N手握赤麟 ,复仇怨念冲激使$N全身涨红 ,隐约散发出一股肃杀之气 .\n",this_player());
       return 1;
     }     
    
    return 0;
  
  
}
int do_drop(string str)
{
    if(str == "blood_sword" || str=="all")
    {
      set_heart_beat(0);
       message_vision("$N将赤麟放下 ,逐渐恢复心智.\n",this_player());
    }
}    
int do_give(string str)
{
    if(str == "blood_sword" || str=="all")
    {
      set_heart_beat(0);
       message_vision("$N将赤麟放下 ,逐渐恢复心智..\n",this_player());
     }
}
int do_unwield(string str)
{
    if(str == "blood_sword" || str=="all")
    {
       set_heart_beat(0);
       message_vision("$N将赤麟放下 ,逐渐恢复心智..\n",this_player());
     }
}                       
int do_auc(string str)
{
    if(str == "blood_sword" || str=="all")
    {
       set_heart_beat(0);
       message_vision("$N将赤麟放下 ,逐渐恢复心智..\n",this_player());
    }
}                                                         

void heart_beat()
{
  int *target,i;
  target=ob->query_enemy();
  i=random(sizeof(target));
  if( ob1->query("equipped") )
  if( ob->is_fighting() )
  if( sp_value > random(1500) )
    {
     message_vision("[31m赤麟幻化成一血兽 ,啃噬着$N的身驱\n[0m ",target[i]);
     target[i]->add("kee",-sp_hit);
     }
  return;
 }        
      
