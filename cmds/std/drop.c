// drop.c
 
inherit F_CLEAN_UP;
 
int do_drop(object me, object obj);
 
int main(object me, string arg)
{
        object obj, *inv, obj2;
        int i, amount;
        string item;
 
        seteuid(getuid());
        if(!arg) return notify_fail("你要丢弃什么东西？\n");
        arg = lower_case(arg);
 
        if(sscanf(arg, "%d %s", amount, item)==2) {
                if( !objectp(obj = present(item, me)) )
                        return notify_fail("你身上没有这样东西。\n");
                if( stringp(obj->query("no_drop")) )
                        return notify_fail( (string)obj->query("no_drop") );
                if( !obj->query_amount() )
                        return notify_fail( obj->name() + "不能被分开丢弃。\n");
                if( amount < 1 )
                        return notify_fail("东西的数量至少是一个。\n");
                if( amount > obj->query_amount() )
                        return notify_fail("你没有那么多的" + obj->name() + "。\n");
                else if( amount == (int)obj->query_amount() )
                        return do_drop(me, obj);
                else {
                        obj->set_amount( (int)obj->query_amount() - amount );
                        obj2 = new(base_name(obj));
                        obj2->set_amount(amount);
                        return do_drop(me, obj2);
                }
        }
 
        if(arg=="all") {
                inv = all_inventory(me);
                for(i=0; i<sizeof(inv); i++) {
                        do_drop(me, inv[i]);
                }
                write("Ok.\n");
                return 1;
        }
 
        if(!objectp(obj = present(arg, me)))
                return notify_fail("你身上没有这样东西。\n");
        return do_drop(me, obj);
}
 
int do_drop(object me, object obj)
{
  object        *light;
  int           no_drop;
  int           vis;
 
  vis = me->visible(me);
  notify_fail ("你不能丢这东西.\n");
  if (obj->query("no_drop") || obj->query_temp("secured")) return 0;
 
  if (obj->query("had_light")) {
        obj->delete("had_light");
        obj->delete("short");
       if ( obj->query("be_light") ) {
        obj->delete("be_light"); 
        obj->delete("light_up");  
        obj->set("name",obj->query("old_name") );
        obj->delete("old_name");     }  
        write (sprintf ("当你把%s丢在地上的时候，这%s%s也渐渐暗淡下来。\n",
                obj->name(), obj->query("unit"), obj->name()));
  }
 
  if(obj->query_temp("focuskee")==1)
    return notify_fail("你的手被一股真气缠住，无法将它丢下。\n");
  if(obj->query("nodrop")==1)
  return notify_fail("此武器吸血中不能丢下。\n");
  if (wizardp(me)) {
    if( obj->is_character() ) {
      if (obj->move(environment(me)) && vis)
        message_vision("$N将$n从背上放了下来，躺在地上。\n", me, obj);
      else
        write ("你将"+obj->name(1)+"从背上放了下来，躺在地上。\n");
    }
    else {
      if (vis)
        message_vision( sprintf("$N丢下一%s$n，但是它自动销毁了。\n",
                                 obj->query("unit")), me, obj );
      else
        write ("你丢下一"+obj->query("unit")+obj->name(1)+"，但是它自动销毁了。\n");
      destruct(obj);
      if (obj) write("你无法将这个物件丢掉。\n");
    }
    return 1;
  }
  else if (obj->move(environment(me))) {
    if( me->is_fighting() && userp(me) ) me->start_busy(1);
    if( obj->is_character() )
      message_vision("$N将$n从背上放了下来，躺在地上。\n", me, obj);
    else {
      message_vision( sprintf("$N丢下一%s$n。\n",       obj->query("unit")),
                      me, obj );
      // 火把
      if (obj->query("had_light")) {
        write (sprintf ("你随手一丢，这%s%s也渐渐暗淡下来。\n",
          obj->query("unit"), obj->short()));
        obj->delete("short");
        obj->delete("had_light");
      }
      // 不值钱的东西
      if ( !obj->query("value") && !obj->value() ) {
        write("因为这样东西并不值钱，所以人们并不会注意到它的存在。\n");
        destruct(obj);
      }
    }
    return 1;
  }
}
 
int help(object me)
{
        write(@HELP
指令格式 : drop <物品名称>
 
这个指令可以让你丢下你所携带的物品.
 
HELP
    );
    return 1;
}
