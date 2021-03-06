// egg.c by nako

inherit ITEM;
#include <ansi.h>

void create()
{
        set_name("生鸡蛋", ({ "egg" }) );
	set_weight(80);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("long", "一个鸡蛋, 你可以吃它或拿来砸(Throw)人。\n");
		set("unit", "个");
                set("value", 5);
                set("食物", ([
                    "剩" : 2,
                    "供应" : 20,
                ]) );
	}
	setup();
}

void init()
{
     add_action("do_throw", "throw");
}

int do_throw(string str)
{
     object target,targetenv,me;
     me = this_player();
     if(!str || str == "" )
     {
         write("你一下把鸡蛋丢在地上, 打破了。\n");
         tell_room( environment ( me ), me -> query("name") +
                   "一下把一个鸡蛋丢到地上打破。\n",
                    ( { this_object() , me } )
                  );
         destruct( this_object() );
         return 1;
     }
     target = present ( str, environment( me ) );
     if( !target ) target = find_player( str );
     if( !target ) {
                     write ("你想砸谁呢?\n");
                     return 1;
                   }
     if( !wizardp( me ) )
     {
     if( wizardp( target ) )
         {
           write("你把鸡蛋高高地掷向天空....最后鸡蛋掉下来砸到你自己身上！\n");
           destruct( this_object() );
           return 1;
         }
     }
     targetenv = environment( target );
     if( target != me )
        write ("你拿起鸡蛋向" + target->query("name") + "砸去！\n");
     else{
           write ("你拿着鸡蛋往自己的头上砸下去！\n");
           tell_room( environment ( me ), me -> query("name") +
                      "拿起鸡蛋往自己的头上砸！\n",
                      ( { this_object() , me } )
                    );
           me -> add("bellicosity", -5);
           if( me -> query("bellicosity") < 0 ) me -> set("bellicosity", 0);
           destruct( this_object() );
           return 1;
         }
     tell_room( environment ( me ), me -> query("name") +
                "拿起鸡蛋向" + target -> query("name") + "砸过去！\n",
                ( { me , target } )
              );
     tell_room( environment ( target ), 
                "忽然一颗鸡蛋飞来打在" + target -> query("name") +
                "的身上, 弄得他全身黏糊糊的！\n",
                ( { me , target } )
              );
     tell_object( target,
                   HIW"" + me -> name() + "忽然丢一颗鸡蛋砸到你身上, "
                   + "弄得你身上黏糊糊的！\n" NOR,
                  ( { me , target } )
                );
     tell_object( me,
                  HIC"只见鸡蛋准确地砸在" + target -> query("name") +
                  "的身上, 弄得他身上黏糊糊地一片！\n"NOR,
                  ( { me , target } )
                );
     target -> add("bellicosity", -1);
     if( target -> query("bellicosity") < 0 ) target -> set("bellicosity", 0);
     destruct( this_object() );
     return 1;
}
