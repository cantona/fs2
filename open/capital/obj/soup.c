// by onion

inherit ITEM;
inherit F_LIQUID;

int extra_func();

void create()
{
	set_name("传家鸡汤", ({ "chicken soup", "soup" }) );
	set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "这是王家食堂祖传的秘方, 也是王家食堂的招牌, 鸡汤中还加了不少补药, 据说可恢复少许/体力。\n");
		set("unit", "罐");
		set("value", 1000);
		set("饱和", 5);
	}

	// The liquid contained in the container is independent, we set a copy
	// in each cloned copy.
	set("液体", ([
		"种类": "汤",
		"名称": "鸡汤",
		"剩": 5,
		"止渴" : 30,
		"额外函数" : (: extra_func :)
	]) );
	setup();
}

int extra_func()
{
  if (!query("液体/剩")) {
    write ("这罐鸡汤已经被你喝光了, 你顺手将它丢到隐密之处.\n");
    destruct(this_object());
    return 1;
  }
  this_player()->receive_heal("kee",10);
  return 0;
}
