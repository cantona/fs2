#include <ansi.h>
string ask_me(object who);
string do_mention(object who);
inherit NPC;
int j=0 ,k=1;
void create()
{
        set_name("颜子复", ({ "yen jifu","yen","jifu"}) );
        set("gender", "男性" );
        set("age",79);
        set("str",30);
        set("cps",30);
        set("cor",30);
        set("per",30);
        set("int",30);
        set("spi",30);
        set("con",30);
        set("kar",30);
        set("long",
                "他是郑士欣的师兄 ,为了出外找寻先祖逍遥子 ,而将掌门之位
让给了郑士欣 ,但他的剑术造诣无人可知 ,加上多年来苦心创
出的绝世剑招 ,更是深不可测.他看起来无精打采 . \n");
        set("force",3000);
        set("max_kee",3000);
        set("sen",7000);
        set("max_sen",7000);
        set("kee",3000);
        set("max_gin",7000);
        set("gin",7000);
        set("no_kill", 1);
        set("no_fight", 1);
        set_skill("literate",90);
        set_skill("shasword",100);
        set_skill("shaforce",100);
        set_skill("sha-array",140);
        map_skill("array","sha-array");
        set_skill("sha-steps",130);
        set("max_force",3000);
        set_skill("array",120);
        set_skill("move",150);
        set_skill("force",100);
        set_skill("dodge",100);
        set_skill("parry",90);
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        set_skill("sword",120);
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        set_skill("unarmed",200);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        set("force_factor",5);
        set("chat_chance_combat",70);
        set("chat_chance",10);
 
        set("inquiry", ([
                "郑士欣": "他是我师弟 ,最近听说使仙剑派变的相当强盛 .\n",
                "逍遥子" : "正是先祖 ,多年前和冥殿修罗一战后变失去了踪影 ,仙剑
            派用尽了任何方式 ,始终无法找到他老人家",
                "比试": (: ask_me :),
                "天鼓雷音": "这是师尊远赴魔界前所留下之物 ,无法轻易相赠 ,除非和我(比试)一场",
                "无精打采" : "师父临走前我答应过他老人家 ..不轻易动剑 ..",
        ]) );
        
        set("combat_exp", 1200000);
        set("attitude", "heroism");
        set("title","剑侠");
        setup();
        add_money("gold",40);
        carry_object("/open/gsword/obj/woodsword")->wield();

}

string ask_me(object who)
{
        set_name("颜子复" , ({"yen jifu","jifu","yen"}));
    set("title", "仙剑派第三代弟子");
        set("max_kee",7900);
        set("eff_kee",7900);
        set("kee",7900);
        set("no_kill", 0);
        set("have_ask_me",1);
        set("family/family_name","仙剑派");
        set("dragon-sword",1);
        set("nickname", HIW"绝代剑侠"NOR);  
        set("long",
                "他是郑士欣的师兄 ,为了出外找寻先祖逍遥子 ,而将掌门之位
让给了郑士欣 ,但他的剑术造诣无人可知 ,加上多年来苦心创
出的绝世剑招 ,更是深不可测.他看起来生气勃勃. \n");
        set("chat_chance_combat", 75),
        set("chat_msg_combat", ({
                (: this_object(), "special_att2" :),
                (: this_object(), "special_att" :),
                (: this_object(), "special_att3" :),
                "颜子复全身散发出一股摄人的气魄 !\n",
          
                               })); 
        kill_ob(this_player());
        if(!present("blood-river sword")){ 
        message("vision",
                HIM " \n"              
                "颜子复慢慢的抽出了腰间后的配剑 ..一把血红剑身的绝代好剑 .\n\n"
                ,environment(), this_object() );
        set("attitude","aggressive");
        set("bellicosity", 1000);
        set("pursuer", 1);
        set("force_factor", 12);
        set("force", 4700);
        set("max_force", 4700);
        set("combat_exp", 2500000);
        set("revealed", 1);
       message("vision","颜子复左手朝天一指 ..手上隐隐约约的飘起了一阵烟雾...\n\n"
           HIW"在烟岚散去后他的手中多了一把"+HIR"血河"NOR+"\n\n\n",
        environment(), this_object());
        command("unwield sword");
        carry_object("/open/island/eqs/sword1.c")->wield();
        return HIY"神剑"HIR"血河"HIY"出鞘 ,必饮鲜血而回 ,小子受死吧 !\n"NOR;
                                           }        
 }
int special_att()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR "
        颜子复长啸道 : 尝尝仙剑之极意 !接招了 !
        \n" NOR ,one);
        message_vision( " 
        颜子复平举剑喝道 :\n\n"+HIR"                      "HIC"仙"+HIR"--"+HIW"霞"+HIR"--"+HIC"残"+HIR"--"+HIW"光"+HIR"--"+HIC"闪"+HIR" "NOR+"\n\n",one);
        message_vision(HIB"
        剑气如海浪般的飞过来 !\n"NOR,one);
        message_vision(HIM"
        $N全身的血管都被剑气割破了 !\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",50+random(70));
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
        message_vision( HIR "
        颜子复低吟道 : 仙剑之极招 !!
        \n" NOR ,one);
        message_vision( "
        颜子复斜举剑喝道 :\n\n"+HIR"                         ***"+HIW"白"+HIR"**"+HIW"龙"+HIR"**"+HIW"飞"+HIR"**"+HIW"翔"+HIR"**"+HIW"闪"+HIR"*** "NOR+"\n",one);
        message_vision(HIR"
        你只看到眼前一片红白交错之光 !\n"NOR,one);
        message_vision(RED"
        $N全身上下布满着满是像被凶兽啃掉了的大小不等的伤口 !\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",60+random(70));
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
        message_vision( HIB"
        颜子复怒吼道 : 仙剑之禁断剑意 !接招了 !
        \n\n" NOR,one);
        message_vision(HIW"
        颜子复迅速的往你一刺 !只见一到白光从剑中闪出 !\n\n\n\n"
        "你看不清楚眼前到底出现了甚么东西 !\n"NOR
        ,one);
        message_vision(HIR"一股如喷泉般的血$N身上不停的喷出 !!\n\n"NOR
                       HIY"那个速度极快的东西仍然不停的以高速在噬咬$N的身体!!\n"NOR
                       "一条速度极快的"+HIW" 白龙 "NOR+"在$N身边不断的飞舞着 !! 
瞬间便将可怜的$N紧紧的缠绕着!!
        \n"NOR,one);
        one->receive_wound("kee",40+random(50));
        one->apply_condition("bleeding",10);
        one->start_busy(1);
        COMBAT_D->report_status(one);
        return 1;
}
 void die()                                                                 
 {
    object winner = query_temp("last_damage_from");        
    if(query("have_ask_me")==1)
 {
    new("/open/island/obj/bon.c")->move(environment(winner));   
    tell_object(winner,HIB"\n\n颜子复的怀中滚落出一件事物\n\n\n"NOR); 
           
  }                   
    ::die();                                                           
  }          











