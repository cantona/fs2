#include <ansi.h>
#include "/open/open.h"
inherit ITEM;

void create()
{
     set_name(HIY"大木栅栅门钥匙"NOR,({"wooddoor key","key"}));
     set("unit","把");
     set("long","这是一把可以打开大木栅栅门的钥匙。\n");
     set("key_of_room",({"/open/ping/questsfan/qroom/room5"}));
     set("no_drop",1);
     set("no_sell",1);
     set("no_get",1);
     set("no_auc",1);
}
