#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void berserk(object me, object victim, object  weapon, int damage);
void sp_attack0(object me, object victim, object  weapon, int damage);
void sp_attack1(object me, object victim, object  weapon, int damage);
void sp_att2(object me, object victim, object  weapon, int damage);
string m1="[1;37m$N手中长剑虹芒大盛，「剑影连阳”，往$n直刺而去。\n\n[0m";
void array1();
void drunk();
int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int sp_value;

string *parry_msg = ({
"\n而$n手中的长剑一横，一招"HIB"‘铁锁横江’"NOR"势挟千斤往前一推一送，当的一声碰出了点点火花反把$N手中的$w险些震飞！\n"NOR,
"\n但$n长剑一转，顺着$N的$w以一招"HIC"‘顺流而下’"NOR"往$N的手指削去，$N大惊失色下急忙收招回架\n",
"\n$n剑走轻灵，手中长剑忽削忽刺一连串的兵器撞击声后$n已将$N的快招全部化解！\n",
HIW"\n$n以快制快，$N快但$n更快，连续刺出了七七四十九剑织成一道剑网将$N的招式尽数荡开！\n"NOR,    
        });

string *unarmed_parry_msg = ({
"但是被$n格开了。\n",
"结果被$n挡开了。\n",
});

//剑阵;roger苦思三天三夜所创
//idea 版权所有;模仿必翻脸

void array1()
{
 object me=this_player();
 int number,i,j,m,n,hurt,mean=0,k=0,sha_mean=0,get_sha=0;
 object *partner,*target;

 partner=me->query_team();
 number=sizeof(partner);

 target=me->query_enemy();
 i=sizeof(target);
 
 for(j=0;j<number;j++){
  if(present(partner[j],environment(me)) && partner[j]->query_temp("use_form")==1)
  k=k+1;
                      }

 for(j=0;j<number;j++){
  if(partner[j]->query("get_sha_sp")==1)
  get_sha=get_sha+1;
                      }

 for(j=0;j<number;j++){
  sha_mean=sha_mean+partner[j]->query_skill("shasword",1);
                      }
  sha_mean=sha_mean/number;
 for(j=0;j<number;j++){
  mean=mean+(partner[j]->query_skill("array"));
                      }
  mean=mean/number;  

   if(k==2){
   if(random(100) > 82 && mean < 75){ 
hurt=mean*1.4*2;
message_vision("
"HIM"$N一声清啸，阵形一转和$n联手使出阴阳两仪剑阵的绝招"NOR"
---[35;1m□[37;1mb[35;1m□[37;1m□[35;1m□[37;1m□[35;1m□[37;1m□[0m---
"HIM"$N大喝一声，剑尖闪出了耀眼紫光，敌人为之一时无法睁开眼睛而同时只见$n满场游走，动作如仙鹤般优雅轻灵，阵内敌人已在同时全部受到了重创
\n"NOR,partner[0],partner[1]);
 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",hurt);
 COMBAT_D->report_status(target[j], 1);
                 }
                                    }

   else if(random(100) > 82 && mean >= 75){
hurt=mean*1.9*2;
message_vision(HIR"
$N和$n心意相通，使出了阴阳两仪阵法的精髓---"HIR"‘"HIM"二剑穿肠红"HIR"’
$N和$n同时纵身一跃，以极快的速度依着阵法移动身形刹那间两仪阵内红影穿梭，阴中有阳，阳中有阴...
"NOR"结果阵内的敌人不知如何防御，纷纷被剑气所伤
\n",partner[0],partner[1]);
 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",hurt);
 COMBAT_D->report_status(target[j], 1);
                 }
                                          }

   else if(random(100) > 80){
message_vision(HIG"$N和$n不停的移行换位，阴变阳，阳转阴，使敌人看得眼花撩乱\n"NOR,partner[m],partner[m+1]);
                            }
}

   else if(k==3){
  if(random(100) > 82){
   if(mean >= 75 && get_sha==3){
hurt=mean*2.2*3;//三人皆有后三 && sha-array 平均大于75 所以威力上调
message_vision(HIY"
阵内三才忽然心意相通，不约而同各使出仙剑后三式中的一招，融合成此旷世绝招
"HIW"------"HIY"仙剑后三合一式"HIW"------\n
$N使出仙剑后三式之第一招
----[1;36m□[1;34mB[1;36m□[1;34mY[1;36m□[1;34mH[1;36m□[1;34m□[0m"HIW"---                
$N以气行剑,瞬时间一股寒气笼罩身旁,只见剑上薄冰渐起幻成冰柱,$N手中长剑横扫,只见冰柱随剑气朝敌人猛裂刺去
敌人瞬间被刺伤多处...\n",partner[0]);
message_vision("
$N使出仙剑后三式之第二招
----[1;35m□[1;31mU[1;35m□[1;31mV[1;35m□[1;31mi[1;35m□[1;31mi[0m"HIW"---
$N手中长剑急使,愈使愈快,宛若汹涌巨浪向敌人直冲而去,瞬时压力遽增,
敌人被巨浪震出内伤,鲜血狂喷....\n",partner[1]);
message_vision("
$N使出仙剑后三式之第三招
----[1;32m□[1;33m□[1;32m□[1;33m□[1;32m□[1;33mi[1;32m□[1;33m□[0m"HIW"---                             
$N长剑飞舞,霎时四周水波云气变化万千难以预料,敌人瞬间分不清剑在何方
正在迟疑之际,.剑已穿体而出....\n
"HIY"三招合一的威势惊人，一股强大的剑气在阵内冲撞，敌人非死即伤\n"NOR,partner[2]);
 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",hurt);
 COMBAT_D->report_status(target[j], 1);
                 }
                   }

   else { 
hurt=mean*1.5*3;
message_vision(HIY"
三才剑阵内祥光隐隐，剑阵绝招"HIW"‘"HIY"鳞光三剑"HIW"’"HIY"依三才特性之气腾出！
$N引导三种祥光在阵内流转，缤纷夺目，伤人于炫丽之中......
\n"NOR,partner[0]);
 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",hurt);
 COMBAT_D->report_status(target[j], 1);
                 }
        }
                                 }

   else if(random(100) > 80){
message_vision(HIY"$N指挥若定，天地人三位配合一体防守得固若金汤\n"NOR,partner[0]);
                            }
}

   else if(k==4){
  if(random(100) > 79){
   if(mean >= 75 && sha_mean >= 95){
//旷世绝招，四人皆要有双十才行，很怀疑能不能有机会用...
hurt=mean*3.1*4;
message_vision(HIB"
阵内四人心意忽然顿悟，决定以身一试期望能融合出旷世绝招"HIY"‘"HIB"四龙崩月"HIY"’"HIB"!!!
\n"HIW"只见阵内四人同时仰天长啸 ,一齐使出仙剑至极之招"HIR"‘ 双～十～旋～龙～斩 ’"HIB"!!!
\n"HIB"四条青龙从四个人的剑尖冲出，在空中不停地聚合盘旋，刹那间!!!天地变色，
风起云涌。一轮"HIY"明月"HIB"在龙云之间现形，而敌人也被此情景所震慑，一瞬间已
被吞没于光芒之中。\n\n"NOR,partner[0]);

 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",hurt);
 target[j]->start_busy(1);
 COMBAT_D->report_status(target[j], 1);
                 }
                   }

   else { 
hurt=mean*1.7*4;
message_vision(HIC"
众剑士忽然四剑齐出，使出四象璇叽剑阵的绝招"HIB"‘"HIC"四剑八达"HIB"’"HIC"，飕飕声响处两剑直指
敌人的胸前，同时另两剑从左右分刺。当敌人想予以招架时四剑又同时分击合刺，威
力实在惊人!
\n"NOR,partner[0]);
 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",hurt);
 target[j]->start_busy(1);
 COMBAT_D->report_status(target[j], 1);
                 }
        }
                                 }

   else if(random(100) > 80){
message_vision(HIB"$N以全力运转四象璇叽阵，将敌人牢牢的困在阵中\n"NOR,partner[0]);
                            }
}

//八人阵极难组成，需八个仙剑高手，主阵者亦需神200 and sha-array >=80
//so 威力加强
   else if(k==8){
   if(random(100) >= 75){
message_vision(HIG"\n$N仰天长啸，催动八卦游龙阵使出惊世骇俗的仙剑剑阵至极绝招

                     "HIW"‘"HIR"～禁～断～连～阳～七～诀～斩"HIW"’"NOR"

"HIR"此招一出，惊天动地，传说自仙剑创派以来从未被使用过!!\n",partner[0]);
message_vision(sprintf(HIB"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第一式"HIW"‘"HIB"烈阳"HIW"’"HIB"!!\n"NOR ),partner[1]); 
message_vision(sprintf(HIR"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第二式"HIW"‘"HIR"残阳"HIW"’"HIR"!!\n"NOR ),partner[2]);
message_vision(sprintf(HIW"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第三式"HIW"‘艳阳’!!\n"NOR),partner[3]); 
message_vision(sprintf(HIM"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第四式"HIW"‘"HIM"暖阳"HIW"’"HIM"!!\n"NOR),partner[4]);   
message_vision(sprintf(HIC"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第五式"HIW"‘"HIC"冬阳"HIW"’"HIC"!!\n"NOR),partner[5]);
message_vision(sprintf(HIG"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第六式"HIW"‘"HIG"朝阳"HIW"’"HIG"!!\n"NOR),partner[6]); 
message_vision(sprintf(HIY"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第七式"HIW"‘"HIY"夕阳"HIW"’"HIY"!!\n"NOR), partner[7]);
message_vision(HIW"\n七道剑虹同时激空而出，「七阳连天”在空中织成一道虹网！
"HIG"而主阵的$N纵身一跃，凝气准备发出最后一式以完成这惊天地动的一击！\n"NOR,partner[0]);
message_vision(sprintf(HIW"\n只见$N狂性骤起 ,大喝一声‘"HIR"剑影连阳，七阳连天’!!\n"NOR),partner[0]);
message_vision(HIW"$N的七阳连天气势澎礴，激发了先前仙剑禁断之连阳七诀的七股刚柔不等的剑虹，只见虹气啸天，满天剑影，阵内敌人全都受到了重创\n"NOR,partner[0]);

 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",800);
 target[j]->start_busy(2);
 COMBAT_D->report_status(target[j], 1);
                 }
                      }
   else if(random(100) > 60){
message_vision(HIM"$N指挥八卦游龙阵内的剑士不停地移行换位，气势万千！\n"NOR,partner[0]);
                            } 
}

}
//剑阵;roger苦思三天三夜所创
//idea 版权所有;模仿必翻脸:P

void drunk()
{
 object me=this_player();
 int number,i,j,me_lv,tar_lv;
 object *target;
 target=me->query_enemy();
 i=sizeof(target);
 j=random(i);
 me_lv=me->query_skill("dodge");
 me_lv*=1.3;
 tar_lv=target[j]->query_skill("dodge");
 if(me->query_skill("shasword",1) > 70&&me->query_skill("sha-steps",1)>50&&!me->query_temp("conti",1))
{
 message_vision("\n$N醉吟道：
[37;1m   ‘御剑乘风来，除魔天地间。有酒乐逍遥，无酒我亦颠。
     一饮尽江河，再饮吞日月。千杯醉不倒，唯我"HIR+me->query("name")+HIW"’
使出一招[37;1m‘[31;1m横醉千秋[37;1m’[0m，乘着酒意将仙剑剑术发挥得淋漓尽致\n",me);
     if(me_lv > tar_lv){
 message_vision("\n$N闪避不及，被这招当胸刺中\n",target[j]);
 target[j]->receive_damage("kee",250);
 COMBAT_D->report_status(target[j]);
 me->add("force",-30);
                       }
 else message_vision("\n$N纵身跃起，及时闪过了这一招\n",target[j]);                                                    
}                                         
}                                                                                               


mapping *action = ({
//1
        ([      
                "action"     :               "$N手捏剑诀，长剑一挺，使出一招"HIC"‘泉鸣芙蓉’"NOR"，姿态悠雅，颇有天上仙人下凡间之意",
                "dodge"      :               -10,
                "parry"      :               -10,
                "damage"     :                40,
                "force"      :                40,
                "damage_type":               "刺伤"
        ]),
//2
        ([     
                "action"     :               "$N一个旋身，手中的$w在空中闪过一道光芒直刺向$n的$l，姿态潇洒一气呵成，正是一招"HIY"‘金雁横空’"NOR,
                "dodge"      :                0,
                "parry"      :                0,
                "damage"     :                80,
                "force"      :                80,
                "damage_type":               "刺伤"
        ]),
//3
        ([   
                "action"     :               "$N左肩微沉，左手剑诀斜引，右肘一缩，使出一招"HIM"‘有凤来仪’"NOR"剑势迅速凌厉直往$n的$l刺去",
                "dodge"      :                10,
                "parry"      :                10,
                "damage"     :                100,
                "force"      :                100,
                "damage_type":               "刺伤"
        ]),
//4
        ([  
                "action"     :               "$N剑势一改往常的飘逸绝伦，使出一招"HIW"‘"HIY"玉碎仙冈"HIW"’"NOR"直削横劈、气势威猛的往$n身上大力斩去",
                "dodge"      :                20,
                "parry"      :                20,
                "damage"     :                150,
                "force"      :                150,
                "damage_type":               "割伤"
        ]),
//5
        ([ 
                "action"     :               "$N剑势大开大阖，使出一招"HIC"‘劈竹扫影’"NOR"狂风暴雨般的招式使$n感到难以招架",
                "dodge"      :                30,
                "parry"      :                30,
                "damage"     :                170,
                "force"      :                170,
                "damage_type":               "割伤"
        ]),
//6
        ([
                "action"     :               "$N剑尖连划出几个剑花，一招"HIW"‘飘云穿雪’"NOR"如浮云般飘逸，化成片片白雪缓缓落于$n的身上",
                "dodge"      :                30,
                "parry"      :                20,
                "damage"     :                200,
                "force"      :                200,
                "damage_type":               "刺伤"
        ]),
//7
         ([     "action"     :               "$N将手中的$w斜引，使出一招"HIW"‘峭壁断云’"NOR"，剑势雄伟精奇气势纵横使$n感到左支右拙难以招架",
                "parry"      :                30,
                "dodge"      :                40,
                "damage"     :                220,
                "force"      :                220,
                "damage_type":                "割伤",
           ]),
//8
          ([    "action"     :               "$N真气灌于手中的$w，使出一招"HIR"‘飞虹横江’"NOR"顿时剑尖冲出半尺来长的红色剑芒，吞吐闪烁，嗤嗤声响处往$n疾刺而去",
                "parry"      :                30,
                "dodge"      :                40,
                "damage"     :		      240,
                "force"      :                240,
                "post_action":                (: berserk :),
                "damage_type":                "割伤",
            ]),
//9
            ([  "action"     :                "$N手中的$w一闪出鞘，寒芒吞吐，电闪星烁，一招"HIB"‘寒芒冲霄’"NOR"剑气化成点点寒芒往$n身上飞去",
                "dodge"      :                50,
                "parry"      :                30,
                "damage"     :                260,
                "force"      :                260,
                "post_action":                (: berserk :),
                "damage_type":                "刺伤",
             ]),
//10
            ([  "action"     :                "$N一声清啸，手中长剑抖动处数以百计的玉色光芒从$N的剑尖疾飞而出，灿烂如银河飞溅，正是一招"HIW"‘"HIY"尽倾银河"HIW"’"NOR"！",
                "dodge"      :                60,
                "parry"      :                30,
                "damage"     :                280,
                "force"      :                280,               
                "damage_type":                "刺伤",
             ]),
//11
             ([ "action"     :                "$N使出仙剑派之绝招"HIG"‘隔纸断树’"NOR"，手中的$w虚划，$n愕然不明所以之际不知自己筋脉已被斩断...",
                "dodge"      :                60,
                "parry"      :                40,
                "damage"     :                300,
                "force"      :                300,
                "post_action":                (: berserk :),
                "damage_type":                "筋脉尽断",
             ]),
//12
             ([ "action"     :                "$N剑泛仙气，聚精会神地使出了仙剑剑术中的最高境界"HIY"‘仙倾霜天’"NOR"！剑由仙化，使剑若仙，金光闪耀下$n全身已被割伤多处...",
                "parry"      :                40,
                "dodge"      :                70,
                "damage"     :                300,
                "force"      :                300,               
                "damage_type":                "心剑之伤",
             ]),
             ([ "action"     :                "$N使出仙剑后三式之第一招\n"+
                                              "----[1;36m□[1;34mB[1;36m□[1;34mY[1;36m□[1;34mH[1;36m□[1;34m□[0m---\n"+                
                                              "$N以气行剑,瞬时间一股寒气笼罩身旁,只见剑上薄冰渐起幻成冰柱,$N手中长剑横扫,只见冰柱随剑气朝$n猛裂刺去\n"+
                                              "$n瞬间被刺伤多处...\n",
                 "dodge"     :                50,
                 "parry"     :                80,
                 "damage"    :                400,
                 "force"     :                400,
                 "post_action":               (: sp_attack0 :),
                 "damage_type":               "刺伤",
                ]),
             ([ "action"     :                 "$N使出仙剑后三式之第二招\n"+
                                               "----[1;35m□[1;31mU[1;35m□[1;31mV[1;35m□[1;31mi[1;35m□[1;31mi[0m---\n"+
                                               "$N手中长剑急使,愈使愈快,宛若汹涌巨浪向$n直冲而去,瞬时压力遽增,\n"+
                                               "$n被巨浪震出内伤,鲜血狂喷....\n",
                                                   
                "dodge"      :                 50,
                "parry"      :                 80,
                "damage"     :                 400,
                "force"      :                 400,
                "post_action":               (: sp_attack1 :),
                "damage_type":               "砍伤",
                                    
                 ]),
                   
              ([ "action"     :               "$N使出仙剑后三式之第三招\n"+
                                              "----[1;32m□[1;33m□[1;32m□[1;33m□[1;32m□[1;33mi[1;32m□[1;33m□[0m---\n"+                              
                                              "$N长剑飞舞,霎时四周水波云气变化万千难以预料,$n瞬间分不清剑在何方\n"+
                                              ",正在迟疑之际,.剑已穿体而出....\n",
 
              "dodge"      :                 50,
              "parry"      :                 80,
              "damage"     :                 400,
              "force"      :                 400,
              "post_action":               (: sp_att2 :),
              "damage_type":               "砍伤",
                                                                                
              ]),
//16
            ([  "action"     :                "\n$N低吟道：
               [32;1m‘[37;1m斩风截雪破千秋               初冬舞尘一朝仇 
                 笑任青天纵豪情               剑狂情狂人更狂[32;1m’[0m
吟罢舞剑而起，使出了仙剑派的杀招[37;1m‘[32;1m□[37;1m□[32;1m□[37;1mi[32;1m□[37;1m□[32;1m□[37;1m□[32;1m□[37;1mM’！
[32;1m招如其名，在$N长剑舞动下碧绿剑气纵横宛如阵阵波涛，却掩不住暗藏其中的杀意[0m",
                "dodge"      :                60,
                "parry"      :                50,
                "damage"     :                320,
                "force"      :                320,
                "post_action":               (: berserk :),
                "damage_type":                "割伤",
             ]),
//17                      
            ([  "action"     :                "\n$N回剑入鞘，缓缓说道：
              [37;1m‘[31;1m一萧一剑平生意               负尽狂名杀无情[37;1m’[0m
说罢眼中杀意陡盛，拔剑出鞘，使出了仙剑派禁招[37;1m‘[31;1m□[37;1m□[31;1m□[37;1m□[31;1m□[37;1m□[31;1m□[37;1m□[31;1m□[37;1m□[37;1m’！
[31;1m$N迅速地挥动手中的$w[31;1m，只见满天血红宛若落日的余晖，却原来是$n被杀招所伤，满身鲜血飞扬于空中！[0m",
                "dodge"      :                60,
                "parry"      :                50,
                "damage"     :                340,
                "force"      :                340,
                "post_action":               (: berserk :),
                "damage_type":                "割伤",
             ]),
//18
            ([  "action"     :                "$N眉头紧锁，愁上心头不禁仰天长叹一声，使出了[37;1m‘[32;1m□[33;1m□[32;1m□[33;1mN[32;1m□[33;1mT[32;1m□[33;1mL[32;1m□[33;1m□[37;1m’
"HIG"$N拔剑出鞘，秋风飒飒，手中的$w"HIG"在$n的四周化为片片落叶，瞬时间$n已被割伤多处..."NOR,
                "dodge"      :                60,
                "parry"      :                50,
                "damage"     :                360,
                "force"      :                360,
                "damage_type":                "割伤",
             ]),             
//19 
            ([  "action"     :                "$N心中怒意急升，决定使出仙剑派之禁招---[33;1m‘[33;1m□[37;1m□[33;1m□[37;1mF[33;1m□[37;1m□[33;1m□[37;1m□[33;1m□[37;1m□[33;1m’！
$N运剑如风，剑气纵横激起地面滚滚尘沙，宛若千军万马驰骋般往$n暴击而去"NOR,
                "dodge"      :                60,
                "parry"      :                50,
                "damage"     :                380,
                "force"      :                380,
                "post_action":               (: berserk :),
                "damage_type":                "割伤",
             ]),      
//20
            ([  "action"     :                "$N突感心中之悲意，蓦然使出了[37;1m‘[34;1m□[37;1mH[34;1m□[37;1m][34;1m□[37;1mt[34;1m□[37;1mP[34;1m□[37;1mY’！
"HIW"$N纵身而起，一个倒仰竟从空中向$n倒刺而下，此招全然不顾己身可见施展之人心中之悲意及杀意实已到达的极点。而$n看到此招如此施展竟吓得面如土色，已经不知如何招架！\n",
                "dodge"      :                60,
                "parry"      :                50,
                "damage"     :                400,
                "force"      :                400,
                "post_action":               (: berserk :),
                "damage_type":                "刺伤",
             ]),      
                            
//21 enforce >10 不能用
(["action":"$N运力过度，无法使出仙剑剑术。",
  "force":10,
  "damage":1,
  "damage_type":"白痴伤",
]),




             });


int valid_learn(object me)
{
       if( !me->query_temp("weapon") )
        return   notify_fail("练仙剑剑术必需先拿把剑。\n");
        return   1;
}

int valid_enable(string usage)
{
        return ( usage=="sword" || usage=="parry" );
}


mapping query_action(object me, object *weapon)
{

 int skill_level,limit,i,bellicosity;
 object victim ,*enemy;

 enemy = me->query_enemy();
 i=sizeof(enemy);
 weapon=me->query_temp("weapon");
 skill_level = (int)(me->query_skill("shasword",1));
 limit= skill_level;
 bellicosity = (int)(me->query("bellicosity",1));
 
        while(i--)
        {
if(skill_level >= 95 && (me->query("family/family_name")=="仙剑派") && me->query("id")!="murofu" && me->query("name")!="慕容复"&& me->query("force",1) > 200 && random(100) > 65)
                          {
        message_vision( sprintf(HIW"        
\n只见$N仰天长啸 ,使出仙剑至极之招"HIR"‘ 双～十～旋～龙～斩 ’"HIB"!!!
"NOR),me,enemy[i]);
        message_vision(sprintf(HIB"\n$N不停地飞舞着剑，其身形渐渐地化为龙形，"+
         "刹那间!!天地为之变色，四周草木皆非，\n$n也被这股气势震吓住，"+
         "一瞬间$n已遭龙所吞噬。\n\n "NOR),me,enemy[i]);
if(weapon->query("id")=="silver sword" || weapon->query("id")=="Sad sword1"){
        message_vision(HIW"
$N的银鳞古剑感应到"HIR"‘ 双～十～旋～龙～斩 ’"HIW"的惊人气势，剑上的银鳞白光
闪耀下化成一道龙形剑气直扑向$n\n"NOR,me,enemy[i]);
               enemy[i]->receive_wound("kee",500,me);
   COMBAT_D->report_status(enemy[i]);
                enemy[i]->start_busy(1);
         me->add("force",-180);
        
                                               }
        else{
               enemy[i]->receive_wound("kee",400,me);
  COMBAT_D->report_status(enemy[i]);
         me->add("force",-90);
            }   
}
                           
                           }

 if( me->is_team_leader() && me->query_temp("use_form")==1) 
        array1();
                                  
 if(me->query_condition("drunk",1) > 0 && random(5)==0) drunk();
     
if(me->query("force_factor") >= 16 && me->query("family/family_name")!="仙剑派")
return action[20];
        if (limit < 10)
                return action[random(2)];
        else if (limit < 20)
                return action[random(4)];
        else if (limit < 30)
                return action[random(5)];
        else if (limit < 40)
                return action[random(5)+1];
        else if (limit < 50)
                return action[random(5)+2];
        else if (limit < 60)
                return action[random(5)+3];
        else if (limit < 70)                        
                return action[random(5)+4];
        else if (limit < 80)                        
/*下面这行一直让npc没心跳,请appo查明原因 by bss
                return action[random(5)+5];
*/
               return action[random(5)+5];
  if( me->query("family/family_name")!="仙剑派" || !me->query("get_sha_sp",1) )
        {
        if (limit < 85)
                return action[random(5)+6];
        else if (limit < 90)
                return action[random(5)+7];
        else if(limit >= 90 && bellicosity >= 1000)
                return action[random(5)+15];
        else
                return action[random(5)+7];
         }
  else
        {
        if (limit < 90)
           return action[random(8)+7];
        else if(limit >= 90 && bellicosity >= 1000)
           return action[random(8)+12];
        else       
          return action[random(8)+7];
        } 
}

void sp_attack0(object me, object victim, object  weapon, int damage)
{
       sp_value =4*(cps+kar)+str+cor+spi+int1; 
       if(sp_value > 400) sp_value=400;
if( weapon->query("id")=="han_bin_sword" ||weapon->query("id")=="Sad sword1")
        { 
         message_vision("\n[1;36m□[1;34mH[1;36m□[1;34mB[1;36m□[1;34mC[0m"HIC"剑上寒气与"NOR"$N"HIC"体内寒劲会合 ,霎时四周温度遽降 ,一股
阴寒内劲由$N手中长剑发出朝$n而去\n"NOR,me,victim);
         victim->add("kee",-sp_value);        
         COMBAT_D->report_status(victim, 1);
         }         
         
       else
        { 
         message_vision("$N一运劲一道寒气发自$N的体内 ,藉由手中长剑斩向$n\n",me,victim);
         victim->add("kee",-sp_value/2);         
         COMBAT_D->report_status(victim, 1);
        }
 
 }
void sp_attack1(object me, object victim, object  weapon, int damage)
{
    int i;
    sp_value =4*(str+cor)+cps+kar+spi+int1;
    if(sp_value > 400) sp_value=400;
    if( weapon->query("id")=="hon_water_sword" || weapon->query("id")=="Sad sword1" )
    {
      message_vision("[1;31m□[1;35ml[1;31m□[1;35m□[1;31m□[1;35mC[0m"HIW"蕴含水劲磅礴 ,与此招式精义吻合 ,一股柔似水又强如浪的内劲已由"NOR"$N"HIW"发出直向$n而去\n"NOR,me,victim);
      victim->add("kee",-sp_value);
      COMBAT_D->report_status(victim, 1);
      
    }
    else
    {
      if(!me->query_temp("conti",1))
        {
         message_vision("藉由此招的精义 ,你感到一股前所未有力量由你体内源源而出 ,一招招攻向对方\n",me,victim);
         me->set_temp("conti",1);
          for(i=0;i<=2;i++)
          COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
        me->delete_temp("conti");
        }
    }
}

void sp_att2(object me, object victim, object  weapon, int damage)
 {
    if( weapon->query("id")=="han_thon_sword" || weapon->query("id")=="Sad sword1" )
    { 
     message_vision("[1;32m□[1;33mH[1;32m□[1;33m□[1;32m□[1;33mC[0m剑势迥异难测 ,加上第三招之变幻莫测 ,$n一个不留神中了$N 一记强击且暂时无法对$N展开攻击\n",me,victim);
    victim->add("kee",-400);    
    victim->start_busy(1);
    COMBAT_D->report_status(victim, 1);
    }
    else
    { 
    message_vision("$N招式突然千变万化 ,手中长剑如蛇般挥向敌人 ,$n摸不清$N的动向 ,冷不防的中了一剑\n",me,victim);
    victim->add("kee",-200);     
    COMBAT_D->report_status(victim, 1);
    
    } 
 }

void berserk(object me, object victim, object  weapon, int damage)
{ 
 int skill_level=me->query_skill("shasword",1);
  if( random(100) > 70 && me->query("force",1) > 100)
  {
    if(!me->query_temp("conti"))
    {

     if( me->query("family/master_name")=="郑士欣" || me->query("name")=="郑士欣"|| me->query("dragon-sword",1)==1 )
     {
       message_vision( 
         sprintf(HIW"\n只见$N狂性骤起 ,大喝一声‘"HIR"剑影连阳 七阳连天"HIW"’!!\n"),me ,victim);
         message_vision( sprintf("七股刚柔不等的虹色剑气蓦地由$N剑尖射出对$n造成难以估计的伤。\n\n [0m"), me ,victim);
         victim->receive_wound("kee",400,me);
         COMBAT_D->report_status(victim, 1);
         me->add("force",-80);

     }else  
     if( me->query("family/master_name")=="张乘风" || 
         me->query("sha-stop-1",1))
     {   
       message_vision(
         sprintf(HIW"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第一式‘"HIR"烈阳"HIW"’!!\n"NOR ),me ,victim); 
         message_vision(sprintf(m1),me ,victim);
         victim->receive_wound("kee",300,me);
         COMBAT_D->report_status(victim, 1);
         me->add("force",-40);            
     }else
     if( me->query("family/master_name")=="张乘云" ||
         me->query("sha-stop-2",1))
     { 
       message_vision(
         sprintf(HIW"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第二式"HIW"‘"HIR"残阳"HIW"’!!。\n"NOR ), me, victim );       
         message_vision(sprintf(m1), me, victim );
         victim->receive_wound("kee",300,me);
         COMBAT_D->report_status(victim, 1);
         me->add("force",-40);
     }else
     if( me->query("family/master_name")=="唐钰" || 
         me->query("sha-stop-3",1) )
     { 
       message_vision( sprintf(HIW"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第三式"HIW"‘"HIY"艳阳"HIW"’!!\n"NOR), me ,victim); 
         message_vision(sprintf(m1), me ,victim);
         victim->receive_wound("kee",300,me);
         COMBAT_D->report_status(victim, 1);
         me->add("force",-40);      
     }else        
     if( me->query("family/master_name")=="赵鹤" ||
         me->query("sha-stop-4",1))
     {
        message_vision(sprintf(HIW"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第四式"HIW"‘"HIY"暖阳"HIW"’!!。\n"NOR),me ,victim);    
          message_vision( sprintf(m1),me ,victim);
          victim->receive_wound("kee",300,me);
          me->add("force",-15);        
     }else
     if( me->query("family/master_name")=="梅影" ||
         me->query("sha-stop-5",1))
     {
        message_vision(sprintf(HIW"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第五式"HIW"‘"HIC"冬阳"HIW"’!!。\n"NOR),me,victim);   
           message_vision(sprintf(m1),me,victim);
           victim->receive_wound("kee",300,me);
           COMBAT_D->report_status(victim, 1);
           me->add("force",-10);                
      }else
      if(me->query("family/master_name")=="何双双" ||
         me->query("sha-stop-6",1))
      {
        message_vision( sprintf(HIW"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第六式"HIW"‘"HIY"朝阳"HIW"’!!\n"NOR),me ,victim );    
           message_vision(sprintf(m1),me ,victim ); 
           victim->receive_wound("kee",300,me);
           COMBAT_D->report_status(victim, 1);
           me->add("force",-10);              
       }else               

        if( me->query_skill("shasword",1) >=60 ||  me->query("sha-stop-7",1))
// 给改拜player 的人用 
       {
         message_vision( sprintf(HIW"\n$N狂性骤起，口中喃喃有辞，使出仙剑禁断之连阳七诀第七式"HIW"‘"HIY"夕阳"HIW"’!!\n"NOR), me ,victim );        
           message_vision(sprintf(m1), me ,victim );
           victim->receive_wound("kee",300,me);
           COMBAT_D->report_status(victim, 1);
           me->add("force",-30);            
            }
          }   
  }
}

string query_parry_msg(string limb)
{
 object me=this_player();
 object weapon;

 if(!me)
  return unarmed_parry_msg[random(sizeof(unarmed_parry_msg))];
 weapon=me->query_temp("weapon");
  if(weapon && weapon->query("skill_type")=="sword")
      return parry_msg[random(sizeof(parry_msg))];
  else 
      return unarmed_parry_msg[random(sizeof(unarmed_parry_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 40 )
                return notify_fail("你的体力不够了，休息一下再练吧。\n");
        if( (int)me->query("force") < 5 )
                return notify_fail("你的内力不够了，休息一下再练吧。\n");
        me->receive_damage("kee", 40);
        me->add("force", -5);
        return 1;
}

string perform_action_file(string action)
{
          return CLASS_D("swordsman")+"/shasword/"+action;
}   
         
