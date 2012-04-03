#include <ansi.h>
string ask_me(object who);
string do_mention(object who);
inherit NPC;
void do_specialatt();
void do_specialatt2();
void do_specialatt3();
void create()
{
	set_name("豪鬼", ({ "akuma"}) );
	set("gender", "男性" );
        set("age",35);
        set("str",50+random(30));
        set("cps",33+random(20));
        set("cor",36+random(30));
        set("per",39+random(30));
        set("int",31+random(30));
        set("spi",30+random(30));
        set("con",36+random(30));
        set("kar",30+random(40));
	set("long","相貌极粗旷, 英挺俊美, 心高气傲的男子,\n"+
	"他是上代仙剑掌门的关门弟子, 也就是郑士欣的师弟.\n");
        set("force",5000);
        set("max_kee",9000);
        set("kee",9000);
        set_skill("literate",10);
        set_skill("shasword",130);
        set_skill("shaforce",100);
        set_skill("sha-array",140);
        map_skill("array","sha-array");
        set_skill("sha-steps",100);
        set("max_force",5000);
        set_skill("array",120);
        set_skill("move",150);
        set_skill("force",100);
        set_skill("dodge",100);
        set_skill("parry",150);
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        set_skill("sword",190);
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        set_skill("unarmed",140);
        set_skill("shasword",190);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        set_skill("cure",100);
        set("force_factor",50);
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
        (:exert_function,"swordkee":),
        (: do_specialatt3 :),
        }));  
        set("chat_chance",90);
 set("chat_msg", ({
                "你感觉豪鬼的强气压迫着你 .\n",
		"豪鬼邪着眼瞪着你 . \n",
		"豪鬼的身边隐隐约约的冒出了一股金黄的气 .\n",
                "豪鬼紧紧的压住背后的剑 ..似乎是在忍耐甚么 ..\n",
	}) );  
	set("inquiry", ([
		"郑士欣": "他是我师兄 .\n",
                "bigcat" : "啊..啊...啊 ...师父 ..\n",
                "本门最强的人" : "我一定会比谁都强 ..",
		"比试": (: ask_me :),
		"关门弟子": "我是师父最后一个弟子 ..就这样 ..",
                "无精打采" : "师父过逝前我答应过他老人家 ..不轻易动剑 ..",
	]) );
        
        set("combat_exp", 900000+random(900000));
        set("attitude", "heroism");
        set("title","剑士");
	setup();
        add_money("silver",4);
        carry_object("/u/u/urd/obj/firerobe.c")->wear();
	carry_object("/u/u/urd/obj/hasword.c")->wield();
}

string ask_me(object who)
{
        set_name("邪豪鬼" , ({"akuma"}));
        set("id","evil akuma");
        set("chat_chance_combat", 190),
	set("chat_msg_combat", ({
                (: do_specialatt2 :),
                "豪鬼低声说道 : 别想跑 ...\n",
                (: exert_function,"swordkee" :),
	        "豪鬼喝道 : 哈哈哈 !好久没有人敢来跟我较量较量了!\n",
	        (: do_specialatt3 :),
	        "豪鬼低声说道 : 小鬼 ,对抗我的下场只有两条路 ..生......死 !\n",
                "豪鬼全身散发出一股摄人的气魄 !\n",
                (: do_specialatt :),
                "豪鬼大笑道 : 今天我要大大的杀一场 !\n",
	                       })); 
        kill_ob(this_player()); 
        set("inquiry", ([
                "bigcat" : (: do_mention :)
             ]));  
	message("vision",
		HIY " \n"
		"豪鬼两眼透出一股诡异的红光 .\n\n\n"
		"豪鬼低声的说着 : 来吧 ..忠于基本剑法的正统的剑客 ..\n"
                "豪鬼说道 : 好久没有杀人了 ...我可控制不住了 ..\n\n"
                "豪鬼慢慢的抽出了背后的豪剑 ..一把血红剑身的豪剑 .\n"
		,environment(), this_object() );
        set("attitude","aggressive");
	set("pursuer", 1);
        set("force", 9000);
        set("max_force", 9000);
	set("combat_exp", 1000000+random(1000000));
        set("revealed", 1);
       message("vision","豪鬼左手朝天一指 ..手上隐隐约约的飘起了一阵烟\n"
           "烟散去时 ...豪鬼的手中多了一把仙剑"+HIC" 波仙蓝剑"NOR+"\n",
      environment(), this_object());
        command("unwield sword");
        carry_object("/u/u/urd/obj/testsword.c")->wield();
        return HIC"你纳命来吧!\n"NOR;
	 
 }
void do_specialatt()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR "
        豪鬼大叫道 : 尝尝仙剑之极意 !接招了 !
        \n" NOR ,one);
        message_vision( " 
        豪鬼平举剑喝道 :\n\n"+HIR"                         ***"+HIG"仙"+HIR"**"+HIG"气"+HIR"**"+HIG"斩"+HIR"**"+HIG"虎"+HIR"**"+HIG"剑"+HIR"*** "NOR+"\n",one);
        message_vision(HIC"
        剑气如海浪般的飞过来 !\n"NOR,one);
        message_vision(RED"
        $N全身的血管都被剑气割破了 !\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",200+random(300));
         COMBAT_D->report_status(one);
return ;
}
void do_specialatt2()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR "
        豪鬼大叫道 : 尝尝仙剑之极意 !接招了 !
        \n" NOR ,one);
        message_vision( "
        豪鬼斜举剑喝道 :\n\n"+HIR"                         ***"+HIW"白"+HIR"**"+HIW"龙"+HIR"**"+HIW"飞"+HIR"**"+HIW"舞"+HIR"**"+HIW"呀"+HIR"*** "NOR+"\n",one);
        message_vision(HIR"
        你只看到眼前一片红白交错之光 !\n"NOR,one);
        message_vision(RED"
        $N全身上下布满着满是像被凶兽啃掉了的大小不等的伤口 !\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",200+random(300));
         COMBAT_D->report_status(one);
return ;
}
void do_specialatt3()
{
	object *me,one;
	int i;
	me=this_player()->query_enemy();
	i=sizeof(me);
	one=enemy[random(i)];
	message_vision( HIR"
	豪鬼大叫着 : 尝尝仙剑之极意 !接招了 !
	\n\n" NOR,one);
	message_vision("						
	豪鬼迅速的往你眼前的空气一刺 !你好像看到甚么东西从剑中钻出来似的 !\n\n"
	"你看不清楚眼前到底出现了甚么东西 !\n"
	,one);
	message_vision(HIR"一股如喷泉般的血$N身上不停的喷出 !!\n\n"NOR
	               HIY"那个速度极快的东西仍然不停的以高速在噬咬$N的身体!!\n"NOR
	               "一条速度极快的"+HIW" 白龙 "NOR+"在$N身边不断的飞舞着 !! 咬着缠着可怜的$N!
	\n"NOR,one);
	one->receive_wound("kee",50+random(100));
	one->apply_condition("bleeding",10);
	one->start_busy(3);
	COMBAT_D->report_status(one);
return ;
}
string do_mention(object who)
{ 
      /*
        object *me,one;
        int i;
        me = this_player()->query_enemy();
        i = sizeof(me);
        one = enemy[random(i)]; 
        */
           if( this_player()->query_temp("passkill",1) )
           {
           message_vision("豪鬼大叫道 : 放你一马你还敢惹我 !我宰了你!\n",this_player());
           set("attitude","aggressive");
           command("follow "+this_player()->name());
           kill_ob(this_player()); 
           }
	   else
           {
     message_vision("豪鬼惭愧\的说道: 师父 ,弟子错了..\n",this_player());

           set("attitude", "heroism");
           command("surrender");
           command("follow none");
           this_player()->set_temp("passkill",1);
           }
	return HIC"........呜...\n"NOR;
}
void die()
{
	object *me,one;
        int i;
        me = this_player()->query_enemy();
        i = sizeof(me);
        one = enemy[random(i)];
        one->set("sp_title","天下第一");
        message_vision(HIR"
  	最强的剑客豪鬼被打倒了!\n"NOR,
                one);
 	message("system",HIY"
 	最强的剑客豪鬼被"+one->name()+"打倒了 !\n\n"NOR,users());
 	message("system",HIY"
 	在此宣布 "+one->name()+"是天下最强 !!带种的可以来砍他!!\n\n"NOR,users());
return ::die();
}
	                
