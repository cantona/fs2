#include <ansi.h>
#include <weapon.h>
inherit STAFF;

void create()
{
 set_name(HIG"青竹棒"NOR,({"green staff","staff"}));
 set_weight(100);
 init_staff(95);
 if( clonep() )
  set_default_object(__FILE__);
 else
 {
  set("unit","根");
  set("long","这是历代丐帮帮主的证物，传闻只要谁能夺得此棍，就能号令丐帮上上下下数十万人众。\n");
  set("value",23483);
  set("material","steal");
 }
 setup();
}

