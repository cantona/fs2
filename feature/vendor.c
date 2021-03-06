// vendor.c
// 改成自动回应字串
// 改成自动找零钱
// 增加中英文模式并行, rewrite by wade 1/4/1996
// 相同东西可以一次买完, hmm....商店似乎也可以一次卖...

#include <room.h>
inherit NPC;

// 这是给 buy 命令用的, 只是传回物品价值, 后面还有另一步
int sell_object(object me, string what)
{
  object	ob;
  string	*goods;
  int		g, n, s, i, j;

  // 找出物品的值
  goods = query("vendor_goods");

  if (sscanf (what, "%d %s", n, what) != 2) n = 1;
  if (n > 40) return notify_fail("相同的物品最多一次只能买40个!!!\n");

  // 当然, 没卖该物就不必继续交易了
  if (!pointerp(goods) || sizeof(goods) == 0) return
	notify_fail ("对方根本没东西可卖, 你想干嘛?\n"); 

  for (g=0; g<sizeof(goods); g++)
    if (goods[g]->id(what))
      break;

  if (g == sizeof(goods)) return notify_fail ("抱歉, 没这东西\n");

  s = goods[g]->query("value") * n;

  if ( s > 0 && me->can_afford(s) ) {
    me->pay_money(s);

    j = me->query("int")-10;
    for (i=s=0; i<n; i++)
	s += 10+random(j);
    me->improve_skill("trade",s);
    if ( me->query_skill("trade") > 50 )
	me->set_skill("trade",100);

    if( goods[g]->query_amount() > 0 )
    {
    	ob = new(goods[g]);
    	ob->set_amount(n);
    	ob->move(me);
    }
    else
      for (i=0; i<n; i++) {
      	ob = new(goods[g]);
    	ob->move(me);
      }
    message_vision ("$N向$n买下"+chinese_number(n)+ob->query("unit") + ob->name() + "。\n",
      me, this_object() );
    
    return 1;
  }
  else
    return notify_fail("你的钱不够。\n");
}

string price_string(int v)
{
  if( v%10000 == 0 )
    return (v/10000) + "两黄金";
  if( v%100 == 0 )
    return (v/100) + "两银子";
  return v + "文钱";
}

// 这是给 list 命令用的
int do_vendor_list(string arg)
{
  string *goods;
  int i;

  // 没卖东西?
  if( !pointerp(goods = query("vendor_goods")) ) return 0;
  write ("您可以购买下列这些东西:\n");
  for(i=0; i<sizeof(goods); i++)
    printf("%-65s：%s\n",
      goods[i]->short(),
      price_string(goods[i]->query("value")) );
  return 1;  
}

void init()
{
  ::init();
  this_object()->set("class","officer");
  this_object()->set("officer_type","food");
// for /daemon/class/officer/cmds/command
  add_action ("do_vendor_list", "list");
}
