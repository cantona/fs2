#include <weapon.h>
inherit ITEM;
void create()
{
set_name("独孤嵊",({"degu sa","sa"}));
set("unit","位");
set("long", @LONG

这位是‘武天至圣’独孤嵊，二十年前，自负去挑战莫无愁，最后被
魔龙诀所败并锁在地牢中，且用魔刀所发展出的‘魔血骨炼’，锁其筋骨。
LONG
);
set("no_get",1);
set("no_sac",1);         
setup();
}
