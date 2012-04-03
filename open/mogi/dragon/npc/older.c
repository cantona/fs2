

//老者

inherit NPC;
string do_act();
string do_acc();
 int i=0;

void create()
{
        set_name("老者",({"older"}));
        set("gender","男性");
        set("age",50);
        set("class","blademan");
        set("str",10);
   set("long","一位看起来很憔悴的老人。 .\n");
        set("chat_chance",10);
        set("chat_msg",({
                "老者说:我的儿子怎么还不回来?\n"
                }));
      set("inquiry",([
 "儿子" : (:do_act:) ,
              "炎龙谷" : (:do_acc:),
        ]));
        add_action("do_act","act");
        add_action("do_acc","acc");
        set("combat_exp",1000000);
        setup();
        add_money("silver",1);
}
int accept_fight(object who)
{
 return notify_fail("老者说:我已经老了，动不了了。\n");
}
void init() {
        object obj;

        ::init();
        if(interactive(obj=this_player()) && !is_fighting()) 

        {
        remove_call_out("greeting");
        call_out("greeting",2,obj);
        add_action("do_say","say");
        }
}
void greeting(object ob)
{
        command("think ");
}
  string do_act()
{
        command("say 我的儿子几年前到炎龙谷后就一去不回了。 ");
        command("say 有谁能帮我找回来呢?");
        command("say 如果能找回来，一定有报酬。");
        command("say 他的名字是：杨格。");
        this_player()->set_temp("can_say",1);
        return "可以吗?";
 }
   void do_say(string str)
{
  object me;
  me = this_player();
  if(this_player()->query_temp("can_say")==1)
   {
  if(str=="可以")
  {
   //message_vision("$N说道 : 可以 \n",me);
        new("/u/p/poloer/dragon/obj/letter")->move(this_player());
   message_vision("老者说:那就麻烦了。\n",me);
   if(this_player()->query("gender")=="男性")
  command("say 那我交给你一封信 , 如果遇见我儿,请勿必交给他。");
  if(this_player()->query("gender")=="女性")
   command("say 那我交给妳一封信 , 如果遇见我儿,请勿必交给他。");
  command("smile");
  this_player()->delete_temp("can_say",1);
        }
  
  }
}

string do_acc()
{
object me;
me = this_player();
        command("say 那里是个很恐怖的地方，尤其是那只炎龙。 ");
        command("say 炎龙和它的子孙几年前把一座村落给占据了。");
        command("say 我的儿子刚好到那去作生意，就.......。");
        command("say 闲杂人等还是不要去的好。");
                command("say 不过听说把炎龙杀死后，......啊!我不能在说了。");
        return "想去吗?";
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
