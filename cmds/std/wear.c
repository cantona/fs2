 
// wear.c
 
#include <ansi.h>
 
inherit F_CLEAN_UP;
 
int do_wear(object me, object ob);
 
int main(object me, string arg)
{
        object ob, *inv;
        int i, count;
 
        if( !arg ) return notify_fail("你要穿戴什么？\n");
        arg = lower_case(arg);
 
        if(arg=="all") {
                inv = all_inventory(me);
                for(count=0, i=0; i<sizeof(inv); i++) {
                        if( inv[i]->query("equipped") ) continue;
                        if(do_wear(me, inv[i]) ) count ++;
                }
                write("Ok.\n");
                return 1;
        }
 
        if( !objectp(ob = present(arg, me)) )
                return notify_fail("你身上没有这样东西。\n");
 
        if( ob->query("equipped") )
                return notify_fail("你已经装备着了。\n");
 
        return do_wear(me, ob);
}
 
int do_wear(object me, object ob)
{
        string str, gender;
 
        if( me->query("race") == "人类" &&
            (gender=ob->query("gender_only")) &&
            gender != (string)me->query("gender") )
        {
          if (gender == "女性")
                return notify_fail("这是女人的衣衫，你身为男人也想穿，羞也不羞？
\n");
          else
                return notify_fail("这是男人的衣衫，你身为女人也想穿，羞也不羞？
\n");
        }
 
        if( ob->wear() ) {
                if( !stringp(str = ob->query("wear_msg")) )
                        switch( ob->query("armor_type") ) {
                                case "cloth":
                                case "armor":
                                case "boots":
                                        str = YEL "$N穿上一" + ob->query("unit")
 + "$n。\n" NOR;
                                        break;
                                case "head":
                                case "neck":
                                case "wrists":
                                case "finger":
                                case "hands":
                                        str = YEL "$N戴上一" + ob->query("unit")
 + "$n。\n" NOR;
                                        break;
                                case "waist":
                                        str = YEL "$N将一" + ob->query("unit") +
 "$n绑在腰间。\n" NOR;
                                        break;
                                default:
                                        str = YEL "$N装备$n。\n" NOR;
                        }
                if( me->is_fighting() && userp(me) ) me->start_busy(1);
                message_vision(str, me, ob);
                return 1;
        } else
                return 0;
}
 
int help(object me)
{
        write(@HELP
指令格式 : wear <装备名称>
指令说明 : 
           这个指令让你装备某件防具。
其他参考 :
           remove，wield，unwield
HELP
    );
    return 1;
}
