#include <weapon.h>
#include <ansi.h>
inherit UNARMED;

void create()
{
  seteuid(getuid());
  set_name(HIY"牛神锥"NOR,({"cow horn","cow","horn"}));
  set_weight(2100);
  if( clonep() )
                set_default_object(__FILE__);
        else {
  set("unit", "把");
  set("long","这是十二星象之中的黄牛君所喜爱的武器 .你仔细地端详了一下 ,发现这和别的爪子相当不同 .中间的黄色宝珠向四方散发出耀眼的光芒 ,而在旁相连着两只对称的褐黄色牛角 ,上面还带有些暗红色的血渍 ,看样子应该是前人使用这钝器刺杀敌人时所留下的 .\n");
  set("value",10000);
  set("material","ironsteel");
  set("ski_type","unarmed");
  }
  init_unarmed(30);
  setup();
}
