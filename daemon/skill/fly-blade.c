// Edit by pzp
// copy from appo (经过pzp 同意) 请勿在翻版.. !!
// 苦思而成之刀道之境 version 1.0
// 不可翻板
// version 2.0 万般接诸于刀意
// 前九招之post_action 威力调弱 主攻放在七式刀意
#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;
void gold_fluid(object me, object victim, object weapon, int damage);
void light(object me, object victim, object weapon, int damage);
void back_blade(object me, object victim, object weapon, int damage);
void blood(object me, object victim, object weapon, int damage);
void dust(object me, object victim, object weapon, int damage);
void seven(object me,object victim,object weapon,int damage);
void star(object me, object victim, object  weapon, int damage);
void water(object me, object victim, object weapon, int damage);
void busy(object me,object victim,object weapon,int damage);
void water(object me, object victim, object weapon, int damage);
void temp(object me, object victim ,object weapon, int damage);
mapping *action = ({
// 1
      ([
               "action"     :
HIG"\t【"+HIW"飞流九刀"+HIG"】"+NOR"第一式"+CYN" o o o《飞千流》\n\n"+HIC
"$N电击般格掠向前，千百条绚灿明亮的"+HIY"刀芒"+HIC"，参差不齐的在同一时间，像炸开了一朵"+HIW"光球"+HIC"般朝四周飞射掠舞，这显然并不单纯是些光芒，光芒的后面，还隐铁着一片魔鬼利会般的刃。还没有来得及喘息的"+HIM"$n"+HIC"目光一眩，已觉得满天体为金流布满"NOR,

                "dodge"      :                30,
                "parry"      :                20,
                "damage"     :                250,
                "force"      :                400,
                "post_action" :             (: gold_fluid :),
                "damage_type":               "砍伤"
        ]),
//2
        ([
                "action"     :
HIG"\t【"+HIW"飞流九刀"+HIG"】"+NOR"第二式"+GRN" o o o《血染刃》\n\n"
+HIW"$N"+HIC"原地翻身，手腕一抓，$w"+HIC"已有如怒龙出困般，挟着强猛的功力笔直射出，倘的右臂同时微弯条挥，$w"+HIC"「嗡”"+HIC"的一颤，一把金刀顿时幻映出一个组成轮形的"+HIW"十三道光芒"+HIC"，闪射伸缩着暴迎而去！"NOR,
                "dodge"      :                40,
                "parry"      :                15,
                "damage"     :                280,
                "force"      :                400,
                "post_action" :             (: light :),
                "damage_type":               "破体刀伤"
        ]),
//3
        ([
                "action"     :
HIG"\t【"+HIW"飞流九刀"+HIG"】"+NOR"第三式"+HIB" o o o《倒夺魂》\n\n"
+HIW"$N"+HIC"双目中煞气顿现，他在$w"+HIC"的强烈抖动中，上身蓦地偏斜，$w"+HIC"在斜身之际扬冲而起，却在刀首指天的刹那，猝然自左臂之下反穿而出，这出刀之劲，又快又狠，迅捷得似一下子追戮上千百年以前流去的时光！"NOR,

                "dodge"      :                 35,
                "parry"      :                 20,
                "damage"     :                  300,
                "force"      :                 400,
                "post_action" :               (: back_blade :),
                "damage_type":               "严重刀伤"
        ]),
//4
        ([
               "action"      :
HIG"\t【"+HIW"飞流九刀"+HIG"】"+NOR"第四式"+HIR" o o o《网凝红》\n
"+HIC"刀刃的飞戮隐映于不规则的"+HIY"金色网芒"+HIC"里，$w"+HIC"已组合成一片层层重重的寒芒刀山，毫无空档的包卷土来，有隐隐的风雷之凿，空气也在激荡呼号！蓦地"+HIM"$n"+HIC"尖号一声打着转子摔了出去，满空的鲜血喷洒如雨！"NOR,
                "dodge"      :                 -50,
                "parry"      :                 -20,
                "damage"     :                  300,
               "force"      :                 400,
               "post_action" :             (: blood :),
                "damage_type":               "严重砍伤"
        ]),
//5
       ([
                "action"     :
HIG"\t【"+HIW"飞流九刀"+HIG"】"+NOR"第五式"+YEL" o o o《尘归土》\n
"+HIW"$N$w"+HIC"如电，卷起波波层层的芒彩力迎"+HIM"$n"+HIC"，刀芒伸缩不定的协同挟拿，空气中顿时充满了刃锋割掠的锐啸，$w"+HIC"所带出的劲力也似是陡然变得沉重了，顶端的$w"+HIC"锋刃却那么快捷的切向敌人颈项！"NOR,
                "dodge"      :                 -50,
                "parry"      :                 -20,
                "damage"     :                  300,
                "force"      :                 400,
              "post_action" :             (: dust :),
                "damage_type":               "刀伤"
        ]),
//6
        ([
                "action"     :
HIG"\t【"+HIW"飞流九刀"+HIG"】"+NOR"第六式"+HIC" o o o《星落寂》\n
"+NOR"$w"+HIC"伸缩翻飞，快斩狠截，神鬼莫测的瞬息间变幻万千，在眨眼里冲舞俯卷，刀影飞闪，像"+HIW"银河"+HIC"的"+HIC"群星崩落"+HIC"，$w"+HIC"密集而狂暴的自四面八方罩下！在旋奔之间，"+HIW"$n"+HIC"已如星转般飞旋而去！"NOR,
                "dodge"      :                 -50,
                "parry"      :                 -20,
                "damage"     :                  300,
                "force"      :                  400,
                "post_action" :               (: star :),
                "damage_type":                "杀伤",
              ]),
//7
             ([
                "action"     :
HIG"\t【"+HIW"飞流九刀"+HIG"】"+NOR"第七式"+HIG" o o o《七欲灭》\n
"+NOR"$w"+HIC"的芒彩奇幻的纵跳飞舞着，一刹东，一刹西，忽而右，忽而左，闪动得有如一个无形的，古怪的"+HIY"精光"+HIC"，$N的出手攻拒却又是那般惊人的准确，几乎每在招展式现之时都已将"+HIW"$n"+HIC"的攻击与防卫的部位拿捏死了！ "NOR,

                "dodge"      :                 -50,
                "parry"      :                 -20,
                "damage"     :                  300,
                "force"      :                  400,
              "post_action"   :              (: seven :),
                "damage_type":                "刀伤",
                ]),
//8
             ([
                "action"     :
HIG"\t【"+HIW"飞流九刀"+HIW"】"+NOR"第八式"+BLU" o o o《九泉水》\n
"+HIC"$N右臂倏翻猝扬，只见$w"+HIC"金芒溜溜，纵横交织，却又像极西的电闪，仿佛$N方才出手就已收式，$n似是不敢相信自己的眼睛，寒光突闪，劲风中带着"+HIG"「呛郎郎”"+HIC"的环震之声抖出三个圆弧，$N的$w"+HIC"己"+HIM"「削”"+HIC"声尖啸，在一片金芒中砍向$n左胁"NOR,
                "dodge"      :                 -50,
                "parry"      :                 -20,
              "damage"     :                  300,
                "force"      :                  500,
                "post_action" :              (: water :),
                "damage_type":                "杀伤",
                     ]),
//9
             ([
                "action"     :
HIG"\t【"+HIW"飞流九刀"+HIW"】"+NOR"第九式"+HIY" o o o《金轮测》\n
"+HIC"只见天地之间"+HIW"金芒闪烁"+HIC"，有如千万个"+HIY"金球"+HIC"一起炸裂，又像空中的"+HIR"烈阳"+HIC"突然移近了百十倍，豪光万道，火焰遍野，而风号如啸，其声怪异凄怖得足能撕裂人们的腑脏，咻咻的锐气排空四溢，几乎成为有形的"+HIB"流芒o o o o o o\n\n
                         "+HIW"这便是"+HIC" 【飞流九刀】"+HIW"法的精华所聚，一代
                         武中之霸"+HIM"$N"+HIW"的终生心血所在亦大半在此\n"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               350,
                "force"      :                  500,
                "post_action" :             (: busy :),
                "damage_type":                "刀气贯穿之伤",
              ]),
//10
             ([
                "action"     :
HIG"【"+HIW"飞流九刀"+HIW"】"+HIC"\t七式刀意\n"
+HIW"\t\t\t～"+HIM"　困　"+HIW"～　"+HIM"愁"+HIW"　～　"+HIM"城"+HIW"　～\n\n"
+HIR"一片浩浩无际的劲气，仿佛九天之上，绵绵不绝的罡\风，又似瀚海之内，滔滔不尽的波涛，含看无可比拟的巨大力量，向$n卷合而至。"NOR,
                "dodge"      :                 -50,
                "parry"      :                 -20,
                "damage"     :                 400,
                "force"      :                  500,
                "post_action" :             (: temp :),
                "damage_type":                "刀气贯穿之伤",
              ]),
//11
            ([
                "action"     :
HIG"\t【"+HIW"飞流九刀"+HIW"】"+HIC"\t七式刀意\n"
+HIW"\t\t\t～"+HIB"　痴　"+HIW"～　"+HIB"断"+HIW"　～　"+HIB"肠"+HIW"　～\n\n"
+HIR"$N身形已如鬼魅般倏然幌闪起来，举手投足间，凌厉无匹，一时罡\夙激烈，带着凄厉的怒啸，狂猛无伦的袭向$n。"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               450,
                "force"      :                  550,
                "post_action" :             (: temp :),
                "damage_type":                "刀气贯穿之伤",
              ]),
//12
             ([
                "action"     :
HIG"\t【"+HIW"飞流九刀"+HIW"】"+HIC"\t七式刀意\n"
+HIW"\t\t\t～"+HIC"　怒　"+HIW"～　"+HIC"问"+HIW"　～　"+HIC"天"+HIW"　～\n\n"
+HIR"$N身形猝然前纵，飞沙旋舞中，一股凌厉无匹的刀气也怒卷而出！狂猛的劲气中，$w"+HIR"如漫天卷云，在瞬息之间，单向$n全身四周。"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               500,
                "force"      :                  600,
                "post_action" :             (: temp :),
                "damage_type":                "刀气贯穿之伤",
              ]),
//13
             ([
                "action"     :
HIG"\t【"+HIW"飞流九刀"+HIW"】"+HIC"\t七式刀意\n"
+HIW"\t\t\t～"+HIG"　横　"+HIW"～　"+HIG"眉"+HIW"　～　"+HIG"冷"+HIW"　～\n\n"
+HIR"$N刀势宛如天瀑倒流，又似地泉突涌，上下齐出，攻向$n全身要害重穴。"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               500,
                "force"      :                  650,
                "post_action" :             (: temp :),
                "damage_type":                "刀气贯穿之伤",
              ]),
//14
            ([
                "action"     :
HIG"\t【"+HIW"飞流九刀"+HIW"】"+HIC"\t七式刀意\n"
+HIW"\t\t\t～"+HIY"　乱　"+HIW"～　"+HIY"情"+HIW"　～　"+HIY"斩"+HIW"　～\n\n"
+HIR"$N身形如影附形般紧随而上，倾刻之间，又疾猛无伦的攻出九九八十一刀！更含有一股沉重如山的滔滔劲力，沉重的压向$n。"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               500,
                "force"      :                  700,
                "post_action" :             (: temp :),
                "damage_type":                "刀气贯穿之伤",
              ]),
//15
            ([
                "action"     :
HIG"\t【"+HIW"飞流九刀"+HIW"】"+HIC"\t七式刀意\n"
+HIW"\t\t\t～"+HIW"　傲　"+HIW"～　"+HIW"寒"+HIW"　～　"+HIW"霜"+HIW"　～\n\n"
+HIR"但见青白色的虹光矫如游龙般左右纵横，刀影漫天而起，凌厉的罡\气四散弥合，银沙飞洒，有如万点寒星。"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               500,
                "force"      :                  750,
                "post_action" :             (: temp :),
                "damage_type":                "刀气贯穿之伤",
              ]),
//16
            ([
                "action"     :
HIG"\t【"+HIW"飞流九刀"+HIW"】"+HIC"\t七式刀意\n"
+HIW"\t\t\t～"+CYN"　静　"+HIW"～　"+CYN"中"+HIW"　～　"+CYN"取"+HIW"　～\n\n"
+HIR"$N右手$w"+HIR"呼声疾速旋回，一道浑厚晶莹的青色光墻，倏而涌起，这青色的透明光墻，亦丝丝迸射着破空劲气！。"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               500,
                "force"      :                  800,
                "post_action" :             (: temp :),
                "damage_type":                "刀气贯穿之伤",
              ]),


              });
/*
int valid_learn(object me)
{
  return "不给学!!\n";
}
*/
int valid_enable(string usage)
{
        return ( usage=="blade" || usage=="parry" );
}
mapping query_action(object me, object weapon)
{
        int skill_level,mf_lv,vf_lv,i;
        object *enemy,victim,wea2;
       string skill,type2;
      weapon = me->query_temp("weapon");
      enemy=me->query_enemy();
       i=sizeof(enemy);
       victim = enemy[random(i)];
 wea2 = victim->query_temp("weapon");
  if(wea2)
   if(!(type2=wea2->query("skill_type"))) type2=weapon->query("skill_type");
       skill_level = (int)(me->query_skill("fly-blade",1));
        mf_lv = (int)(me->query_skill("force",1));
        vf_lv = (int)(victim->query_skill("force",1))/2;
if(random(mf_lv) > random(vf_lv) && me->query_temp("blade_mind") <= 550 && random(10) < 2)
me->add_temp("blade_mind",random(me->query_skill("blade")/20));
if( random(mf_lv) > random(vf_lv) && me->query_temp("blade_mind") > 500 && 3>random(8) && me->query_skill("blade") >= 100 && !me->query_temp("moon") && !me->query_temp("imblade") && !me->query_temp("noblade") && !me->query_temp("mind"))
 {
if(me->query("age") < 40 || me->query_skill("blade",1) < 140 )
 {
 message_vision(HBCYN"\n\n
$N以意使刀，忽然臻至"HIY"【 井 中 月 】"NOR+HBCYN"之境，出刀毫无斧凿之迹，如羚羊挂角，无迹可寻\n\n"NOR,me,victim);
 me->set_temp("moon",1);
 me->add_temp("blade_mind",-300);
me->set_temp("busy",1);
 me->improve_skill("blade",random(100));
 }
else if(me->query("age") < 70 || me->query_skill("blade",1) < 150 )
  {
message_vision(HBMAG"\n\n
$N忽然脱离以意使刀"HIY"【 井 中 月 】"NOR+HBMAG"之境，步入刀人合一，"HIB"刀即我，我即刀"NOR+HBMAG"，之无上刀境\n\n"NOR,me,victim);
 me->set_temp("imblade",1);
me->add_temp("blade_mind",-200);
me->set_temp("busy",1);
me->improve_skill("blade",random(200));
  }
else if(me->query_skill("blade",1) >= 150 && me->query("age") >= 70)
  {
  me->start_busy(2);
  victim->start_busy(3);
  message_vision(HIR HBWHT"\n\n
$N终至刀法大成之境，即"HIC"【 无 刀 胜 有 刀 】"NOR+HIR+HBWHT"之意，无极归一，臻至刀道至境\n\n"NOR,me,victim);
  me->set_temp("noblade",1);
  me->add_temp("blade_mind",-100);
me->set_temp("busy",1);
  me->improve_skill("blade",random(300));
  }
else
  {
 message_vision(HBGRN"\n\n
$N虽无法达到"HIY"【 井 中 月 】"NOR+HBGRN"之境地，但也终也领略到"HIC"【飞 流 九 刀】"NOR+HBGRN"之些许刀意\n\n"NOR,me,victim);
  me->set_temp("mind",1);
me->add_temp("blade_mind",-400);
  }
 }
if(me->query_temp("noblade") && me->query_skill("blade",1) > random(450) && !me->query_temp("berserk") && !me->query_temp("conti") && type2 && type2 != "unarmed")
{

     type2 = wea2->query("skill_type");
       if(!wea2) type2 = "unarmed";
       skill = victim->query_skill_mapped(type2);
       me->set_temp("berserk",1);
       me->set_temp("conti",1);
  message_vision(HIW"\n\n
$N以刀化"HIR"无极"HIW"，手中之刀忽隐，招招有如天马行空般，整个人宛若一"NOR+HBYEL"沉狱"NOR+HIW"，吸噬着万物\n
\t     使$n感受到$N似刀非刀，却又招招遥制于$n，刀使至此\n
\t       $N已至"HIC"  破．碎．虚．空  "HIW"脱离刀道，而入武道至境\n\n
\t            "HIY"《  反 朴 归 真  万 流 归 宗  》 \n\n"NOR,me,victim);
  weapon->set("ski_type",type2);
  me->set("actions", (: call_other, SKILL_D(skill), "query_action" :));
      for(i=0;i<=random(5)+5;i++)
                {
COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
                }
      me->delete_temp("berserk");
      me->delete_temp("conti");
 weapon->set("ski_type","blade");
      me->reset_action();
     message_vision(HIW"$N逐渐脱离"HIC" 破．碎．虚．空  "HIW"之境，回归刀道\n"NOR,me,victim);
}
if(me->query_temp("busy"))
{
   return action[random(1)+6];
}
if( me->query_temp("moon") || me->query_temp("imblade") || me->query_temp("noblade") || me->query_temp("mind"))
{
  if(me->query("bellicosity") < 2000)
  {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",10,me,victim);
    }
    return action[random(9)+1];
   }
  else if(me->query("bellicosity") < 2500)
  {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",10,me,victim);
    }
   return action[random(9)+2];
   }
  else if(me->query("bellicosity") < 3000 || me->query_temp("mind"))
    {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",50,me,victim);
    }
   return action[random(9)+3];
   }
  else if(me->query("bellicosity") < 3500 && me->query_temp("moon") || me->query_temp("imblade") || me->query_temp("noblade"))
   {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",130,me,victim);
    }
   return action[random(9)+4];
   }
  else if(me->query("bellicosity") < 5000 &&  me->query_temp("imblade") || me->query_temp("noblade"))
   {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call");
   call_out("deletemind",150,me,victim);
    }
    return action[random(9)+5];
   }
  else if(me->query("bellicosity") < 6000 && me->query_temp("noblade"))
  {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call");
    call_out("deletemind",170,me,victim);
    }
    return action[random(9)+6];
  }
  else if(me->query_temp("no_blade"))
   {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call");
    call_out("deletemind",250,me,victim);
    }
    return action[random(9)+7];  
   }
   else if(me->query_temp("mind"))
    {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",80,me,victim);
    }
   return action[random(9)+3];
   }
  else if(me->query_temp("moon"))
    {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",150,me,victim);
    }
   return action[random(9)+4];
   }
 else if(me->query_temp("imblade"))
    {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",180,me,victim);
    }
   return action[random(9)+5];
   }
}
    else if (skill_level < 10)
                return action[random(2)];
        else if (skill_level < 20 )
                return action[random(3)];
        else if (skill_level < 35 )
                return action[random(4)];
       else if (skill_level < 45 )
                return action[random(5)];
        else if (skill_level < 70 )
                return action[random(6)];
        else if (skill_level < 80 )
                return action[random(7)];
        else if (skill_level < 100 )
                return action[random(8)];
        else
                return action[random(9)];

  }

// 刀意消退
int deletemind(object me,object victim)
{
   me->delete_temp("moon");
   me->delete_temp("imblade");
   me->delete_temp("noblade");
   me->delete_temp("have_call");
   message_vision(RED"
$N刀意使尽，去式已老，只好收刀回气再战。\n"NOR, me,victim);
   return 1;
}

// 第一招之post_action 伤敌之max_kee
void gold_fluid(object me, object victim, object weapon, int damage)
{
    int my_lv,vi_lv,hurt;
    weapon=me->query_temp("weapon");
    my_lv=me->query_skill("blade",1)+me->query_skill("fly-blade",1)+me->query("bellicosity")/100;
    vi_lv=victim->query_skill("dodge",1)+victim->query_skill("move",1)+victim->query("cor");
    hurt=me->query_skill("blade",1)*2+me->query_map_skill("dodge",1)*2+me->query("cor")*10+random(me->query("combat_exp")/5000)+me->query_temp("apply/damage");
    if(damage > 0 && my_lv > vi_lv )
    {
       message_vision(YEL"
$N手中"+weapon->name()+""NOR+YEL"所幻起的黄芒一层层一道道如绵絮般向$n射去\n"NOR,me,victim);
      victim->receive_wound("kee",hurt);
      COMBAT_D->report_status(victim, 1);
    }
}
void light(object me, object victim, object weapon, int damage)
{
   int my_lv,vi_lv,hurt,k,n;
   n=0;
   weapon=me->query_temp("weapon");
   my_lv=me->query("combat_exp")/100+me->query("bellicosity");
   vi_lv=victim->query("combat_exp")/100+victim->query("bellicosity");
   hurt=me->query("str")+me->query("combat_exp")/10000+damage/10;
   if(damage > 0 && my_lv > vi_lv )
   {
   message_vision(
""+weapon->name()+""HIY"幻出"HIC"十三道光芒"HIY"从十三个死角闪入$n的体内\n"NOR,me,victim);
     for(k=0;k<13;k++)
     {
      if(random(my_lv*2) > random(vi_lv))
      {
      victim->receive_woud("kee",hurt);
      n++;
      }
     }
message_vision(HIW"
$n虽全力挡向十三道刀芒但仍有"HIY""+to_chinese(n)+""HIY"道刀芒"HIW"入体，瞬时窜入$n经脉内\n"NOR,me,victim);
       victim->apply_condition("blade",n);
      COMBAT_D->report_status(victim, 1);
   }
}
void back_blade(object me, object victim, object weapon, int damage)
{
   int my_lv,vi_lv;
   object wea;
   wea = me->query_temp("secondary_weapon");
   my_lv = me->query("int")+me->query("cor")+me->query_temp("apply/damage")/2;
   vi_lv = victim->query("combat_exp")/50000;
   if(wea && damage > 0 && random(my_lv) > random(vi_lv))
   {
message_vision(HIB"
一道刀芒从$N左胁后窜出，$N手中"+wea->name()+""NOR+HIB"在这瞬息之间已疾闪入$n的下腹之中。\n"NOR,me,victim);
   victim->receive_wound("kee",my_lv+me->query_temp("blade_mind"));
   COMBAT_D->report_status(victim, 1);
   }
}
void blood(object me, object victim, object weapon, int damage)
{
   int my_lv,vi_lv,times;
   my_lv = me->query("max_force")/50+me->query_skill("blade",1)*2+me->query("bellicosity")/10+me->query_skill("force",1)/2;
   vi_lv = victim->query("max_force")/10+victim->query("spi")*10;
   times = me->query_skill("blade",1)/((int)random(victim->query_skill("force")/50)+1);
   if(times > 10 ) times = 10;
  if(victim)
   if( damage > 0 && random(my_lv) > random(vi_lv) && !victim->query_temp("at_blood"))
   {
     victim->add_temp("at_blood",times);
     message_vision(HBRED"
$N舞出千层刀芒，一波波一层层的向$n涌去，猛列的刀气直贯入$n体内，直窜往$n心室\n"NOR,me,victim);
    victim->receive_wound("kee",my_lv/10);
     call_out("at_blood",2,me,victim,my_lv/4);
   COMBAT_D->report_status(victim, 1);
   }
}
int at_blood(object me,object victim, int hurt)
{
//灵台 至阳 筋缩 中枢 脊中 悬枢 命门 阳关 腰俞 环跳
   int n;
   string type;
   n = victim->query_temp("at_blood");
   hurt = hurt - victim->query("max_force")/20;
    if (hurt <= 0) 
    {
     victim->delete_temp("at_blood");
      message_vision(RED"窜入的刀气终在$n真气抵挡下消逝无踪\n"NOR,me,victim);
       return 1;
    }
   if(victim->query_temp("at_blood"))
    {
     switch(n)
     {
      case 10:
      type = "环跳穴";
      message_vision(HBRED"
$n运使真气抵抗$N的刀气，但还是让刀气冲过"HIB""+type+""NOR+HBRED"直往命门大穴而去\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
     case 9:
     type = "腰俞\穴";
      message_vision(HBRED"
$n运使真气抵抗$N的刀气，但还是让刀气冲过"HIB""+type+""NOR+HBRED"直往命门大穴而去\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
      case 8:
      type = "阳关穴";
      message_vision(HBRED"
$n运使真气抵抗$N的刀气，但还是让刀气冲过"HIB""+type+""NOR+HBRED"直往命门大穴而去\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
      case 7:
      type = "悬枢穴";
      message_vision(HBRED"
$n运使真气抵抗$N的刀气，但还是让刀气冲过"HIB""+type+""NOR+HBRED"直往命门大穴而去\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
      case 6:
      type = "脊中穴";
      message_vision(HBRED"
$n运使真气抵抗$N的刀气，但还是让刀气冲过"HIB""+type+""NOR+HBRED"直往命门大穴而去\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
     case 5:
      type = "筋缩穴";
      message_vision(HBRED"
$n运使真气抵抗$N的刀气，但还是让刀气冲过"HIB""+type+""NOR+HBRED"直往命门大穴而去\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
     case 4:
      type = "至阳穴";
      message_vision(HBRED"
$n运使真气抵抗$N的刀气，但还是让刀气冲过"HIB""+type+""NOR+HBRED"直往命门大穴而去\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
     case 3:
      type = "中枢穴";
      message_vision(HBRED"
$n运使真气抵抗$N的刀气，但还是让刀气冲过"HIB""+type+""NOR+HBRED"直往命门大穴而去\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
       call_out("at_blood",4,me,victim,hurt);
     break;
     break;
      case 2:
      type = "灵台穴";
      message_vision(HBRED"
$n运使真气抵抗$N的刀气，但还是让刀气冲过"HIB""+type+""NOR+HBRED"直往命门大穴而去\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
      case 1:
      type = "命门穴";
      message_vision(HBRED"
一股雄浑猛烈的刀气直窜入$n，使$n心脉一震，生机断绝\n"NOR,me,victim);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     victim->unconcious();
     break;
     break;
     }
    }
  return 1;
}
void dust(object me, object victim, object weapon, int damage)
{
   int my_lv,vi_lv,m,d;
   weapon = me->query_temp("weapon");
   m=weapon->query("weight")/20;
   d=me->query_temp("apply/damage");
   my_lv = me->query("cps")*2 + me->query("cor")*2 + me->query("combat_exp")/10000;
   vi_lv = victim->query("combat_exp")/10000;
   if(damage > 0 && random(my_lv) > random(vi_lv) )
   {
     message_vision(HBYEL"
$N受此招刀意所引，"+weapon->name()+""NOR+HBYEL"夹带着一股沉重的气息，缓缓使出，深得"NOR+HBCYN" 静、合、取 "NOR+HBYEL"之无上刀意\n"NOR,me,victim);
    victim->receive_wound("kee",m+d+me->query_temp("blade_mind")/2);
    victim->apply_condition("blade",10);
     COMBAT_D->report_status(victim, 1);
   }
}
void star(object me, object victim, object weapon, int damage)
{
   int my_lv,vi_lv,force;
   my_lv = me->query("combat_exp")/10000;
   vi_lv = me->query("combat_exp")/30000;
   force = me->query_temp("blade_mind")/100+1;
   if(damage > 0 && random(my_lv) > random(vi_lv))
   {
     message_vision(HBGRN"\n
     落   。    星    。    追    。    魂    。    天    。    下    。    寒\n"NOR,me,victim);
    victim->receive_wound("kee",my_lv*force);
     COMBAT_D->report_status(victim, 1);
   }
}
void seven(object me,object victim,object weapon,int damage)
{
        int time,bell,i;
    bell = (int)me->query("bellicosity")/1000;
time = (int)me->query("max_force")/1000 + bell;
// 对 time 做限制 以防止连击数过多 并对高于8 的ppl做保障
if(time > 8) time = 8+random(3);
        me->delete_temp("busy");
    if( me->query("force_factor") >= 10 && damage > 0)
    {
        if( me->query_temp("berserk") == 0 && me->query("force") > 300)
        {
        me->set_temp("berserk",1);
message_vision(
HBBLU"$N手中利刃在一刹那幻成了千百柄，自不同的方向，不同的角度，阻击着$n的身影。\n"NOR , me, victim);
    for(i=0;i<=time;i++)
                {
COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
                }
            me->delete_temp("berserk");
         }
    }
}
void water(object me, object victim, object  weapon, int damage)
{
int j;
int bellpower = me->query("bellicosity")/40; //  对杀气的影响做调整
if(bellpower > 100 ) bellpower = 100;
if( damage > 0 && me->query("force") > 500 && me->query("bellicosity") > 500)
 {
message_vision(
HIY"$N倏起急掠，手中利刃映出金芒千溜，蓬散四射，布成了一面伞形的金网\n"NOR , me);
  for(j=1;j<=3;j++)
  {
message_vision(
HIC"金芒布成了一个尺许方圆的光弧，来势强劲而急速，待到$n察觉，已身中数刀。\n"NOR , me, victim);
victim->receive_wound("kee",bellpower+me->query_temp("blade_mind"));
COMBAT_D->report_status(victim);
    }
  }
}
void busy(object me,object victim,object weapon,int damage)
{
//　因为此 skills 只此一定人招 因此不再加 random(2) == 0 来判断
 if( damage > 0 && !me->is_busy())
   message_vision(
MAG"$n 被$N 的刀意所困，正是"+HIG"【"+HIW"飞流九刀"+HIW"】"+MAG"之无上刀意"+CYN"‘困愁城’\n"NOR,me,victim);
 me->set_temp("busy",1);
 victim->start_busy(random(3)+1);
COMBAT_D->report_status(victim);

}
// 懒的再写 post_action 
void temp(object me, object victim ,object weapon, int damage)
{
   int k;
             me->add("force",-200);
    weapon = me->query_temp("weapon");
    if(me->query("force") > 500 && damage > 0 && me->query_temp("blade_mind"))
{
        if(damage <= 200 )
        {
        message_vision(
        HIY"$N将杀意配合"HIB"七式刀意"HIY"不断催鼓内劲，刀刀沉如山岳，刀芒透出刀身盈有数丈。\n" NOR,me);
victim->receive_wound("kee",me->query_temp("blade_mind")*((int)me->query("bellicosity")/3000+1));
       }
   else if( damage <= 300 )
    {
   message_vision(
HIC"$N将体内真气运诸刀尖，配合"HIB"七式刀意"HIC"只见刀身霎时浑体通红，宛若一条"HIR"赤龙"HIC"翱翔天际。\n"NOR,me);
    victim->receive_wound("kee",me->query_temp("blade_mind")*(me->query("max_force")/2000+1));
       me->add("force",-100);
       me->improve_skill("blade",random(10)+1);
    }
     else if(damage <= 400  && me->query("sen") > 50 && me->query("gin") > 50 && me->query("kee") > 200 && !me->query_temp("berserk"))
   {
     me->set_temp("berserk",1);
   message_vision(
HIW"$N将全身"HIG"精"HIW"。"HIC"气"HIW"。"HIY"神"HIW"投入"HIB"七式刀意"HIW"之无上刀意"HIW"宛若"HIR"入魔修罗"HIW"，暴雨般向$n击去\n"NOR,me,victim);
       me->add("sen",-5);
       me->add("gin",-5);
       me->add("kee",-10);
    for(k=0;k<3+random(4);k++)
    {
    message_vision(
HIM"\n$N将"+weapon->name()+""HIM"斜插于地，就地顺势划起，一道道邪火由地内冒出\n"NOR,me);
  COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
    }
    me->delete_temp("berserk");
   }
  else if(damage > 400 && random(10) > 3 && me->query_temp("noblade"))
   {
    message_vision(
HIM"$N终将"HIW"七式刀意"HIM"融会贯通，七式合一，使出\n
"MAG"。。。。"HIB"Ψ"HIR"七。意。斩。元    飞。流。破。日"HIB"Ψ"MAG"。。。。\n
"HIY"手中"+weapon->name()+""HIY"一抛，空中挺身转体，刀锋划出一道完美的弧线\n"NOR,me,victim);
     victim->start_busy(random(2)+1);
victim->receive_wound("kee",me->query_temp("blade_mind")*(me->query_skill("blade",1)/30));
victim->receive_wound("gin",(int)victim->query("max_gin")/15);
victim->receive_wound("sen",(int)victim->query("max_sen")/15);
     }
   else
    {
        message_vision(
        HIY"$N将杀意配合"HIB"七式刀意"HIY"不断催鼓内劲，刀刀沉如山岳，刀芒透出刀身盈有数丈。\n" NOR,me);
victim->receive_wound("kee",me->query_temp("blade_mind")*(me->query("bellicosity")/2000+1));

     }
   }
COMBAT_D->report_status(victim);
if(me->query_skill("fly-blade",1) <= 150 )
  {
      me->improve_skill("blade",random(5)+1);
  }
  else me->improve_skill("blade",random(2)+1);
}
int remove_effect(object me,object victim)
{            me->set("force_factor",10);
    message_vision(HIW"$N刀意使尽，去式已老，只好收刀回气再战。\n"NOR, me);
    return 1;
}
string perform_action_file(string action)
{
        return CLASS_D("ghost")+"/fly-blade/"+action;
}
