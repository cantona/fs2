#include <ansi.h>
#define MASTER "suzukiami"
#define MOB_FILE __DIR__"pe-ca.c"
inherit ITEM;
string LONG_STRING="
精灵界的宝物，可以召唤出属于自己的座骑!!!
请使用invocation来召唤!!\n";
void create()
{
    seteuid(getuid());
     set_name(HIY "神奇宝贝球" NOR,({"caller"}));
     set_weight(500);
    set("unit","个");
     set("long",LONG_STRING);
     set("no_sell",1);
     set("no_auc",1);
     set("no_drop",1);
     set("no_give",1);
     set("no_steal",1);
     set("no_put",1);
     set("light_up",-1);
     set("light",1);
     set("value",0);
     setup();

}
void init()
{
    add_action("do_test","invocation");
}
int do_test()
{
    object me=this_player();
    object mob;
    string name;
    string temp;

    if(!me) return 0;
    name=geteuid(me);
    if(name!=MASTER && !wizardp(me) && userp(me))
    {
      temp=sprintf("%s 用了 %s 的caller 在%s\n",name,MASTER,ctime(time()));
      CBIP_D->record(temp,"/u/b/bss/record/caller");
      message_vision("$N对着$n说道：你不是我的主人，我将离你而去!!\n",this_object(),me);
      destruct(this_object());
      return 1;
    }
    if(me->query_temp("marks/ascend"))
      return notify_fail("你已经有一只座骑了，没必要再召唤另外一只!!!\n");
    mob=new(MOB_FILE);
    mob->move(environment(me));
    mob->set("combat_exp",me->query("combat_exp"));
    mob->do_ascend(me);
    message_vision("座骑召唤完成!!!\n",me);
    return 1;
}
int query_autoload()
{
    return 1;
}
