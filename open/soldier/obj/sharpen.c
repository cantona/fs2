
#include <weapon.h>
#include <ansi.h>
inherit LANCE;
void create()
{
        seteuid(getuid());
set_name(HIM"红剡"NOR,({"sharpen"}));
        set_weight(9000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
    set("long","
    这把利器是跟蓝劫一起从黄果山瀑布水底打捞出来的
据说挖出来时是两把合在一起的..然后由名铁匠皮古日夜
切割..才分成两把枪。
    ");
                set("value",70000);
                set("material", "blacksteel");
        set("wield_msg", "$N背一斜,顺势抽出$n,$n渐渐发出耀眼的属光,顿时$N充满力量。\n");
        set("unwield_msg", "$N将手中$n放回背上的刀囊中。\n");
      }
        init_lance(85);
        setup();
}


