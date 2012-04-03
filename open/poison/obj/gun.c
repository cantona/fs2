#include <mudlib.h>
#include <ansi.h>

inherit ITEM;

void create()
{
  set_name( HIC"远程狙击枪"NOR , ({"Kill Gun" , "gun"}));
  set("long",
      "专为远程狙击设计, 命中率奇高, 仅有狙击手能使用。\n");
  set_weight(1);
  set("unit", "挺");
  seteuid(getuid());
}

void init()
{
  add_action("fire", "shot");
}

int query_auto_load()
{
return 1;
}

int fire(string str)
{
  object target,targetenv;
  
 if(this_player()->query("id") !="ranko")
  return notify_fail("你不会使用这挺需要高度技术的枪。\n");
  if(!str || str == "") 
    {
      write(HIW"你试射了一枪来测试弹道, 看来这枪正处在最佳的状况。\n"NOR);
      tell_room(environment(this_player()), HIC+this_player()->query("name")
                +HIW"举起狙击枪试射了一枪, 看来又有人要被暗算了。\n"NOR,
                ({this_object(), this_player()}));
      return 1;
    }
  target=present(str,environment(this_player()));
  if(!target) target = find_living(str);
  if(!target) {
  write(HIC+"大近视眼，看清楚目标再射击！\n"+NOR);
  return 1;}
  targetenv=environment(target);
  
  
  if(target != this_player())
   write( HIW"妳瞄准"HIC + (string)target -> query("name") + HIW"的眉心击出一弹"
         + ", "NOR + RED"准确地贯穿了他的脑袋！\n"NOR );
  else
  {
  write("远程狙击枪不能用来自杀。\n");
  return 1;
  }
  
  tell_room(environment(this_player()),""+HIC
            +(string)this_player()->query("name")
            +HIW"举起狙击枪, 瞄准"HIC + (string)target -> query("name")
            +HIW"的眉心准确地发出一颗子弹！\n"NOR , ({this_player() , target}));

  tell_room(environment(target) , HIW"忽然一声枪响, 只见一颗子弹准确地贯穿了"HIC
            + (string)target -> query("name")
            + HIW"的额头正中央！\n"NOR , ( { this_player() , target } ) );
     
  tell_object(target,
              HIW"忽然一声枪响, 一颗子弹已经贯穿了你的额头正中央！\n"NOR +
              "( 你"+RED"受伤过重，已经有如风中残烛，随时都可能断气。"NOR
              +" )\n");
  target -> set("env/immortal" , 0);
  this_object() -> destruct();
  target -> die();
   
  return 1;
}


