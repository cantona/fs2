//失落天书....不能study
inherit ITEM;
void create()
{
	set_name("失落天书", ({ "book" }));
	set_weight(100);
	if( clonep() )
	  set_default_object(__FILE__);
	else 
	{
	  set("unit", "本");
	  set("long","这就是失落的天书, 可惜你完全看不懂。\n");
          set("value", 0);
	  set("material", "paper");
	}
}
int valid_learn(object me)
{
	return -1;
}                          


