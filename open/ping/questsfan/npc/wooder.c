inherit NPC;
#include </open/open.h>
#include <ansi.h>
string do_key();
void create()
{
   set_name("强壮的樵夫",({"wooder"}) );
    set("gender", "男性");
    set("age",45);
    set("attitude", "peaceful");
    set("long","段家嫡族负责看哨的樵夫。\n");
    set("kee",20000);
    set("max_kee",20000);
    set("combat_exp",3200000);
   set("inquiry", ([
"木栅钥匙"         : (: do_key :),
   ]));
    setup();
  carry_object("/open/center/obj/torch");
  add_money("silver",20);
}
string do_key()
{
        object me=this_player();
        object key=new("/open/ping/questsfan/obj/key");
if(me->query_temp("key_ok")!=1)
{
   if( me->query("family/family_name")=="段家" && me->query("now_start")==1)
       {        command("say 守关四天王各有所好，你要随机应变！");
          message_vision("$N交给$n一只大木栅栅门钥匙。\n",this_object(),me);
          key->move(me);
me->set_temp("key_ok",1);
          return("祝你好运!");
        }
        else
{
          return("你说啥, 跟我有关系吗？\n");
}
}
else
  return("我不是给你了吗??\n");
}
