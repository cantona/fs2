// open/killer/ninja/find/r4.c
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  你决定不管柴荣的死活，反正可以活到教你魔气杀，没理由比你早死的...
  果然，柴荣察觉破空声，身影一闪，快速的身影让黑影只有击中残影？？!
  柴荣顺手抓住黑影，才发现竟是鞭子，魔教掌门信物‘雪龙鞭’。
  ‘是你？小柔.....你也是来追杀我的吗？......’  柴荣有点无奈的说。
  
   庄静柔恨恨的：
  ‘柴荣，你竟敢为了天魔解体大法，刻意接近我欺骗我的感情，
          想不到你竟是如此卑鄙的小人，交出天魔解体大法，留你全尸!’
   柴荣身影一震，似乎没有想到，短短时间之内，心爱的人竟然想法有这么大的转变
   想必是被人家刻意误导与洗脑，看来今天是无法解释清楚了!!
   
   在一旁看了觉得很心酸的你，决定.........
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "继续看戏" : "浑沌的过去....必须要自己去探索\n",
  "帮忙解释" : "浑沌的过去....必须要自己去探索\n",  ]));
   
  set("exits", ([ /* sizeof() == 1   */
     "帮忙解释" : __DIR__"rx5.c",   
     "继续看戏" : __DIR__"r5.c",   ]));
  setup();
}
