inherit NPC;

string do_ask (object me);

void create()
{
         set_name("颦鬓儿",({"girl"}));
        set("long", "
离子寒的贴身ㄚ环，看起来聪明灵俐，头上绑着两条小辫子。 
");
        
        set("age", 15);
        set("int", 30);
        set("cps", 24);
        set("str", 23);
        set("cor", 22);
        set("spi", 29);
        set("con", 26);
        set("kar", 27);
        set("per", 29);
    set("combat_exp",2000);
    set("force",100);
	set("max_force",500);
      set_skill("dodge", 20);
         set_skill("parry", 20);
      set_skill("unarmed",10);


        set( "gender", "女性");


        set("limbs", ({ "头部",  "双脚", "双手", "背部" ,"腹部","腰部"}) );
     
        set("attitude", "peaceful");
        set("chat_chance", 10);
        set("chat_msg", ({
           "颦鬓儿小声的说:我家姑娘不在这喔...\n",
           "颦鬓儿说道:我家姑娘教我很多东西喔..\n",
        }) );
         set("inquiry",([
        "神兵利器" : "据我所知 , 当今的神兵利器 , 首推倚天剑和屠龙刀 !\n",
     "倚天剑" : "好像在郭襄手中吧,我不知道她在那ㄟ... ?\n",
      "屠龙刀"   : "屠龙刀再谢逊身上啊, 你去找他要 !\n",
          "刀冢" : "嗯 ,那是埋刀之地 ,藏有不少宝刀, 不过没两下子的人
   是无法拿到的..\n",
      "囚室" : "嗯, 那里乱可怕的,我不敢去！ \n",
         "麒麟角" : "这个我也不太清楚, 我家姑娘大概知道吧..\n",
         "凤凰蛋" :"我家姑娘说过在高大的梧桐树上居有这种奇兽..\n",
        ]));
    setup ();
 carry_object("/daemon/class/blademan/obj/topknot.c")->wear();
    }
void greeting(object ob)
{

           if( ob->query("gender")=="男性")
        {
          command("say 哇，不要乱走动喔...!");
   }
           if( ob->query("gender")=="女性")
   {
           command("say 妳好阿，大姐姐....^_^");
  }  }
