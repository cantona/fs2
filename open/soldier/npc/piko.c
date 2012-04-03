#include <ansi.h>
inherit NPC;
void create()
{
	object ob;
        set_name("皮古",({"pi ko","pi","ko"}));
        set("long","
        他是反乱军中扮演重要角色之一,反乱军的武器都是由他
        来打铸的,他一生中最得意的武器就是雨不沾,当然了还有
        更多厉害兵器都是经过他的手打铸出来的。

        ");
    set("gender","男性");
        set("title","名铁匠");
        set("combat_exp",200000);

         set("attitude","heroism");
        set("age",35);
        set("str",30);
        set("cor", 30);
	set("cps", 18);
        set("per", 20);
        set("int", 20);
        set("force",1000);
        set("max_kee",2500);
        set("kee",2500);
	set_skill("parry",50);
        set("max_force",1000);
        set("force_factor",5);
        set_skill("force",50);
        set_skill("unarmed",40);
        set_skill("lance",50);
        set_skill("power-lance",50);
	set_skill("dodge",50);
        set_skill("parry",40);
        set_skill("eagle-steps",30);
        map_skill("lance","power-lance");
        map_skill("dodge","eagle-steps");
        map_skill("parry","power-lance");
        set_skill("spforce",30);
        map_skill("force","spforce");
        set("list",([
        "木枪": ([
                "local":"/open/soldier/obj/wood",
                  "amount":20,
                "id":"wood",
                ]),
        "长枪": ([
                "local":"/open/soldier/obj/long",
                "amount":10,
                "id":"long",
                ]),
        "蛇戢":([
                "local":"/open/soldier/obj/snake",
                "amount": 5,
                "id":"snake",
                ]),
       "兽矛":([
                "local":"/open/soldier/obj/beast",
                "amount": 3,
                "id":"beast",
             ]), 
        ]));
	setup();
        ob=carry_object("/open/soldier/obj/soak");
        ob->wield();
}

void init()
{
	add_action("do_list","list");
        add_action("do_receive","receive");
}
int do_list(object me)
{
	string *name;
	int i;
        me=this_player();
        name=keys(query("list"));
        tell_object(this_player(),"现在所制造出来的武器数量:\n");
	for(i=0;i<sizeof(name);i++)
        tell_object(this_player(),sprintf("%10s%10d\n",name[i],query("list/"+name[i]+"/amount")));
	return 1;
}
int do_receive(string weapon)
{
	object ob;
        ob=this_player();
        if(this_player()->query("class")!="soldier")
	{
                command("say 你谁ㄚ !! 我怎么没看过你。\n");
		return 1;
	}
	if(!query("list/"+weapon))
	{
		command("say 你想要什么武器 ?\n");
		return 1;
	}
	if(present(query("list/"+weapon+"/id"),this_player()))
	{
                command("say 武器用坏了再来拿。\n");
		return 1;
	}
	if(query("list/"+weapon+"/amount")<=0)
	{
                command("say 你没看到我在赶ㄚ。\n");
		return 1;
	}

      if(query("list/"+weapon+"/id")=="long",this_player())
      {
         if (ob->query("combat_exp")<=500 ) 
         {
               command("say 你的磨练不够来向我拿长枪。\n");
               return 0;
         }
      }
      if(query("list/"+weapon+"/id")=="snake",this_player())
      {
         if (ob->query("combat_exp")<=5000 ) 
         {
               command("say 你的磨练不够来向我拿蛇戢。\n");
               return 0;
         }
      }
      if(query("list/"+weapon+"/id")=="beast",this_player())
      {
         if (ob->query("combat_exp")<=35000 ) 
         {
               command("say 你的磨练不够来向我拿兽矛。\n");
               return 0;
         }
      }
       
	ob=new(query("list/"+weapon+"/local"));
        ob->add_amount(2);
        add("list/"+weapon+"/amount",-1);
	ob->move(this_player());
	ob->set("no_drop",1);
	ob->set("no_give",1);
        message_vision( "$N拿给$n一把"+ob->name()+"\n",this_object(),this_player());
	return 1;
} 
