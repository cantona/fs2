// made by ccat
// Et-sword.c by Casey
// super weapon 修改来自百变兵器及倚天剑 by bss
#include <ansi.h>
#include <weapon.h>
inherit EQUIP;
int weapon_type=0,sp;
object weapon,user;
void create()
{
     set_name(HBMAG+HIY"玄天九变"NOR,({"super weapon","weapon","super"}) );
     set_weight(15000);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
     if( clonep() )
               set_default_object(__FILE__);
     else {
            set("long","上古时代所遗留下来的奇异兵器，可以变换成各种种类的兵器.\n"
                  +"( change <type>, ex: change sword )\n"
                  +"( type : unarmed sword blade whip dagger stabber )\n");
            set("unit", "件");
            set("value",2000);
            set("material","steal");
           }
        setup();
}
void init()
{
        add_action("do_change","change");
        add_action("do_wield","wield");
        add_action("do_unwield","unwield");
}
int do_change(string str)
{
        object me=this_player();
   switch(str)
   {
     case "unarmed":
           weapon_type=1;
           set("skill_type", "unarmed");
           set_name(HIY"如来大手印"NOR,({"rulai hand","hand"}));
           write(HBMAG+HIY"玄天九变"NOR"开始作奇异的变化.\n"HBMAG+HIY"玄天九变"NOR"化成了一双"HIY"如来大手印"NOR"\n");
           set("weapon_prop/unarmed", 10);
//           init_unarmed(120);
           set("weapon_prop/damage",120);
           break;
     case "sword":
           weapon_type=2;
           set("skill_type", "sword");
           set_name(HIY"神龙剑"NOR,({"dragon sword","sword"}));
           write(HBMAG+HIY"玄天九变"NOR"开始作奇异的变化.\n"HBMAG+HIY"玄天九变"NOR"化成了一把"HIY"神龙剑"NOR".\n");
           set("weapon_prop/sword", 10);
//        init_sword(120);
           set("weapon_prop/damage",120);
           break;
     case "blade":
           weapon_type=3;
           set("skill_type", "blade");
           set_name(HIR"日月"HIY"神刀"NOR,({"sun_moon blade","blade"}));
           write(HBMAG+HIY"玄天九变"NOR"开始作奇异的变化.\n"HBMAG+HIY"玄天九变"NOR"化成了一把"HIR"日月"HIY"神刀"NOR"\n");
           set("weapon_prop/blade", 10);
//        init_sword(120);
           set("weapon_prop/damage",120);
           break;
     case "dagger":
           weapon_type=4;
           set("skill_type", "dagger");
           set_name(HIC"沉璧"NOR,({"moon dagger","dagger"}));
           write(HBMAG+HIY"玄天九变"NOR"开始作奇异的变化.\n"HBMAG+HIY"玄天九变"NOR"化成了一双"HIC"沉璧"NOR".\n");
           set("weapon_prop/dagger",10);
//        init_dagger(120);
           set("weapon_prop/damage",120);
           break;
     case "whip":
           weapon_type=5;
           set("skill_type", "whip");
           set_name(HIM"紫玉晶鞭"NOR,({"gem whip","whip"}));
           write(HBMAG+HIY"玄天九变"NOR"开始作奇异的变化.\n"HBMAG+HIY"玄天九变"NOR"化成了一条"HIM"紫玉晶鞭"NOR".\n");
           set("weapon_prop/whip", 10);
//        init_whip(120);
           set("weapon_prop/damage",120);
           break;
     case "stabber":
     case "fan":
           weapon_type=6;
           set("skill_type", "stabber");
           set_name(HIR"阴阳宝扇"NOR,({"yengyang fan","fan"}) );
           write(HBMAG+HIY"玄天九变"NOR"开始作奇异的变化.\n"HBMAG+HIY"玄天九变"NOR"变成了一支"HIR"阴阳宝扇"NOR".\n");
           set("weapon_prop/stabber", 10);
//        init_stabber(120);
           set("weapon_prop/damage",120);
           break;
     default:
           write(HBMAG+HIY"玄天九变"NOR"左变右变,就是无法变成你要的东西.\n");
   }
    me->reset_action();
     return 1;
}
int do_wield(string str)
{
        user = this_player(); // 取得使用者
        weapon=this_object();
        sp=user->query("spi",1);
//        ::wield();      //因为已经设定了no_drop等....所以可以不用先做这项
        if(str=="all" ||
          (str=="rulai hand" && weapon_type==1) ||
          (str=="hand" && weapon_type==1) ||
          (str=="dragon sword" && weapon_type==2) ||
          (str=="sword" && weapon_type==2) ||
          (str=="sun_moon blade" && weapon_type==3) ||
          (str=="blade" && weapon_type==3) ||
          (str=="moon dagger" && weapon_type==4) ||
          (str=="dagger" && weapon_type==4) ||
          (str=="gem whip" && weapon_type==5) ||
          (str=="whip" && weapon_type==5) ||
          (str=="yengyang fan" && weapon_type==6) ||
          (str=="fan" && weapon_type==6))
        {
        switch(weapon_type)
        {
                case 1:
                        message_vision("$N将$n从怀中取出戴在手上，只见$N的身体陇罩在一片淡淡的黄光中，$N的力量增强了。\n"NOR,user,weapon);
                        break;
                case 2:
                        message_vision("$N大喝一声:「神龙出鞘”，$n由龙嘴吐出，龙的斗气布满$N全身。\n",user,weapon);
                        break;
                case 3:
                        message_vision("$N运气刀柄，刹那间$n的刀鞘发出耀眼金光，$N用力一拔，$n出鞘了!!!\n",user,weapon);
                        break;
                case 4:
                        message_vision(HIY"$N双手忽然一抖，$n"HIY"就像变魔术般的出现在$N手上。\n"NOR,user,weapon);
                        break;
                case 5:
                        message_vision("$N用力抽出缠在腰间的$n，$n散发出令人不舒服的紫光。\n"NOR,user,weapon);
                        break;
                case 6:
                        message_vision("$N拿出藏在衣服里的小$n放在掌上，用力一吹，一只足有二尺长的$n出现在$N的手上。\n"NOR,user,weapon);
                        break;
                default:
                        message_vision("以$N现在的形态不能装备，请先change再装备。\n",weapon);
                        return 1;
                        break;
        }
        user->set_temp("wield_schange_weapon",1);
        set_heart_beat(1);
        }
        else
        {
        return notify_fail("你要装备啥啊???\n");
        }
}
int do_unwield(string str)
{
        if( query("equipped") )
        {
        if(str=="all" ||
          (str=="rulai hand" && weapon_type==1) ||
          (str=="hand" && weapon_type==1) ||
          (str=="dragon sword" && weapon_type==2) ||
          (str=="sword" && weapon_type==2) ||
          (str=="sun_moon blade" && weapon_type==3) ||
          (str=="blade" && weapon_type==3) ||
          (str=="moon dagger" && weapon_type==4) ||
          (str=="dagger" && weapon_type==4) ||
          (str=="gem whip" && weapon_type==5) ||
          (str=="whip" && weapon_type==5) ||
          (str=="yengyang fan" && weapon_type==6) ||
          (str=="fan" && weapon_type==6))
        {
        switch(weapon_type)
        {
                case 1:
                        message_vision("$N把戴在手上的$n取下，珍而重之的收了起来。\n"NOR,user,weapon);
                        break;
                case 2:
                        message_vision("$N轻呼一声:「神龙回鞘”，$n缩回了龙嘴。\n",user,weapon);
                        break;
                case 3:
                        message_vision("$N将手中$n往天上一抛，$n不偏不倚的落回鞘内。\n",user,weapon);
                        break;
                case 4:
                        message_vision(HIY"$N将手一抖，$n"HIY"便消失了。\n"NOR,user,weapon);
                        break;
                case 5:
                        message_vision("$N把$n重新缠回腰间。\n"NOR,user,weapon);
                        break;
                case 6:
                        message_vision("$N往大$n吹了一口气，原本有二尺长的大扇子变成了只有二寸长的小扇子。\n"NOR,user,weapon);
                        break;
        }
        user->delete_temp("wield_schange_weapon");
        set_heart_beat(0);
        }
        else
        {
        return 0;
        }
        }
}
void heart_beat()
{
  object *enemy,who,ob;
  int i,j;

 if( !objectp(user) )
 {
    set_heart_beat(0);
    return;
 }

 if( user->is_fighting() && query("equipped") && user->query_temp("wield_schange_weapon") )
 {
    if( random(sp+100)> 100 )
    {
       enemy=user->query_enemy();
       i=random(sizeof(enemy));
       ob=enemy[i]->query_temp("weapon");
       if( !ob || random(10) > 6 )
       {
         message_vision(BLINK+HIY"$N突然感到由$n"BLINK+HIY"所传来的一阵奇异的气，身不由已的使出连续技!!!\n"NOR
         ,user,weapon);

         for(j=0;j<=2+random(3);j++)
           COMBAT_D->do_attack(user,enemy[i],user->query_temp("weapon"),2);
         return;
       }

 if( environment(user) == environment(enemy[i]) )
        if(!enemy[i]->query_temp("wield_schange_weapon"))
        if((userp(enemy[i]) && random(10) > 5) ||
          (!userp(enemy[i]) && random(10) > 8)  )
        {
          ob->unequip();
          message_vision(HIC"忽然一道神奇的蓝光由"+weapon->query("name")+HIC"射出,击中了$N的"+ob->query("name")+HIC"
只听见ㄆㄧㄚ的一声，"+ob->query("name")+HIC"竟然断了!!!\n"
NOR,enemy[i]);
          if( !ob->query("bad"))
          {
            ob->set("name", "(断毁)" + ob->query("name"));
             ob->set("bad",1);
          }

          ob->set("value",1);
          ob->set("weapon_prop/damage",0);
          ob->move(environment(enemy[i]));
          enemy[i]->rest_action();
          enemy[i]->delete_temp("wield_schange_weapon");
          }
         else
         {
          if(ob->query("bad1"))
          {
          ob->unequip();
          message_vision(HIM"忽然一道刺眼的紫光由"+weapon->query("name")+HIM"射向了$N的"+ob->query("name")+HIM"，
原本已经出现裂缝的"+ob->query("name")+HIM"竟然开始粉碎!!!，$N完全不感相信自己
的眼睛，过了不久，"+ob->query("name")+HIM"完全的消失在天地之间了!!!\n"NOR,enemy[i]);
          destruct(ob);
          message_vision(BLINK+HIY"\n$N眼看机会来了，奋不顾身的对$n"BLINK+HIY"发动猛烈的攻击!!!\n"NOR,user,enemy[i]);
          call_out("quick_combat",2,enemy[i]);
          }
          if(ob)
          {
          ob->unequip();
          message_vision(HIG"忽然一道神奇的绿光由"+weapon->query("name")+HIG"射向了$N的"+ob->query("name")+HIG"，
$N见情况不对急忙将"+ob->query("name")+HIG"抽回，可惜慢了一步，"+ob->query("name")+HIG"
被绿光轻轻的碰到，只听见「嘶”的一身，"+ob->query("name")+HIG"竟然出现了数道裂缝!!!\n"NOR,enemy[i]);
          }
          if( !ob->query("bad1"))
          {
            ob->set("name", "(折损)" + ob->query("name"));
            ob->set("bad1",1);
          }
          if( ob->query("weapon_prop/damage") > 10 )
          {
            ob->add("weapon_prop/damage",-10);
          }
          else
            ob->set("weapon_prop/damage",0);
          ob->wield();
        }
    }
  }

    return;
}
int quick_combat(object ob)
{
        int j;
         for(j=0;j<=2+random(3);j++)
           if(ob)
           COMBAT_D->do_attack(user,ob,user->query_temp("weapon"),2);
         return 1;
}
int query_autoload() { return 1; }
