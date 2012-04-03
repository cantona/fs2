#include <ansi.h>
string ask_me(object who);
string do_angel(object who);
string do_mention(object who);
inherit NPC;
int j=0 ,k=1;
void create()
{
        set("title","天真活泼");
	set_name("鲁协廉廉",({"rusie lenlen","rusie"}));
	set("gender", "男性" );
        set("age",14);
        set("str",99+random(30));
        set("cps",99+random(30));
        set("cor",99+random(30));
        set("per",99+random(30));
        set("int",99+random(99));
        set("spi",99+random(99));
        set("con",99+random(30));
        set("kar",99+random(30));
	set("long",
		"可怜的看着四周，好像快哭了。似乎在寻找什么人....... \n");
        set("force",200);
        set("max_kee",9999);
        set("kee",9999);
        set_skill("literate",100);
        set_skill("shasword",230);
        set_skill("sword",230);
        set_skill("shaforce",150);
        set_skill("sha-steps",100);
        set("max_force",3000);
        set_skill("move",150);
        set_skill("force",200);
        set_skill("dodge",200);
        set_skill("parry",250);
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        set_skill("sword",190);
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        set_skill("unarmed",200);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        set_skill("cure",100);
        set("force_factor",10);
        set("chat_chance_combat",45);
        set("chat_msg_combat",({
        (:exert_function,"swordkee":),
        (: this_object(), "special_att3" :),
        }));  
        set("chat_chance",10);
        set("chat_msg", ({
                "洋子，洋子，妳在哪里？ \n",
		"啊。。。。鲁协跌倒了。。。。 \n",
                "你知道洋子在哪里吗？鲁协一双水汪汪的眼睛正纯真的着你。。。\n",
	}) );  
	set("inquiry", ([
		"洋子": "人家跟她出来玩，但是跟丢了：~~\n",
                "鲁协" : "就是我呀！！你要陪我去找洋子吗？\n",
                "修耐达" : "人家不知道嘛！：~~~~~\\n",
		"变身": (: ask_me :),
		"仙剑": "郑老师有亲自教我剑术哦。。。。\n",
                "可爱" : "洋子比我更可爱呀！我最喜欢她了！！\n",
	]) );
        
        set("combat_exp", 500000);
        set("attitude", "heroism");
carry_object("/open/killer/obj/fire_s.c");
	setup();
}

string ask_me(object who)
{
        set("title","暗黑魔法师");
        set_name("修耐达" , ({"dark magic","ds"}));
        set("long",
           "相貌极为英挺俊美 ,心高气傲的男子.他是传说中的超级魔法师，
具有无敌的传说，对于女孩子也是具有超级的吸引力。 \n");
        set("chat_msg", ({
                HIG"洋子，洋子，妳在哪里？....我爱妳！！\n"NOR,
		HIG"嘿。。。。小姐你有空吗？我们去喝咖啡。\n"NOR,
		HIG"哈！！我是宇宙无敌天下第一的修耐达啦！！\n"NOR,
                HIG"妳望着DS的眼睛，妳发现妳快情不自尽的爱上他。\n"NOR,
	}) );  
        set("chat_chance_combat",75);
	set("chat_msg_combat", ({
                (: this_object(), "special_att2" :),
                HIG"DS说：呆子，让你看看大爷我的魔法！！！\n"NOR,
                (: exert_function,"swordkee" :),
	        HIG"DS喝道 : 哈哈哈 !不要以为大爷我不会剑术！！看招！！\n"NOR,
	        (: this_object(), "special_att4" :),
	        HIG"DS说道 : 小鬼 ,对抗我的下场只有一条路，死！！\n",
                "DS全身布满令人难以相信的光芒 !\n"NOR,
                (: this_object(), "special_att" :),
                HIG"DS大笑道 : 真幸运，你可以看到我的超级杀招！！!\n"NOR,
	                       })); 
        kill_ob(this_player()); 
        set("inquiry", ([
                "洋子" : (: do_mention :),
                "变身" : (: do_angel :),
             ]));  
	message("vision",
		HIY " \n"
		"DS两眼透出一股诡异的红光 .\n\n\n"
		"DS不屑的说着 : 小鬼你也想杀我？ ..\n"
                "DS说道 : 好久没有动手了 ...好吧！送你一程到地狱去 ..\n\n"
                "DS慢慢的抽出的火魔剑 ..一把血红剑身的魔剑 .\n"
		,environment(), this_object() );
        set("attitude","friendly");
	set("pursuer", 1);
        set("bellicosity",500);
        set("force", 9999);
        set("max_force", 9999);
	set("combat_exp", 9999999+random(9999999));
        set("revealed", 1);
        message("vision","DS左手一探，手中多了一把魔剑"+HIC" 幻炎火魔剑"NOR+"\n",
        environment(), this_object());
command("wield iceger");
        return HIC"你纳命来吧!\n"NOR;
 }

string do_angel (object who)
{
        set("title","暗黑堕天使");
        set_name("路西法" , ({"dark angel","rucy"}));
        set("long",
           "天啊！！你不禁怀疑你的眼睛与你的存在。在你眼前的他，居然拥有六对翅膀。
难不成他就是传说中的大天使，站在所有天使的顶端，具有无比神力与魔力的路西法！。\n");
        set("chat_msg", ({
                HIG"哈。。。我又再次出现了！！人类们等死吧\n"NOR,
		HIG"接招吧！！神的惩罚---天空□剑！！！\n"NOR,
		HIG"嘿。。。。谁要是敢对洋子下手你就完了！！\n"NOR,
                HIG"闭上你的眼睛吧！！早死晚死都是要死！！！\n"NOR,
	}) );  
        set("chat_chance_combat",100);
	set("chat_msg_combat", ({
                (: this_object(), "special_att5" :),
                HIG"你眼前一花，你已失去路西法的身影，只听到喃喃咒文声。\n"NOR,
                (: this_object(), "special_att6" :),
	        HIG"你感觉到浑身火热了起来，四周似乎起了不一样的变化！\n"NOR,
	        (: this_object(), "special_att7" :),
	        HIG"压力，强大的重压。你感觉到难以置信的压力！！\n"NOR,
                (: this_object(), "special_att8" :),
                HIG"这是神最终的惩罚！！！你是无处可逃的！！！\n"NOR,
	                       })); 
        kill_ob(this_player()); 
	message("mud",
		HIY " \n"
		"哈。。愚蠢的人类！居然使我黑暗堕天使路西法再次重生！！\n\n"
		"所有幻想空间的玩家们，洗干净脖子吧！！\n"
"来自神的惩罚就要出现了---天空□剑！！\n\n"+this_player()->query("name")+"接招吧！！"NOR,users() );
        set("attitude","heroism");
	set("pursuer", 1);
        set("bellicosity",600);
        set("force",99999);
        set("max_force", 99999);
        set("max_gin",9999);
        set("eff_gin",9999);
        set("gin",9999);
        set("max_kee",99999);
        set("eff_kee",99999);
        set("kee",99999);
        set("max_sen",9999);
        set("eff_sen",9999);
        set("sen",9999);
	set("combat_exp", 99999999);
        set("revealed", 1);
        message("vision","路西法左手一探，手中多了一把魔剑"+HIC" 幻炎火魔剑"NOR+"\n",
        environment(), this_object());
        return HIC"你纳命来吧!\n"NOR;
}

int special_att()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIG 
        "DS闭上双眼，喃喃的唸着咒文，四周的天气似乎起了很大的变化\n" NOR ,one);
        message_vision( 
        "DS睁开双眼大喝道 :\n\n"+HIR"                      ***"+HIG"七"+HIR"**"+HIG"键"+HIR"**"+HIG"守"+HIR"**"+HIG"护"+HIR"**"+HIG"神"+HIR"*** "NOR+"\n",one);
        message_vision(HIC
        "天空中出现了七个异空间，朝你围了过来，你以无处可逃！！！\n"NOR,one);
        message_vision(HBGRN"$N全身上下似乎全部被空间分开了！，你的存在已不具任何意义！\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",99999+random(9999));
         COMBAT_D->report_status(one);
        return 1;
}

int special_att2()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR 
        "DS拨拨额头的头发轻笑说：像你这种笨家伙，也敢跟我挑战！！\n" NOR ,one);
        message_vision( 
        "DS举起右手大喝一声 :\n\n"+HIR"                         ***"+HIW"怒"+HIR"**"+HIW"龙"+HIR"**"+HIW"爆"+HIR"**"+HIW"炎"+HIR"**"+HIW"狱"+HIR"*** "NOR+"\n",one);
        message_vision(HIR"你只看到身体被一阵红白交错之炎火所围绕 !\n"NOR,one);
        message_vision(RED
           "$N全身上下陷入一片火海之中，肌肉都已呈焦黑 !\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",2000+random(1300));
         COMBAT_D->report_status(one);
        return 1;
}
int special_att3()
{
	object *me,one;
	int i;
	me=this_player()->query_enemy();
	i=sizeof(me);
	one=enemy[random(i)];
	message_vision( HIR"
	鲁协大叫着 : 小心哦，我不会控制剑法的强度耶。。。。\n" NOR,one);
	message_vision("						
	鲁协往你眼前的空气一刺 !你好像看到甚么东西从剑中钻出来似的 !\n\n"
	"你看不清楚眼前到底出现了甚么东西 !\n"
	,one);
	message_vision(HIR"一股如喷泉般的血$N身上不停的喷出 !!\n\n"NOR
	               HIY"那个速度极快的东西仍然不停的以高速在噬咬$N的身体!!\n"NOR
	               "一条速度极快的"+HIW" 白龙 "NOR+"在$N身边不断的飞舞着 !! 咬着缠着可怜的$N!
	\n"NOR,one);
	one->receive_wound("kee",500+random(9999));
	one->apply_condition("bleeding",10);
	one->start_busy(2);
	COMBAT_D->report_status(one);
	return 1;
}
int special_att4()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR "
        DS拨拨额头的头发轻笑说：像你这种笨家伙，也敢跟我挑战！！\n" NOR ,one);
        message_vision( "
        DS举起右手大喝一声 :\n\n"+HIY"                         ***"+HIM"灵"+HIY"**"+HIM"界"+HIY"**"+HIM"皇"+HIY"**"+HIM"龙"+HIY"**"+HIM"破"+HIY"*** "NOR+"\n",one);
        message_vision(HIG"你看到一条巨大的金黄色火焰龙朝你冲了过来 !\n"NOR,one);
        message_vision(GRN"
           $N你却丝毫动弹不得，是死亡的恐惧还是对DS的恐惧？!，但已不重要！！，因为你发现你已经没救了！\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",5000+random(10000));
         COMBAT_D->report_status(one);
        return 1;
}

int special_att5()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIG 
        "我主之力，上天之力，为我之剑，灭我之敌！！\n" NOR ,one);
        message_vision( 
        "回过身见路西法手中聚合光球\n\n"+HIW"                   ***"+HBMAG"干    坤    六    绝    光    弹"+HIW"***"NOR+"\n",one);
        message_vision(HIC
        "你根本不知道发生了什么事情，只觉得身体遭光球无情的袭击，无处可逃！\n"NOR,one);
        message_vision(HBGRN"$N全身上下似乎被光球冲击的体无完肤。\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",9999+random(9999));
         COMBAT_D->report_status(one);
        return 1;
}

int special_att6()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR 
        "路西法闭上了双眼，淡淡的说着。\n" NOR ,one);
        message_vision( 
        "传说中的禁咒！！\n"+HIR"                  ***"+HBMAG"死    黑    核    爆    裂    地    狱"+HIR"*** "NOR+"\n",one);
        message_vision(HIR"你只看到身体被一阵黑光交错之炎火所围绕 !\n"NOR,one);
        message_vision(RED
           "$N全身上下陷入一片炎狱之中，肌肉早已蒸发殆尽!\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",20000+random(10000));
         COMBAT_D->report_status(one);
        return 1;
}

int special_att7()
{
	object *me,one;
	int i;
	me=this_player()->query_enemy();
	i=sizeof(me);
	one=enemy[random(i)];
	message_vision( HIR"
	路西法的六对翅膀都竖立了起来！！一股强大的气充斥在路西法四周。\n" NOR,one);
	message_vision("这是属于我的最终杀招!\n\n"NOR,one);
	message_vision(HBMAG"      ----超     原     子     崩       坏      屴     起------"NOR,one);
        message_vision(HIG"粉碎，粉碎，一切都化成粉碎！！！你正努力使自己回复原形！！\n"NOR,one);
	one->receive_wound("kee",50000+random(30000));
	one->apply_condition("bleeding",10);
	one->start_busy(3);
	COMBAT_D->report_status(one);
	return 1;
}

int special_att8()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR "路西法化成一道光芒，射往天际！！，天空起了很大的变化！！！\n" NOR ,one);
        message_vision( "\n\n"+HIC"                         ***"+HIM"天"+HIY"**"+HIR"空"+HIY"**"+HIB"之"+HIY"**"+HIG"剑"+HIY"*** "NOR+"\n",one);
        message_vision(HIG"你看到由天空降下一道巨大的金黄色的光柱 !\n"NOR,one);
        message_vision(GRN"
           $N你却丝毫动弹不得，是死亡的恐惧还是对神的恐惧？\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",99999+random(99999));
         COMBAT_D->report_status(one);
        return 1;
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
           message_vision("DS大叫道 : 放你一马你还敢惹我 !我宰了你!\n",this_player());
           set("attitude","aggressive");
           command("follow "+this_player()->name());
           kill_ob(this_player()); 
           }
	   else
           {
           message_vision("洋子，我爱你！！ ..\n",this_player());
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
        if (this_object()->query("name") == "ds")
        {
          one->set("sp_title","天下第一");
          message_vision(HIR"传说中的魔人DS被打倒了!\n"NOR,one);
   	  message("system",HIY"传说中的魔人DS被"+one->name()+"打倒了 !\n\n"NOR,users());
 	  message("system",HIY"在此宣布 "+one->name()+"是天下最强 !!带种的可以来砍他!!\n\n"NOR,users());
        }
        if (this_object()->query("name") == "rucy")
        {
          message_vision(HIR"你以为我被你打倒了吗？\n"NOR,one);
          message_vision(HIR"别忘了，我是神的代理人！！我会再次出现的！！\n"NOR,one);
  	  message("system",HIY"
 	  暗黑大天使路西法被"+one->name()+"以生命将其封印住了 !\n\n"NOR,users());
          this_player()->move("/open/death/start");
        }
return ::die();
}
	                
