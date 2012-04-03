#include <ansi.h>
#include "/open/open.h"
inherit NPC;
int ask_yan();
void do_busy();
int done=0;
void do_heal();
object ob;
void create()
{
        set_name("陆灵生", ({ "lu lin sen", "lu" }) );
        set("long","一个年纪约七十多岁的慈祥老者，是郑士欣的师弟，仙剑派第三
代弟子。当年行走江湖时常孤身一人斩妖除魔，又因未逢敌手
久之被称为「寂寞剑”，为天下无敌手寂寞自叹之意。\n");
        set("gender", "男性" );
        set("inquiry",([
             "张凯":"喔~~~~你是说风雨楼那个张凯呀....我知道他...因为他先前
            曾是仙剑派的人",
             "封印区":"张凯当年就是因为擅闯封印区所以才会被逐出师门..连带的
            他的师兄也受同样的责罚....现在在山下的那个酒鬼就是
            他的师兄。",
             "封印区的雕像":"那是当年与祖师爷一起奋战天魔的三位大侠..也就是
            因为这样..所以在就以他们三位的雕像作为封印。",
             "雕像":"在祖师爷以仙剑连阳打败天魔之后...为增加封印区的力量..
            所以在雕像上各有一个缺口...而摆\在上面的就是传说中的
            开天三灵器....",
             "开天三灵器":"这是当年祖师以仙剑连阳为基础...请到铸剑师龙铁心
            将仙剑分铸成这三把名器...并加在雕像内....而目前你在江
            湖上看到的...只是依其原型所附至出来的赝品..不过要开封印
            还得要那三把赝品才可以..",
            "风青云" : (: ask_yan :),
             "龙铁心":"他呀.....他是数十年前的大剑师...我只知道这些了...
            其他的就跟你一样..一无所知.... ",
                      ]));
        set("class","swordsman");
        set("nickname","寂寞剑");
        set("age", 71);
        set("family/family_name","仙剑派");
        set("combat_exp",1000000);
                set("str", 54);
                set("cor", 24);
                set("cps", 18);
                set("per", 24);
                set("int", 42);
        create_family("仙剑派",3,"弟子"); 
        set_skill("shasword",100);
        set("dragon-sword",1);
	map_skill("sword","shasword");
        set_skill("shaforce",70);
        set_skill("sha-steps",80);
        set("max_force",3000);
        set("force",3000);
        set("max_gin",6000);
	set("force_factor",10);
        set("gin",6000);
        set("max_kee",6000);
	set("kee",6000);
        set("max_sen",6000);
	set("sen",6000);
        set("chat_chance_combat",10);
        set("chat_msg_combat",({
        (: perform_action,"sword.sha_kee" :)
        }));
        set("max_mana",200);
        set("mana",200);
        set_skill("force",60);
        set_skill("dodge",70);
        map_skill("dodge","sha-steps");
        set_skill("sword",100);
        map_skill("force","shaforce"); 
        set_skill("unarmed",90);
        setup();
        carry_object("/open/gsword/obj/silver_sword.c")->wield();
        carry_object("/open/common/obj/pill2");
        carry_object("/open/common/obj/pill2");
        carry_object("/open/common/obj/pill2");
        carry_object("/open/common/obj/pill2");
        carry_object("/open/common/obj/pill2");
        carry_object("/open/common/obj/plaster2");
        carry_object("/open/common/obj/plaster2");
        carry_object("/open/common/obj/plaster2");
        carry_object("/open/common/obj/plaster2");
        carry_object("/open/common/obj/plaster2");
        carry_object("/open/common/obj/plaster2");
        
        }
  void do_heal()
 {
   if(done <5 )
   if(this_object()->query("kee") < 0.2*this_object()->query("max_kee") )
   {
    command("eat pill");
    message_vision("陆灵生由怀里掏出药膏抹在伤口上\n",this_object());
    command("apply plaster");
    done++;
    }
  }
                                                             
int ask_yan()
{
  object me;
  me=this_player();
  if( me->query("fyan")==1)
{
command("say 你说风青云师叔阿，由于血魔的苏醒，他已经前往各门各派去请求援助，曾听他说会到一个清静的地方去修习更强的剑术，至于是哪里..我就无法得知了。\n ");
me->set("fyan",2);
}
else if (me->query("fyan")==7)
{
command("say 风青云师叔昨晚回来了..他到他当初练剑的地方去了..据说是在后山..不过好向没人知道在那~\n");
me->set("fyan",8);
}
  else
    {
   command("say 你问这做什么，去做你应该做的事吧。\n");
    }
     return 1;
}

void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
	int j;
        if(!winner)
	{
	::die();
	return ;
        }
	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj6/starry_diamond")->move(environment(winner));
	  message_vision(HIM"\n从陆灵生的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/starry_diamond",sprintf("%s(%s) 让陆灵生掉下了星空之夜钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/starry_diamond")->move(environment(winner));
	  message_vision(HIM"\n从陆灵生的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/prairie_diamond",sprintf("%s(%s) 让陆灵生掉下了星空之夜钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}