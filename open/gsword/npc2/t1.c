#include <ansi.h>
inherit NPC;
string ask_test();
string ask_train();

void create()
{
        set_name(HIW"第一试炼者"NOR, ({ "testman"}) );
        set("gender", "男性" );
        set("age", 63);
        set("int", 26);
set("long","传说中专门锻炼仙剑派门人的守护者..你可以问他有关试炼的事。\n你亦可以询问他你还需要训练多久(ask testman about train)。\n");
        set("inquiry",([
        "试炼":(:ask_test:),
        "train" : (:ask_train:),

        ]));
        set("combat_exp",50000);
        set("max_kee",500);
        set("max_gin",500);
        set_skill("unarmed",50);
        set_skill("parry",50);
        set_skill("force",50);
        setup();
   }

string ask_test()
{
if (this_player()->query("quests/test")>199&& this_player()->query("quests/yan")==2)
 {
  this_player()->set("quests/yan",3);
  tell_object(this_player(),HIW"你已经通过第一试验了.所以我送你到第二试炼区去吧.\n"NOR);  
  message("system",this_player()->name()+HIW"通过仙剑第一试炼。\n"NOR,users());
  this_player()->set("title","[1;36m仙剑第一试炼剑侠[0m");
  this_player()->move("/open/gsword/room2/shaa1.c"); 
}
else if(this_player()->query("quests/yan")>2) {
  tell_object(this_player(),HIW"你已经通过第一试验了.所以我送你到第二试炼区去吧.
\n"NOR);
  this_player()->move("/open/gsword/room2/shaa1.c");
}
else
{
tell_object(this_player(),HIW"第一试验的目的在于锻炼你对仙剑武术的认知及了解..\n"NOR);
 return (HIW"因此你得往北方前进..并在试炼山谷中打倒200个试炼武者才行\n"NOR);
 }

}
string ask_train()
{

 int num;
 num=this_player()->query("quests/test",1);
 if (num<200)
   return sprintf("阁下目前打倒了%d个试炼武者 ,再加油吧!\n",num);
 else 
 return sprintf("阁下已经具有通过第一试炼的资格了..你可以再向我询问一次有关试炼的事!");
 }
