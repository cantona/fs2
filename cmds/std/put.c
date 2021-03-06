// put.c

int do_put(object me, object obj, object dest);

void create() { seteuid(getuid()); }

int main(object me, string arg)
{
        string target, item;
        object obj, dest, *inv, obj2;
        int i, amount;

        if(!arg) return notify_fail("你要将什么东西放进哪里？\n");

        if( sscanf(arg, "%s in %s", item, target)!=2 )
                return notify_fail("你要给谁什么东西？\n");

        dest = present(target, me);
        if( !dest || living(dest) ) dest = present(target, environment(me));
        if( !dest || living(dest) )
                return notify_fail("这里没有这样东西。\n");

        if(sscanf(item, "%d %s", amount, item)==2) {
                if( !objectp(obj = present(item, me)) )
                        return notify_fail("你身上没有这样东西。\n");
                if( obj->query("no_put") )
                        return notify_fail("这东西不能丢。\n");
                if( !obj->query_amount() )
                        return notify_fail( obj->name() + "不能被分开。\n");
                if( amount < 1 )
                        return notify_fail("东西的数量至少是一个。\n");
                if( amount > obj->query_amount() )
                        return notify_fail("你没有那么多的" + obj->name() + "。\n");
                else if( amount == (int)obj->query_amount() )
                        return do_put(me, obj, dest);
                else {
                        obj->set_amount( (int)obj->query_amount() - amount );
                        obj2 = new(base_name(obj));
                        obj2->set_amount(amount);
                        return do_put(me, obj2, dest);
                }
        }

        if(item=="all") {
                inv = all_inventory(me);
                for(i=0; i<sizeof(inv); i++) {
                if (inv[i]->query("no_put"))
                        return notify_fail("这东西不能丢。\n");
                        if( inv[i] != dest ) do_put(me, inv[i], dest);
                }
                write("Ok.\n");
                return 1;
        }

        if(!objectp(obj = present(item, me)))
                return notify_fail("你身上没有这样东西。\n");
        if( obj->query("no_put") )
                return notify_fail("这东西不能丢。\n");
        return do_put(me, obj, dest);
}

int do_put(object me, object obj, object dest)
{
        string record;
        if(obj==dest)
        {
              return notify_fail("put 物品a in 物品a?这是bug喔,请勿使用!!\n");
        }
if(obj->query_temp("focuskee")==1)
return notify_fail("此东西被真气缠住不能放下。\n");
        if( obj->move(dest) ) {
                message_vision( sprintf("$N将一%s%s放进%s。\n",
                        obj->query("unit"), obj->name(), dest->name()),
                        me );
                if (wizardp (me)) {
                log_file("wiz/PUT", sprintf("%s(%s) 将%s(%s)放进%son%s\n"
                ,me->query("name"),me->query("id"),obj->name(),(string)base_name(obj),dest->name(),ctime(time()) ));
                }
                return 1;
        }
        else return 0;
}

int help(object me)
{
write(@HELP
指令格式 : put <物品名称> in <某容器>
指令说明 : 
           这个指令可以让你将某样物品放进一个容器，
           当然，首先你要拥有这样物品。
HELP
    );
    return 1;
}
