//桥边人

inherit NPC;
string do_act();
string do_acc();
string ask_tesin();

void create()
{
        set_name("桥边人",({"man"}));
        set("gender","男性");
        set("age",50);
        set("class","blademan");
        set("str",10);
   set("long"," .\n");
        set("chat_chance",10);
        set("chat_msg",({
                "桥边人说:我好痛苦。\n"
                  }));

        set("inquiry",([
         "灯火" : (:do_act:) ,
         "回家" : (:do_acc:) ,
         "龙铁心" : (:ask_tesin:),
                      ]));
        add_action("do_act","act");
        add_action("do_acc","acc");
        set("combat_exp",1000000);
        setup();
        add_money("silver",1);
}
int accept_fight(object who)
{
 return notify_fail("桥边人说:我已够可怜了，还想要我打啊。\n");
}
void init() {
        object obj;

        ::init();
        if(interactive(obj=this_player()) && !is_fighting())

        {
        remove_call_out("greeting");
        call_out("greeting",2,obj);

                }
}
void greeting(object ob)
{
        command("think");
}
  string do_act()
{
        command("say 我就是被炎龙占据村落的居民。 ");
        command("say 炎龙看我强壮要我在这桥旁提着灯。");
        command("say 说是要替人打开死亡之道。");
        command("say 我还听说这桥有问题喔!");

 }
  string do_acc()
{
    command("say 咦?我以前是道士的事,怎么传出去了?");
    command("say 罢了.既然你已经知道了,就帮助你吧!");
    this_player()->move("/u/p/poloer/dragon/enterroom.c");
}
string ask_tesin()
 {
if (!this_player()->query_temp("find_tesin4"))
  {
  this_player()->set_temp("find_tesin5",1);
  return ("龙铁心?在我到这之前..他早就不在了.");
  }
else if (this_player()->query_temp("find_tesin4")==1)
  {
  this_player()->set_temp("find_tesin5",2);
  return ("龙铁心?在我到这之前..他早就不在了.");
  }
else if (this_player()->query_temp("find_tesin4")==2)
   {
  this_player()->set_temp("find_tesin5",3);
  return ("龙铁心?在我到这之前..他早就不在了.");
  }

}

void heart_beat()
{
        if( random(5) < 2 ){
        if(!is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
            if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
                           }
        }
        :: heart_beat();
}       
