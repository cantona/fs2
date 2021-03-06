#include <weapon.h>
#include <combat.h>
inherit BLADE;
object ob=this_object();
void create()
{
	set_name("魔刀‘不应’",({"should-not blade","blade"}));
	set_weight(10000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit","把");
      	  set("long","\n‘不应’,刀身无颜色，黯淡无光，但瞧在每个人眼里，却都有不同颜色有的发出亮烈的黑光，有的如青电，有的如赭血，有的竟是五彩光华，目为之炫。\n");
          set("value", 100);
          set("material","blacksteel");
  	}
  	init_blade(1);
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
          if( random(exp) > random(20000) && random(5)==0 && me->query("kar")>random(30) )
          {
            message_vision("\n[36m$N手中 [0;5m"+ob->query("name")+" [36m不安的抖动起来, 散发出可怕的魔力, 摧动出$N无穷的战意直指$n。[0m\n\n",me,enemy[i]);
	    for(count=0;count<5;count++)
	    {
	      message_vision(ob->query("name")+"[1;36m引领着$N的手做出疯狂攻击!![0m\n",me);
	      COMBAT_D->do_attack(me,enemy[i],ob, TYPE_QUICK);
	    }
	  }
	}
}	
int do_blood(string str)
{
        object me=this_player();
        object ob=this_object();
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
	set_name("[1m魔刀[1;36m‘不应’[0m",({"should-not blade","blade"}));
	set("wield_msg","\n$N抽出$n，一刀在手，整个人的战志都似被带动，发出疯狂的攻击，杀力大增。\n\n");
	set("unwield_msg","$N将手上$n放开，整个人泄了一口气，缓缓的将$n收起。\n\n");
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
