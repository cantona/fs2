inherit NPC;
inherit SSERVER;
object ob1=this_object();
object ob2;
int done=0;
void create()
{
	set_name("绿毛老祖",({"ru mou","ru"}));
	set("long","此人身长十尺 ,全身满是绿色的毛发 ,身上的肌肉因练功之故
已纠结不清 ,长出类似须须之类的肉根 ,看起来十分的诡异。 .\n");
	set("gender","男性");
        set("combat_exp",500000);
        set("attitude","aggressive");
	set("age",51);
	set("title","血魔");
	set("force",1000);
	set("max_gin",1000);
        set("max_kee",10000);
	set("max_force",1000);
        set("force_factor",20);
        set("str",100);
        set("chat_chance_combat",20);
        set("chat_msg_combat",({
        (: this_object(),"special_attack" :),
        }));
        set("cor", 40);
	set("per", 10);
	set("int", 30);
	set("cps",40);
	set("con", 30);
	set("spi", 15);
	set("kar", 40);
        set_skill("unarmed",100);
        set_skill("dodge",60);
       set_skill("parry",60);
	set_skill("move",50);
	set_skill("force",50);
	setup();
}

         
void init()
{
ob1=this_object();
set_heart_beat(1);
add_action("do_show","show");
}

int do_show(string str)
{
 if(!this_player()->query_temp("allow_read",1))
   {
    write("你要作什么??\n");
    return 1;
    }
 if(str!="blood_sword")
    {
    write("你要作什么??\n");
    return 1;
    } 
 else
  {
    write("绿毛老祖道 : 等等......这把剑你是打哪来的??聪明的话 ,乖乖的把剑
    给我 ,我还可饶你不死 \n");
    this_player()->set_temp("have_show",1);
   return 1;
   }
 }   
    
       
 int special_attack()
 {
   object ob;
   ob=this_object()->query_enemy();
   message_vision("[1;34m绿毛老祖眼露青光 ,手臂暴长向你而来 ,在你身上留下一道莫大的伤口.\n[0m",this_object());
   ob->add("kee",-50);
  return 1;
  }
     
 void greeting(object ob)
 {
  if( !ob || environment(ob) != environment() ) return;
  if(ob->query("family/family_name","仙剑派") )
     say("绿毛老祖道:哈!哈!仙剑派子弟来的好 ,让我送你上西天吧.\n ");
  else
    say("老祖不耐烦的说:这是我跟仙剑派之间的恩怨 ,小子少管闲事.\n");
  }
  
 int accept_object(object who,object ob)
 {
  ob2=who;
if( ob->query("id")!="blood_sword"||!who->query_temp("have_show",1) )
    {
      write("绿毛老祖道 :多谢你的礼物啊....这算是求饶吗??我可是不会手下留情的\n");
      return 0;
    }
   else
     {
      set_heart_beat(1);
      write("老祖道:多谢你将这把剑还给我,你如打赢我的话我可告诉你一个秘密 ,来吧.\n");
      write("\n老祖说罢 ,将手中赤麟一握 ,不知是不是错觉 ,你感到老祖气势已和刚刚
      大不相同 ,你感到些\许的恐惧\n");
      ob1->set("combat_exp",500000);
      ob1->set_skill("shasword",80);
      ob1->set_skill("sword",80);
      ob1->map_skill("sword","shasword");
      command("wield blood_sword");
      ob2->set_temp("have_give",1);
      return 0;
      }
 }         
          
         
 void die()
  {
   object me;
   me = this_object()->query_temp("last_damage_from");
      if(me->query_temp("have_give",1) && !done){
           this_object()->remove_all_killer();
           message_vision("小子...你本事不错麻....,竟然能打赢我 ,今天 ,我就破例作个好人 ,
           跟你说一个天大的秘密吧\n",this_object());
           tell_object(me,"绿毛老祖以腹语告诉你 : 秘密就在前山的岩穴中,你如有缘的话自然会发现\n");
           message_vision("哈....这是回报你还剑之情 ,下次见面 ,可别怪我手下不留情啊..\n",me);
           done++;
           me->set_temp("have_win",1);
           this_object()->add("kee",100);
           return ;

      }
   if (me && userp(me))  {
     me->add("bounds",100); 
     tell_room(environment(),sprintf("%s从老祖身上除下100根绿毛.\n",me->name()));
   }
   ::die(); 
  }
       
  void heart_beat()
   {
      if(!ob2) ob2=offensive_target(this_object());
      if(!ob2){
        ::heart_beat();
        return ;
      }
     if(ob2->query_temp("have_give",1))
     if(done==0)
     if( ob1->query("kee") < 0.2*ob1->query("max_kee"))
       {
         ob1->remove_all_killer();
         message_vision("小子...你本事不错麻....,竟然能打赢我 ,今天 ,我就破例作个好人 ,
         跟你说一个天大的秘密吧\n",ob2);
         tell_object(ob2,"绿毛老祖以腹语告诉你 : 秘密就在前山的岩穴中,你如有缘的话自然会发现\n");
         message_vision("哈....这是回报你还剑之情 ,下次见面 ,可别怪我手下不留情啊..\n",ob2);
         done++;
         ob2->set_temp("have_win",1);
        }
     ::heart_beat();
   }               
