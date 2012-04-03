// bird_food.c by powell

#include </open/open.h>
inherit COMBINED_ITEM;

void create()
{
	set_name("鸟食",({"bird food","food"}));
        set("long","一大包的鸟食, 可以用来喂食 (feed) 鸟儿。\n");
        set("unit","包");
        set("base_unit","包");
        set("value", 500);
        set("base_weight", 500);
        set_amount(1);
        setup();
}
void init()
{
        add_action("do_feed","feed");
}

int do_feed()
{
          object who=this_player();
       int i;
        message_vision("$N把一大包的鸟食撒在地上。\n",who);
        if (who->query_temp("can_feed")) {
        message_vision("屋顶上的和平鸽看到地上的食物, 开始挥动翅膀, "+
                       "向地上飞了过来。\n",who);
          for(i=0;i<5;i++)
        new(BAD_NPC"dove")->move(BAD_ROOM"b16");
        }
        else
        tell_object(who,"然后你抬头望了望天空, 一只鸟儿也没有。\n");
       add_amount(-1);
	return 1;
}
