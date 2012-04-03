#include <ansi.h>

inherit NPC;
inherit SSERVER;
string ask_moon();
string ask_sula();
int accept_kill(object who);
void create()
{
        set_name(HIM "天子" NOR, ({ "king" }) );
        set("title","当今皇上");
        set("gender", "男性" );
        set("age",50);
        set("str",50);
        set("cor",45);
        set("cps",35);
        set("int",50);
        set("long",
            "一位高大英挺的男人，言行举止中有着令人无法抗拒的威严。\n"
            "但似乎有些事困扰着他，因而显的有点郁郁寡欢。\n");
        set("class","fighter");
        set("clan_kill",1);
        set("del_delay",1);
        set("no_hole",1);
        set("no_plan",1);
         set("no_plan_follow",1);

          set("capital_king",1);
        set("combat_exp",15500000);
        set("attitude", "heroism");
        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
            (: exert_function, "recover" :)
            }) );
     set_skill("dodge",250);
         set_skill("unarmed",250);
      set_skill("kingfist",250);
        set_skill("parry",250);

      set_skill("force",250);
      set_skill("fireforce",250);
      set_skill("bss-parry",250);
      set_skill("bss-steps",250);
        map_skill("force","fireforce");
        map_skill("unarmed","kingfist");
        map_skill("dodge","bss-steps");
        map_skill("parry","bss-parry");
          set("force",150000);
         set("max_force",100000);
          set("force_factor",40);
        set("max_gin",30000);
        set("gin",30000);
        set("max_kee",30000);
        set("kee",30000);
        set("max_sen",30000);
        set("sen",30000);
        set("chat_chance", 15);
        set("chat_msg", ({
              "天子说: 朕最近心情很差。\n",
              "天子说: 后宫佳丽三千，各各争宠，叫朕怎忙得过来。\n",
             "天子说: 真该去练练帝王神功了。\n",
        }) );
		set("inquiry",([
	    "月半弯"  :  (:ask_moon:),
		"sula"  :  (:ask_sula:)
	]));
        setup();
          carry_object("/open/capital/obj/king-belt")->wear();
carry_object("/open/capital/obj/secret_book");
          carry_object("/open/capital/obj/king-boots")->wear();
          carry_object("/open/capital/obj/king-cloak")->wear();
          carry_object("/open/capital/obj/king-cloth")->wear();
          carry_object("/open/capital/obj/king-ring")->wield();
          carry_object("/open/capital/guard/gring")->wear();
          add_money("gold",1000);

}

void init()
{
         object me=this_player();
         int force,be;

         be=me->query("bellicosity");
         force=me->query("force");
         if(be > force)
         {
         kill_ob(me);
         accept_kill(me);
         }

        add_action("do_fight", "fight");
        add_action("do_fight", "kill");
        add_action("do_cmd","cmd");
}
int do_cmd(string str) {
 object who=this_player();
 if(str=="askgod king" || str=="askgod guard" || str=="askgod king guard") {
 who->start_busy(2);
 kill_ob(who);
 accept_kill(who);
} else if(str=="bak king" || str=="bak guard" || str=="askgod king guard") {
  who->start_busy(2);
  kill_ob(who);
  accept_kill(who);
} else if(str=="cmd throw king"  || str=="cmd throw guard"  || str=="cmd throw gua
rd"){
 who->start_busy(2);

 kill_ob(who);
 accept_kill(who);
}
 return 1;
}
int accept_object(object who,object ob)
{
        string ob_id;
        ob_id=ob->query("id");
        
        if(ob_id=="yua's letter")
        {
		if(this_player()->query("quests/moon")==1)
        return notify_fail("你要给几次啊???\n");
		if(!this_player()->query_temp("ask_moon7"))
        return notify_fail("想骗我吗??这不是弯儿的亲笔信!!\n");
	    command("say 这是弯儿亲笔所写的信,谢谢你帮朕找到她\n");
         command("say 朕总算知道她的下落,真是太好了,非常的谢谢你\n");
		 if(this_player()->query("gender")=="男性")
         { 
		  message("system",HIM"天子"HIR"大声说道："HIY"由于"HIC""+this_player()->name()+""HIY"
解开了镜月岛之谜,即日起朕允许他进入镜月岛。\n"NOR,users());
		}
        this_player()->set("quests/moon",1);
        new("/obj/money/diamond")->move(this_player());
		new("/obj/money/diamond")->move(this_player());
        new("/obj/money/diamond")->move(this_player());
		command("say 为了表达朕的谢意,这三颗钻石请你收下 \n");
		}
  return 1;
 }
string ask_moon()
{   object who;
    who = this_player();
    if(!this_player()->query_temp("ask_moon2"))
	return "嗯....这我可不清楚，你最好问问别人吧。";
	 command("say 你知道她在哪吗??快告诉我!!!");
	 command("say 你怎么会知道这件事 ?");
	 this_player()->set_temp("ask_moon3",1);
	 kill_ob(who);
     accept_kill(who);
}
//add by cgy...好玩而已
string ask_sula()
{   object who;
    who = this_player();
    if(this_player()->query("id")!="sula")
	return "嗯....你不是 sula问那么多干嘛??";
	 command("say 很好你终于来了!!!");
	 this_player()->set("title",HIG"狂想空间"HIY"永远的"HIW"卒仔"NOR);
	 message("system",HIM"天子"HIR"大声说道："NOR"查"HIC"复活邪神"HIY"(sula)"NOR"乙员，于狂想空间\n
	 打混多年，一路走来，始终如一"HIC"(的肉)"NOR"特赐予"HIG"狂想空间"HIY"永远的"HIW"卒仔"NOR"封号以资表扬。
	 
	            "HIM"钦此  "HIG"谢恩  \n"NOR,users());
	
}
int do_fight(string arg)
{
        object who;
        who = this_player();

          if (!arg || arg!="king")
                return notify_fail("你想攻击谁？\n");
        else {
                kill_ob(who);
                accept_kill(who);
        }

        return 1;
}

int accept_kill(object who)
{
         object ob, guard;
        ob = this_object();

        if( !present("kill guard", environment(ob)) ) {
          if (ob->query_temp("killking")!=1){
          tell_room(environment(ob),HIW"\n突然！冲出两位御前侍卫长！\n\n"NOR);
        guard = new(__DIR__"fuguard");
        guard->move(environment(ob));
        guard->command("defend king");
        guard->command("follow king");
        guard->kill_ob(who);
        guard = new(__DIR__"fuguard1");
        guard->move(environment(ob));
        ob->set_temp("killking",1);      
        guard->command("follow king");
        guard->kill_ob(who);
        tell_object(users(),HIR "御前护卫大叫：有刺客！快保护殿下！！\n" NOR);
        command("wear all");

}
         else {
              command("say 可恶  ...看我的帝王神功..");
              tell_object(this_player(),HIC"只觉无比厚重的压力硬往你身上压来\n"NOR
);
              this_player()->add("kee",-(this_player()->query("max_kee")/2));
    }

}
        return 1;
}
void heart_beat()
{     
        object enemy;
        object me=this_object();
        if(!me) return ;
          if(me->is_fighting())
		  {
        enemy=offensive_target(me);
if((me->query("kee") < me->query("max_kee")/10)&&(enemy->query_temp("ask_moon3")==1))
		  {
		   me->remove_all_killer();
		   command("say 自从她离开后我多次派人寻访不着,也许李逍遥知道她的下落吧");
             command("say 如果你找到她帮我把这封信交给她"); 
             new("/open/capital/obj/letter")->move(enemy);
             message_vision("皇上给了$N一封信 .\n",enemy);
             enemy->set_temp("ask_moon4",1);
		   }
         if(50 > random(100))
           {
        me->delete_busy();
        message_vision("$N舒展了一下筋骨，瞬间生龙活虎了起来!!!\n",me);
         }
         }
        ::heart_beat();
}
 void die()
 {   object ob;
     int i,j;
	 object me=this_object();
    object winner;
    if(!query_temp("last_damage_from")){
      ::die();
      return ;
    }
    else
      winner=query_temp("last_damage_from");
    if(!winner){
      ::die();
      return ;
    }
     winner->set("secret_book",1);
	 
		if(winner->query_temp("ask_moon3")==1)
          {
		   command("say 自从她离开后我多次派人寻访不着,也许李逍遥知道她的下落吧");
             command("say 如果你找到她帮我把这封信交给她"); 
             new("/open/capital/obj/letter")->move(winner);
             message_vision("皇上给了$N一封信 .\n",ob);
             winner->set_temp("ask_moon4",1);
		   }
		   else   
           {
            write("皇上说:想不到你竟敢弑君\n"); 
           }

          tell_object(users(),HIR"\n\n

   ‘啊～～～～～～ ’

    一声惨叫从皇城中传出, 划破了天际, 震撼了每个人的心


      ‘皇上驾崩啦～～～～’．．．．．．

    百姓纷纷面朝皇城的方向跪地磕头, 有些人甚至哭了起来

      太后大叫道: 可恶的"+((winner&&objectp(winner)==1)?winner->query("name"):"咕哩猫")+HIR", 竟敢以下犯上,

                凡我同胞, 人人得而诛之!!!!!
  \n\n"NOR);
  if( winner != 0 ) {
    log_file("KILL_KING", sprintf("%s(%s) 打败 天子 on %s\n"
      ,winner->query("name"),winner->query("id"), ctime(time()) ));
  }

    :: die();
 }
