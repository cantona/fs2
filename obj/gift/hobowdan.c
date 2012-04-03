// hobowdan.c 荷包蛋
#include <ansi.h>
inherit ITEM;

void setup()
{}

void init()
{
        if(environment()==this_player())
        add_action("do_eat", "eat");
}

void create()
{
        set_name(HIY"荷包蛋"NOR, ({"ho bow dan", "dan"}));
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("unit", "片");
                set("long", "这是用少林绝学火云掌烘成的荷包蛋，据说吃一片可得100内力上限。\n");
                set("value", 0);
        }
        setup();
}

int do_eat(string arg)
{
        if(!id(arg))
          return notify_fail("你要吃什么？\n");

        if(this_player()->query("max_force") >= 5000)
          message_vision("$N吃下一片荷包蛋, 不过啥事也没发生!!\n",this_player());
        else{
          if(this_player()->query("max_force")+100 > 5000)
            this_player()->set("max_force",5000);
          else
          {
        this_player()->add("max_force", 100);
        this_player()->add("force",100);
        message_vision("$N吃下一片荷包蛋，只觉得自己的内力提升了一些 !\n", this_player());
        this_player()->add("gift/hobowdan", 1);
          }
        }
        destruct(this_object());
        return 1;
}

