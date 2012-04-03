#include <ansi.h>
#include </open/open.h>
inherit F_VENDOR;
int done = 0;
void create()
{
	set_name("客栈老板",({"keeper"}));
	set("long","蜀中客栈的老板,他对你爱理不理的.你可以看看他有在卖甚么(list).");
	set("gender","男性");
	set("combat_exp",2000);
        set("age",25);
	set("str", 30);
        set("cor", 30);
	set("con", 30);
	set("vendor_goods", ({
	    COMMON_OBJ"pill2",
            "/obj/example/wineskin",
            "/obj/example/dumpling",
        }) );
        set("inquiry",([
            "展伯承" : "就是那个掉了东西还要怪别人的小子?\n",
            "搜索令" : "呵呵...你还想我会告诉你怎么搜我房子吗?...少呆了...\n",
            "名画" : "喔...你别听那小子乱讲,本店可是规规矩矩作生意的.\n",
            ]) );
        set_skill("dodge",30);
        set_skill("unarmed",60);
	set_skill("dagger",20);
        set_skill("parry",30);
	setup();
        carry_object("/obj/example/dagger.c")->wield();
        carry_object("/open/gsword/obj/robe")->wear();
             carry_object("/open/gblade/obj/picture");
        
}
void init()
{
  ::init();
  add_action("do_show","show");
}

int accept_fight(object who)
{
   return notify_fail("老板不愿与你动手.\n");
}

int accept_kill(object who)
{
   return notify_fail("老板不愿与你动手.\n");
}
      
int accept_object(object me,object ob)
{  
  if(ob->query("id") != "su_note")
  {
    command("say 谢了,不过我不需要.\n ");
    return 1;
  }
  write("老板脸色突变.\n");
  command("say 哼...量你也搜不出甚么来!!!\n");
  me->set_temp("have_note",1);  
/*  command("say 搜索令??? 要搜我的店,拿你命来换!!!\n ");
  if(done)
       return 1;
  done = 1;
  kill_ob(me);
*/  
  return 1;  
}
  
int do_show(string arg)
{ 
  object me;
  me=this_player();
  if(me->query_temp("see_blood"))
  {
    write("老板说: 你还知到甚么??...看来...饶不得你了!!!\n");
    kill_ob(me);
  }  
  else
    write ("看什么看啊!\n");
  return 1;
}     
