#include <weapon.h>
#include <combat.h>
inherit SWORD;
object ob=this_object();
void create()
{
	set_name("奇剑‘挽留’",({"stay sword","sword"}));
        set_weight(10000);
        if( clonep() )
          set_default_object(__FILE__);
        else 
        {
          set("unit","把");
	  set("long","\n‘挽留’，整把剑身是直的，只有剑的把手是弯的，弯如半月，令人怀疑要如何持剑。上头刻着\n"+
	"		 [36m「挽留天涯挽留人,挽留岁月挽留你”。[0m\n");
          set("value", 100);
          set("material","blacksteel");
	}
	init_sword(1);
	setup();
}	
void init()
{
        add_action("do_blood","blood");
        set_heart_beat(1);
}
void heart_beat()
{
        int i,exp,count;
        object me=environment(this_object());
        object *enemy;
        if( me->is_fighting() && ob->query("equipped")=="wielded" && ob->query("blooded") )
        {
          enemy=me->query_enemy();
          i=random(sizeof(enemy));
          exp=me->query("combat_exp")-enemy[i]->query("combat_exp");
          if(exp<=0)    exp=5000;
          else          exp=5000+exp/10;
          if( random(exp) > random(20000) && random(2)==0 && me->query("kar")>random(30) )
          {
	    message_vision("[32m$N手上 [0;5m"+ob->query("name")+" [32m幻化出一片炫丽迷惘, 而$n好似失了神似的呆立不动。[0m\n\n",me,enemy[i]);
	    enemy[i]->set("start_busy", 10);
	    enemy[i]->add("kee",-10);
            COMBAT_D->report_status(enemy[i]);
          }
        }
}
int do_blood(string str)
{
        object me=this_player();
        string name=ob->query("name");
        if( str != ob->query("id") )
           return notify_fail("请键入武器全名。\n");
        if( ob->query("blooded") )
          return notify_fail("这把武器已得到你的牺牲。\n");
        if( ob->query("equipped") == "wielded" )
          return notify_fail("请先将武器卸下。\n");
        message_vision("[31m$N缓缓的用"+name+"往手腕处一划, 鲜血如泉涌般淋遍整把"+
        name+"。\n不一会儿, 鲜血已被"+name+"吸干殆尽, 而"+name+"也旦然的发出"+
        "一阵耀眼的[1;5;33m光芒[0;31m。[0m\n",me);
	set_name("[1m奇剑[1;33m‘挽留’[0m",({"stay sword","sword"}));
	set("wield_msg","\n$N突然拔出$n，只觉得又快、又奇、又绝，三分惊艳，三分潇洒，三分惆怅，加上一分的不可一世。\n\n");
	set("unwield_msg","$N将$n收起，只觉得忽然之间若有所失。\n\n");
	set("weapon_prop/damage",99);
        set("value", 100000);
        set("blooded",1);
        setup();
	call_out("wake_up",4);
	me->unconcious();
        return 1;
}
void wake_up()
{
        object who=this_player();
        who->remove_call_out("revive");
        who->revive();
}
