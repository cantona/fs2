// unwield.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object ob, *inv;
	string str;
	int i, count;

	if( !arg ) return notify_fail("你要脱掉什么？\n");
        arg = lower_case(arg);
         if(arg=="all") {
    inv = all_inventory(me);
    for(count=0, i=0; i<sizeof(inv); i++) {
if(inv[i]->query_temp("focuskee")==1)
return notify_fail("武器被真气缠住，不能放下！\n");
if(inv[i]->query_temp("evil-mblade")==1)
return notify_fail("武器被阴灵缠住，不能放下！\n");
	if( inv[i]->query("equipped") && inv[i]->query("skill_type") )
	    if( inv[i]->unequip() ) {
                if( me->is_fighting() && userp(me) ) me->start_busy(1);
		if( !stringp(str = inv[i]->query("unwield_msg")) )
                        str = "$N放下手中的$n。\n";
		message_vision(str, me, inv[i]);
	    }
    }
    write("Ok.\n");        
    return 1;
  }

	if( !objectp(ob = present(arg, me)) )
		return notify_fail("你身上没有这样东西。\n");

	if( (string)ob->query("equipped")!="wielded" )
		return notify_fail("你并没有装备这样东西作为武器。\n");

	if(ob->query_temp("focuskee")==1)
		return notify_fail("你的手被一股真气缠住，无法将他放下。\n");
 if(ob->query_temp("evil-mblade")==1)
return notify_fail("你的手被一股阴灵缠住，无法将他放下。\n");
	if( ob->unequip() ) {
		if( me->is_fighting() && userp(me) ) me->start_busy(1);
		if( !stringp(str = ob->query("unwield_msg")) )
			str = "$N放下手中的$n。\n";
		message_vision(str, me, ob);
		return 1;
	} else
		return 0;
}

int help(object me)
{
  write(@HELP
指令格式 : unwield <物品名>
指令说明 : 
           这个指令让你放下手中的武器。
其他参考 :
           wield，remove，wear
HELP
    );
    return 1;
}
 
