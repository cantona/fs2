inherit ITEM;

void create()
{
        set_name("杀手密令", ({ "killer_card" }) );
        set("unit", "张");
        set("long", "这是传说中，黑牙联特级杀手的令牌，想不到你居然会有？\n");
        set("no_sell",1);
        set("no_give",1);
        set_weight(10);
        set("value",0);
}

int query_autoload ()
{
  if(!this_player()) return 0;
  if (this_player()->query("quest/memory") == 1)
    return 1;
  return 0;
}  
