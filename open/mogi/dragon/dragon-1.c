#include <weapon.h>
 inherit ITEM;

void create()
{
   set_name("黄金甲龙",({"dragon" ,"golden dragon",}));

   set("unit","只");

set("long","\n已经焉焉一息的传说中神兽 ,你可以用内力
扯断铁铐放它自由(free dragon) ,但后果没人敢说!!\n\n");
  set("no_get",1);                    
        setup();
}

