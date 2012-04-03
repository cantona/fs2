inherit NPC;
void create()
{
        set_name("秦云", ({ "chi un","chi","un" }) );
        set("class","badman");
        set("gender", "男性" );
        set("age", 45);
        set("long", "一脸尖嘴猴腮样，因做了一件亏\n心事而躲入恶人谷，不过却很少\n人知道他为何躲入谷内。\n");
        set("combat_exp",100000);
        set("max_kee",5000);
        set("kee",5000);
        set("max_sen",1500);
        set("sen",1500);
        set("max_gin",1500);
        set("gin",1500); 
        set("max_force",4000);
        set("force",4000);
        set("force_factor",10);
        set("bellicosity",2000);
        set("title","镇关东");
//        set("functions//level",30);
        set_skill("parry",80);
        set_skill("dodge",60);
        set_skill("sword",80);
        set_skill("badsword",100);
        set_skill("ghost-steps",100);
        set_skill("force",100);
        set_skill("badforce",200);
        map_skill("dodge","ghost-steps");
        map_skill("force","badforce");
        map_skill("sword","badsword");
        map_skill("parry","badsword");
        set_temp("apply/attack",40);
        set_temp("apply/armor",40);
        set_temp("apply/dodge",40); 
        set("inquiry",([
"亏心事" : "谁没做过亏心事ㄚ，我躲入谷中只是要干一件大事谁知....",
"谁知" : "谁知我千辛万苦偷来的书却又被偷了，小兄弟能帮我找回吗??",
"找回" : "好!!只要你帮我找回那本书，我就授你魔日剑法!!",
"书" : "那本书就是记载着我一身武学的魔日剑谱，你找到后也可自行修练",
"魔日剑谱" : "那本书就是记载着我一身武学的魔日剑谱，你找到后也可自行修练",
"魔日剑法" : "魔日剑法就是我纵横武林的武学，找回书我就教你",
]));
//        set("chat_msg_combat",({(: perform_action,"" :)}));
        setup();
        carry_object("/open/gsword/obj/sword.c")->wield();
}
void init()
{
  add_action("do_verify","verify");
}
int accept_object(object me, object obj)
{
        if( obj->query("name") == "魔日剑谱" )
          {
          command("pat "+getuid(me));
          command("say 哇～厉害厉害！竟能帮我找回魔日剑谱。");
         if( me->query_temp("get_badsword_book",1))
  {
          command("say 既然你帮我找回了魔日剑谱，照约定我就传你魔日剑法吧。");
          me->set("get_badsword",1);
          command("say 已传你部份剑法了，其他就从书上自己学习了。");
          command("say 要书就直接跟我要(verify book)吧");
          command("say 或者去跟司马烟学(llearn)习剑法");
  }
       else 
  {
       command("say 这不是你自己寻回来的！想骗我！！");
  }
          }
}
int do_verify(string arg)
{
object me,ob;
me=this_player();
ob=new("/open/badman/obj/sword_book.c");
 if( arg!="book")
   {
    command("say 你要什么东西？");
    return 1;
   }
if(me->query("get_badsword")!= 1)
      {
    command("say 你又没帮我找回书，我怎么给你ㄚ？");
    return 1;
      }
if (present("badsword book", me))
       {
    command("say 你已经有了不是吗？");
      return 1;
       }
   else
        {
    command("say 好好练吧！");
    ob->move(me);
         return 1;

        }
}
