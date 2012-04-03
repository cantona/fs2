inherit COMBINED_ITEM;
void create()
{
        set_name("瞬移丹", ({"move pill","pill"}) );
set("long",
"此物乃天才机关手诸冈渡自富士山密洞采来之密药.\n"+
"只交给蓝凤组使用，一般杀手并拿不到，吃下(eat pill)后.
  会有一种飘然神迷的感觉，据说可以穿越空间。\n");
        set("unit", "盒");
        set("base_unit", "粒");
        set("no_sell",1);
        set("value",0);
        set("base_weight", 10);
set_amount(1);
setup();
}

void init()
{
  if( this_player()==environment() )
  {
    add_action("eat_pill", "eat");
  }
}

int eat_pill(string arg)
{      

   object ob,me=this_player();
   int max_atman,atman;

   if( !arg )                      return 0;
   arg=lower_case(arg);
   if( !ob = present(arg,me) )     return 0;
   if( ob != this_object() )       return 0;
   if (me->query("class") != "killer")
   {
     atman=me->query("kee");
     atman= atman/2;
     me->add("kee",-atman);
	tell_object(me,"你吃下之后感到一阵不适  难道是中毒了!!!\n");
     ob->add_amount(-1);
     return 0;
   }
   message_vision("$N吃下瞬移丹.\n", me);
   me->move("/open/killer/headkill/oldroom/r2.c");
   ob->add_amount(-1);
   return 1;
}
