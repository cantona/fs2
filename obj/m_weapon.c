// /u/a/acelan/eqs/m_weapon.c 万用武器 written by AceLan.............97.11.10
// Modify By AceLan 98.7.13 让万用更有看头...ccc....

#include <ansi.h>
#include <weapon.h>

inherit SWORD;

void create()
{
   object me= this_player();
   string c_unit, wield_part, weapon_type= me->query("weapon/e_type"); // new

   set_name( me->query("weapon/name"),({"special "+me->query("weapon/e_type"), me->query("weapon/e_type"), "m_weapon"}) );
   set_weight(1000);
   if( clonep() )
      set_default_object(__FILE__);
   // 下为新增部份...
   if( weapon_type == "whip")
   {
      c_unit= "柄";
      wield_part= "手中";
   }
   else if( weapon_type == "pen")
   {
      c_unit= "只";
      wield_part= "手中";
   }
   else if( weapon_type == "ring")
   {
      c_unit= "只";
      wield_part= "指上";
   }
   else if( weapon_type == "armband")
   {
      c_unit= "个";
      wield_part= "臂上";
   }
   else                                      // 剩下的为 剑 刀 匕首 拂尘 扇
   {
      c_unit= "把";
      wield_part= "手中";
   }

   set("long","这"+c_unit+me->query("weapon/c_type")+"是以[1;37m"+ me->query("weapon/source1")+"[0m配合[1;37m"+ me->query("weapon/source2")+"[0m所铸成的, 它正闪烁着异光。");
   set("unit", "把");
   set("value",0);                           // 无价之宝...ccc....
   set("material","steal");

   // 加强了装备武器及卸下武器的讯息...
   // 指 扇 笔 指环 臂环
   if( me->query("weapon/type") == "stabber" || me->query("weapon/type") == "unarmed")
   {
      set("wield_msg", HIW"只见$N大喝一声, 一道白光迅速由$N怀中窜出, \n在空中盘桓三圈后停在$N的"+wield_part+"化成一"+c_unit+"独特的"+ me->query("weapon/name")+"。\n"NOR);
      set("unwield_msg", HIW"突然间$N的胸腹之间吸足了气, 朝"+wield_part+"的$n轻轻一吹, \n只见$n慢慢的化作一缕\轻烟, 隐没在$N的胸腹之间。\n"NOR);
   }
   else // if( c_unit == "把" || c_unit == "柄")// 指 剑 刀 匕首 拂尘...扇子不会出现
   {
      set("wield_msg", HIW"$N轻轻的将"+ me->query("weapon/name")+"由背后抽出, 只见一道耀眼而诡异的光芒注入了$N身上。\n"NOR);
      set("unwield_msg", HIW"$N将手中的$n随手往天上一丢, 只见它巧妙的落回了背后。\n"NOR);
   }

   set("no_drop", 1);
   set("no_give", 1);
   set("no_get", 1);
   set("no_auc", 1);

   init_sword( me->query("weapon/value"));
   set("weapon_prop/damage", me->query("weapon/value"));
   set("skill_type", me->query("weapon/type"));
   setup();
}

// 新增加 Modify by AceLan....99.3.7
// 看能不能修复攻击力互相冲突
void init()
{
   if( environment() == this_player() )
   {
      init_sword( this_player()->query("weapon/value"));
      set("weapon_prop/damage", this_player()->query("weapon/value"));
   }
}

int query_autoload()
{
   return 1;
}
□□