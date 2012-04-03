#include <ansi.h>
#include <room.h>
inherit ROOM;

void create()
{
  set ("short", "虹晶桥后段");
  set ("long", @LONG
晶桥的后半段可能因为越来越接近另一岸了，同时也
较远离断崖中心了，其强劲的吸引力也缓和下来了。当你
踏到陆地的那一刹那、百感交集俨然觉得刚从鬼门关走了
一遭，但幸运的逛了回来了。哎！踩在陆地上的感觉真踏
实啊！！！

LONG);


        set("exits", ([ /* sizeof() == 1 */
  "north" : __FILE__,
  "south" : __FILE__,
]));

        set("objects", ([
]));
        setup();
}
void init()
{
        object me=this_player();

        message_vision(HIY"$N顿觉脚下有异，低头一看，才发现自己正身处在空虚之中，$N还来不及反应，身子已经笔直的跌入谷中!!!\n"NOR,me);
        me->set_temp("last_damage_from",me);
        me->set_temp("kill_it_self",1);
      tell_object(users(),HIR"
「啊～～～～～～～～”的一声惨叫, 从段家的后山传出, "+me->query("name")+"不慎失足跌落深谷,
尸骨无存!!!\n"NOR);

        me->die();
        call_out("do_clean",2);
}
int do_clean()
{
    object *inv;
    int i;

    inv=all_inventory(this_object());
    for(i=0;i<sizeof(inv);i++){
      if(!inv[i]) continue;
      destruct(inv[i]);
    }
    return 1;
}
