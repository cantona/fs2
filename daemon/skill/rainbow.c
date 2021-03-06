//Designed by Wataru    2000/9/6
//进阶职业---忍者
//专用招式之一:远距离攻击类    漫天花雨手法
//特色，根据手中持有武器的不同，将有不同种类的攻击
//fs没有气劲(或称斗气)存在，只好以花费灵力为主，这里灵力就有一点像是斗气
//所有的威力与计算公式都会在调整，以后会考虑敌我双方的能力来决定命中度
//一般而言会以dodge为主要考量，威力会参考‘真.黑牙神功’的威力来决定
//且公式的计算会再多样化一点，特功的伤害也会再调整
//目前的威力，都只是为实验这样的skills，是否可以做出来
//最后，会再加上所谓的‘技巧熟练度’，用不同类的武器，有不同的熟练度
//然后，熟练度的高低，也会决定特功出现机率，与特功威力
//熟练度会是隐藏属性，目前会先加上去，但是目前只设定点数
//如下if (me->query("rainbow/fly/exp"))
//              me->add("rainbow/fly/exp",1);
//      else
//              me->set("rainbow/fly/exp",1);
//至于后来熟练度是换算成等级，或是说会受限于某一些skills的等级，到时候在设定
//当然，会另外作一个漫天花雨的特功，给每一类的武器(这三类)
//等熟练度到达一定等级，该特功的绝招才会出现
//例如可以 perform throwing.XXXXX   (此特功没有等级可以练)
//XXXX要等武器熟练度到一定程度才会出现，且里面的function也会check熟练度
#include <combat.h>
#include <ansi.h>
inherit SKILL;
void thunder_shot(object,object,object,int);
void double_dragon(object,object,object,int);
void pilibomb(object,object,object,int);
void world_rain(object,object,object,int);
void live_snake(object,object,object,int);
void shock_wave(object,object,object,int);

mapping *action = ({
        (["action":HIW"$N气集丹田，手中的$w闪出异样的光芒，"+
                        "$n感到一阵不安，仿佛危机四伏\n"+
                        "然而一切似乎都太晚，因为$w化成一到光芒，"+
                        "朝着$n而去，一切都是那么的快令人无法置信\n"+
                        "$N施展传说中的漫天花雨手法----"+HIM+"‘电光一闪’"NOR,
                "dodge":        -20,
                "damage":       250,
                "force":         50,
                "parry":        -10,
                "damage_type" : "烧伤",
                "post_action":  (: thunder_shot :),
        ]),
        (["action":HIW"$n眼前一花，已经失去了$N的身影，"+
                        "$n定睛往四周搜寻而去，想要发现$N的存在\n"+
                        "正当搜寻之时，$n发现自己犯了一个很大的错误"+
                        "因为背后已经出现两道破空之声!!!\n"+
                        "$N利用这一个空档，气运双手的$w之上，\n"+
                        "使出漫天花雨手法----"+HIM+"‘冰炎双龙’"NOR,
                "dodge":        -20,
                "damage":       250,
                "force":        50,
                "parry":        -5,
                "damage_type" : "冻伤",
                "post_action":(: double_dragon :),
        ]),
        (["action":HIW"$N利用分功化影神功幻化出数道身影，"+
            "消失在$n眼前了!!!!\n"+
            "正当$n为眼前变化所惊吓到时，$N身影已经出现在高空中\n"+
            "手中已经出现武林传说中的强力火器‘$w’蓄势待发!!!!\n"+
            "$n发现情况不妙，然而$N已经施展漫天花雨手法----"+
                HIM"‘雷霆旋风’\n"NOR,
                "dodge":        -20,
                "damage":       150,
                "force":        50,
                "parry":        -10,
            "damage_type" : "烧伤",
                "post_action":(: pilibomb :),
        ]),
(["action":HIW"$N怒吼一声，混和体内的杀气与斗气，爆出强烈斗气运转全身\n"+
        "$N看来打算施展武林传说中的神技，漫天花雨手法---"+HIM+
        "‘绝世花雨’\n"NOR,
                "dodge":        -10,
                "damage":       150,
                "force":        100,
                "parry":        -20,
            "damage_type" : "烧伤",
                "post_action":(: world_rain :),
        ]),
(["action":HIW"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"+
        "$N用漫天花雨手法--"+HIM+"‘漫游天际’"+HIW"去操控手中的$w \n"+
        "$w宛如灵蛇出洞一般，诡异的行动令$n，备感压力，难以反应\n"+
        "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"NOR,
                "dodge":        -10,
                "damage":       350,
                "force":        100,
                "parry":        -20,
                "damage_type" : "射伤",
                "post_action":(: live_snake :),
        ]),
(["action":HIW"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"+
        HIW"$N将斗气施展于$w，配合漫天花雨手法--"+HIM+"‘天地无用’\n"+
        HIW"$w高速的旋转起来，并且闪耀着魔幻般的光芒，令人目不瑕己\n"+
        HIW"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"NOR,
                "dodge":        -10,
                "damage":       400,
                "force":        100,
                "parry":        -20,
                "damage_type" : "射伤",
                "post_action":(: shock_wave :),
        ]),
(["action":"$N一招「风起云涌”，射出的$w以极端的速度飞往$n的$l去",
             "dodge":        -15,
             "damage_type" : "射伤",
                "damage":       100,
                "force":        100,
                "parry":        -10,
        ]),
});

int valid_learn(object me)
{
        object ob;
        //检查是否有解过忍者
        if ( me->query("quest/ninja") != 1)
                return notify_fail("想学？等你有资格了在说吧!!\n");
        //以后这里还要加上检查，如果有学dagger方面的，就不可以学这一招
        //或者是说，加上检查老师的部分
        if(me->query_skill("throwing",1) <100)
                return notify_fail("想要学漫天花雨手法？ 技巧这么差，改天在来吧。\n");

        if( !(ob = me->query_temp("weapon"))    ||(string)ob->query("skill_type")!="throwing")
                return notify_fail("拿点暗器吧....不然你要怎么学？\n");
        return 1;
}

int valid_enable(string usage)
{
        return usage=="throwing" || usage=="parry";
}

mapping query_action(object me, object weapon)
{//这里就是用来决定武器类型与特攻类型的地方
        int wea,i;
        object ob;

        ob = me->query_temp("weapon");
        wea= ob->query("fly-type");

        //先检查武器的飞行种类，来决定到底是哪一种武器，自然会有不同的特攻与叙述

        //1:轻型暗器    容易取得，威力弱，发出特功时，对手容易busy
        //2:火器类      取得困难，威力强，发出特功时，本身也很容易busy，但可以对付全体
        //3:锁链类      普通，威力普通，特功也普通
switch(wea)
        {//因为目前东西不够多，所以招式自然也不多
                case 1: //0-1   目前仅有2招
                        return action[random(2)];
                case 2: // 2-3  目前仅有2招
                        return action[random(2)+2];
                case 3: // 4-5  目前仅有2招
                        return action[random(2)+4];
                default://写个玩家用非专用武器的时候
                        return action[6];
        }
}

int practice_skill(object me)
{
        //暂定不能练习
        return 0;

        if( (int)me->query("kee") < 100
        ||      (int)me->query("force") < 50 )
                return notify_fail("你的内力或气不够，不能练漫天花雨手法。\n");
        me->receive_damage("kee", 100);
        me->add("force", -50);
        return 1;
}

/*目前不打算例外作perform
string perform_action_file(string action)
{
        return CLASS_D("killer")+"/rainbow/"+action;
}
*/
void thunder_shot(object me, object victim, object weapon, int damage)
{
  if( objectp(weapon) )
  {
        if( (int)weapon->query_amount()==1 )
        {
                  weapon->unequip();
         tell_object(me, "\n你的" + weapon->query("name") + "用完了！\n\n");
       }
       else
       {
        int am,sk_lv;

        sk_lv=me->query_skill("rainbow",1);
        if (me->query("atman") < 30)
                return ;
        if (me->query("rainbow/fly/exp"))
                me->add("rainbow/fly/exp",1);
        else
                me->set("rainbow/fly/exp",1);
        if (random(150) <sk_lv)
        {//初期几乎不会发动此招，但是高手几乎可以有很高的发动机率
                //轻型武器，以命中度为主，伤害力为辅，发动后，命中度95%
                if ( random(100)  < 94)
                {
                message_vision(sprintf(HIG"光芒在空气中引起异样的燃烧"+
                        "，出乎意料之外的转向天空，冲破云层"+
                        "异常的波动，\n引起了天地的变动"+weapon->query("name")
                +HIG"引爆闪电击向$n，面对此变化$n根本无法反应!!!!\n"NOR)
                                ,me,victim);
                 victim->receive_damage("kee",50+5*sk_lv);
                 victim->start_busy(1);
                 me->add("atman",-30);
                 COMBAT_D->report_status(victim, 1);
                }
        }
                weapon->add_amount(-1);
        }
  }
}
void double_dragon(object me, object victim, object weapon, int damage)
{
  if( objectp(weapon) )
  {
        if( (int)weapon->query_amount()==1 )
       {
                     weapon->unequip();
         tell_object(me, "\n你的" + weapon->query("name") + "用完了！\n\n");
      }
     else
      {
        int am,sk_lv;

        sk_lv=me->query_skill("rainbow",1);
        if (me->query("atman") < 40)
                return ;
        if (me->query("rainbow/fly/exp"))
                me->add("rainbow/fly/exp",1);
        else
                me->set("rainbow/fly/exp",1);
        if (random(200)         <       sk_lv)
        {//初期几乎不会发动此招，但是高手几乎可以有很高的发动机率
                //轻型武器，以命中度为主，伤害力为辅，发动后，命中度90%
                if ( random(100)  < 89)
                {
                message_vision(sprintf(HIG"$n立刻转身，打算闪躲开这一招"
                        +"，然而这又是所犯下的第二个错误!\n"
                        +HIR"火热的红光，由右侧快速的接近$n，仿佛一条正在吐火的火龙\n"
                        +HIB"异样的冻气，由左侧迅速的接近$n，仿佛一条浑身冻气的冰龙\n"
                        +HIM"双龙合为一体，冲向$n，给予$n难以置信的创伤\n"NOR),me,victim);
                 victim->receive_damage("kee",100+7*sk_lv);
                 victim->receive_wound("kee",500);
                 victim->start_busy(1);
                 me->add("atman",-40);
                 COMBAT_D->report_status(victim, 1);
                }
        }
                weapon->add_amount(-2);
       }
   }
}

void pilibomb(object me, object victim, object weapon, int damage)
{
 object *target;
 int i,j;

 target=me->query_enemy();
 i=sizeof(target);

  if( objectp(weapon) )
  {
        if( (int)weapon->query_amount()==1 )
       {
                     weapon->unequip();
         tell_object(me, "\n你的" + weapon->query("name") + "用完了！\n\n");
      }
     else
      {//基本素招几乎没有什么威力，因为火器不易取得，所以不一定每一次会使用
       //不过并没有命中度可言，因为每一次一定会中，不过在于霹雳弹是否发动
        int am,sk_lv;

        sk_lv=me->query_skill("rainbow",1);
        if (me->query("atman") < 30)
                return ;
        if (me->query("rainbow/bomb/exp"))
                me->add("rainbow/bomb/exp",1);
        else
                me->set("rainbow/bomb/exp",1);
        if (    random(sk_lv) > 70)     //发动机率很低 lv70以下没有发动机率
        {
                //发动之后，自己为了活命，必须要闪躲，所以会busy (2)
                message_vision(sprintf(weapon->query("name")+
        HIC"仿佛有生命似的，在场中迅速的旋转起来，形成一层层由气劲所构成的旋风\n"
        +"除了飞身到空中的$N之外，场内的人无一可以脱离此旋风气场\n"
        +"众人受制于旋风气场无法逃离，且不断被迫到旋风中心\n"
        +"这时候"+weapon->query("name")+"化成一道光球，由旋风中心击下爆发!!!\n"NOR)
                                ,me,victim);
         for(j=0;j<i;j++)
         {//威力暂定如此，等以后的真.黑牙神功，分功化影神功出现后，再调整公式
                target[j]->receive_damage("kee",200+10*sk_lv);
                target[j]->receive_damage("kee",(10*sk_lv));
                COMBAT_D->report_status(target[j], 1);
         }
         me->start_busy(2);
         me->add("atman",-30);
         weapon->add_amount(-1);
        }
        else
        {//大部分应该是没有发动的状态，主要是用来吓对手，让对手busy
                message_vision(sprintf(weapon->query("name")+
        HIC"仿佛有生命似的，在场中迅速的旋转起来，形成一层层由气劲所构成的旋风\n"
        +"除了飞身到空中的$N之外，场内的人无一可以脱离此旋风气场\n"
        +"众人受制于旋风气场无法逃离，且不断被迫到旋风中心\n"
        +"这时候"+weapon->query("name")+HIC"化成一道光球，被$N收回手中\n"
        +"场内所有人吓出一身冷汗，久久不能自己\n"NOR),me,victim);
         for(j=0;j<i;j++)
         {//威力暂定如此，等以后的真.黑牙神功，分功化影神功出现后，再调整公式
                target[j]->receive_damage("sen",random(3*sk_lv));
                target[j]->receive_damage("gin",random(3*sk_lv));
                COMBAT_D->report_status(target[j], 1);
                if (random(10) < 4)     //约有3成会busy
                target[j]->start_busy(2);
         }
        }
       }
   }
}


void world_rain(object me, object victim, object weapon, int damage)
{
 object *target;
 int i,j;

 target=me->query_enemy();
 i=sizeof(target);

  if( objectp(weapon) )
  {
        if( (int)weapon->query_amount()==1 )
       {
                     weapon->unequip();
         tell_object(me, "\n你的" + weapon->query("name") + "用完了！\n\n");
      }
     else
      {//基本素招几乎没有什么威力，因为火器不易取得，所以不一定每一次会使用
       //不过并没有命中度可言，因为每一次一定会中，不过在于霹雳弹是否发动
        int am,sk_lv;

        sk_lv=me->query_skill("rainbow",1);
        if (me->query("atman") < 60)
                return ;
        if (me->query("rainbow/bomb/exp"))
                me->add("rainbow/bomb/exp",1);
        else
                me->set("rainbow/bomb/exp",1);
        if (    random(sk_lv) > 80)     //发动机率很低 lv80以下没有发动机率
        {
                //发动之后，自己为了活命，必须要闪躲，所以会busy (2)
                message_vision(sprintf(
                HIW"$N手中的"+weapon->query("name")+"化成四道不同色彩的光影射出\n"
                +HIR"场内的空气似乎开始燃烧起来了，带着高热火焰的朱雀出现了!!!\n"
                +HIB"一道光影射入地下，并没有爆发，但是却引起强烈的地震!!\n"
                +HIG"在场地的另外一边，破空之声狂啸而出，青龙光影幻化而现\n"
                +HIC"随着青龙的出现，光影也幻化出白虎而出\n"
                +HIM"宛如幻影般的四道光影合为一体，在场内引起强烈的爆炸!!!\n"NOR)
                                ,me,victim);
         for(j=0;j<i;j++)
         {//威力暂定如此，等以后的真.黑牙神功，分功化影神功出现后，再调整公式
                target[j]->receive_damage("kee",200+random(12*sk_lv));
                target[j]->receive_wound("kee",(random(12*sk_lv)));
                COMBAT_D->report_status(target[j], 1);
         }
         me->start_busy(2);
         me->add("atman",-60);
         weapon->add_amount(-4);
        }
        else
        {//大部分应该是没有发动的状态，主要是用来吓对手，让对手busy
                message_vision(sprintf(HIW"$N手中的"+weapon->query("name")
                +"化成四道不同色彩的光影射出\n"
                +HIR"场内的空气似乎开始燃烧起来了，带着高热火焰的朱雀出现了!!!\n"
                +HIB"一道光影射入地下，并没有爆发，但是却引起强烈的地震!!\n"
                +HIG"在场地的另外一边，破空之声狂啸而出，青龙光影幻化而现\n"
                +HIC"随着青龙的出现，光影也幻化出白虎而出\n"
                +HIM"然而宛如幻影般的四道光影，再次回到$N手中，\n一点事情都没有发生"
                +HIM"不过场内的众人早已被如此影像所惊吓，几乎无力再战\n"NOR)
                                ,me,victim);
         for(j=0;j<i;j++)
         {//威力暂定如此，等以后的真.黑牙神功，分功化影神功出现后，再调整公式
                target[j]->receive_damage("sen",random(5*sk_lv));
                target[j]->receive_damage("gin",random(5*sk_lv));
                COMBAT_D->report_status(target[j], 1);
                if (random(10) < 3)     //约有2成会busy
                target[j]->start_busy(3);
         }
        }
       }
   }
}

void live_snake(object me, object victim, object weapon, int damage)
{
        int am,sk_lv;
        sk_lv=me->query_skill("rainbow",1);
        if (me->query("atman") < 35)
                return ;
        if (me->query("rainbow/chain/exp"))
                me->add("rainbow/chain/exp",1);
        else
                me->set("rainbow/chain/exp",1);
        if (random(180) <sk_lv)
        {       //初期几乎不会发动此招，但是高手几乎可以有很高的发动机率
                //锁链武器，特性普通，发动后，命中度70%
                if ( random(100)  < 70)
                {
                message_vision(sprintf(weapon->query("name")
                +HIG"在$N的操控下，突然爆出强烈气劲，将$n的武器弹开!!!!\n"
                +HIG"一股强大的压力，宛如排山倒海一般"
                +"，朝$n而去，无从闪避，完全命中\n"NOR)
                                ,me,victim);
                 victim->receive_damage("kee",100+6*sk_lv);
                 victim->start_busy(1);
                 me->add("atman",-35);
                 COMBAT_D->report_status(victim, 1);
                }
        }
}

void shock_wave(object me, object victim, object weapon, int damage)
{
        int am,sk_lv;

        sk_lv=me->query_skill("rainbow",1);
        if (me->query("atman") < 45)
                return ;
        if (me->query("rainbow/chain/exp"))
                me->add("rainbow/chain/exp",1);
        else
                me->set("rainbow/chain/exp",1);
        if (random(180) <sk_lv)
        {       //初期几乎不会发动此招，但是高手几乎可以有很高的发动机率
                //锁链武器，特性普通，发动后，命中度70%
                if ( random(100)  < 70)
                {
                message_vision(sprintf(weapon->query("name")
                +HIG"越转越快，已经无法分辨到底是何种东西，"
                +"只见到一道光影在$n上空旋转\n"
                +"$n感到难以呼吸，整个空气被逐渐压缩起来"
                +"，身体也越来越难以动弹\n"
                +"忽然"+weapon->query("name")+HIG+"静止在空中不动了？\n"
                +"被压缩的空气，瞬间被释放开来，"
                +"转换成强大的冲击波能量，将$N击飞到空中!\n"NOR)
                                ,me,victim);
                 victim->receive_damage("kee",100+6*sk_lv);
                 victim->start_busy(1);
                 me->add("atman",-35);
                 COMBAT_D->report_status(victim, 1);
                }
        }
}

