// consider.c 
// 以实战经验 气的最大值 防御力 攻击力 str con 及 杀气
// 以公式判断敌我 并加入 实力差别之级数 
// by Anmy  98/5/28 初版

#include <ansi.h>
inherit F_CLEAN_UP;

void create()
{
        seteuid(getuid());
}
int main(object ob, string str)
{

int range,range1,range2,range3,range4;
int ex1,ex2,ke1,ke2,wc1,wc2,be1,be2;
int at1,at2,st1,st2,co1,co2;
ex2=this_player()->query("combat_exp");
ke2=(int)this_player()->query("max_kee");
wc2=(int)this_player()->query_temp("apply/armor");
at2=(int)this_player()->query_temp("apply/damage");
st2=(int)this_player()->query("str");
co2=(int)this_player()->query("con");
be2=(int)this_player()->query("bellicosity");
range1=(ex2/4+ke2+wc2*2+be2+at2*2+st2+co2);
    if(!str) {
	notify_fail("使用方法 : <consider [对象]>\n");
	return 0;
    }
    ob = present(str,environment(this_player()));
    if(!ob) {
	notify_fail(str+" 不在这里\n");
	return 0;
    }

    if(ob==this_player()) {
        notify_fail("自己和自己比较的结果是一样的\n");
//write("你凝气聚精来感应自己全身的状态, 你凭本身的修为\n估计目前的综合能力约 "+HIC+range1+NOR+" 上下\n");
        return 0;
    }
ex1=ob->query("combat_exp");
ke1=(int)ob->query("max_kee");
wc1=(int)ob->query_temp("apply/armor");
at1=(int)ob->query_temp("apply/damage");
st1=(int)ob->query("str");
co1=(int)ob->query("con");
be1=(int)ob->query("bellicosity");
range3=((ex1+ex2)/200);
range2= (ex1/4+ke1+wc1*2+be1+at1*2+st1+co1);
if(wizardp(this_player())) printf("range3=%d\n",range3);
if(!range3) range3=1;
if(!range2) range2=1;
range= ((range2/range3)-(range1/range3));
        if(range < - 30) {
         write("你要杀死"+ob->name()+"就如要踩死蚂蚁般容易\n");
write("你以本身修为判断"+ob->name()+"的江湖历练大约是"HIR"超级肉脚"NOR"的级数\n");
       return 1;
    }
          if(range < -25) {
      write("哇哈哈哈～, "+ob->name()+"看起来根本不是你的对手!\n");
write("你以本身修为判断"+ob->name()+"的江湖历练大约是"HIR"普通肉脚"NOR"的级数\n");
	return 1;
     }
     if (range < -20) {
	write("你感觉"+ob->name()+"不过是个大肉脚, 根本不屑一顾\n");
write("你以本身修为判断"+ob->name()+"的江湖历练大约是"HIC"小卒仔"NOR"的级数\n");
         return 1;
     }
       if (range < -15) {
write("虽然从各方面看来你都比"+ob->name()+"略胜一筹, 但是也不能轻敌。\n");
write("你以本身修为判断"+ob->name()+"江湖历练大约是"HIC"普通角色"NOR"的级数\n");
      return 1;
     }
    else if(range < -5) {
    write("你感觉"+ob->name()+"跟你势钧力敌, 看来将有一场龙争虎斗\n");
write("你以本身修为判断"+ob->name()+"的江湖历练大约是"HIY"不分上下"NOR"的级数\n");
       return 1;
    }
      else if(range < 10) {
write("你感觉"+ob->name()+"比你强一点, 你必需要有充份的准备才有胜算。\n");
write("你以本身修为判断"+ob->name()+"的江湖历练大约是"HIY"普通硬角"NOR"的级数\n");
          return 1;
       }
       else if(range < 20) {
         write("小心点，"+ob->name()+"比你略胜一筹, 你的胜算不大\n");
write("你以本身修为判断"+ob->name()+"的江湖历练大约是"HIY"一般高手"NOR"的级数\n");
       return 1;
       }
        else if(range < 25) {
        write("小心点，"+ob->name()+"可是很硬的喔, 得花一番功夫\n");
write("你以本身修为判断"+ob->name()+"的江湖历练大约是"HIM"武林高手"NOR"的级数\n");
       return 1;
    }
          else if(range < 30) {
          write("算了吧, 要打倒 "+ob->name()+" 得再回去苦练十年\n");
          write(HIC"你开始感觉到一股强大的气息向你逼进\n"NOR);
write("你以本身修为判断"+ob->name()+"的江湖历练大约是"HIM"深不可测"NOR"的级数\n");
        return 1;
       }
       else if(range <35) {
          write("凭你的实力想打倒"+ob->name()+", 简直是难如登天\n");
write(HIY"你感觉到一股十分强大的气息向你迫进\n"NOR);
write("你以本身修为判断"+ob->name()+"的江湖历练大约是"HIW"空前绝后"NOR"的级数\n");
         return 1;
      }
    else {
write("别梦想了 , 直接去自杀也许对你还比较快喔, "+ob->name()+"的实力深不可测!\n");
write(HIY"你感觉到十分惊人的力量和杀气从"+ob->name()+"身上散发出来\n"NOR);
write("你以本身修为判断"+ob->name()+"的江湖历练大约是"HIW"天神般无所伦比"NOR+"的级数\n");
       return 1;  
    }
}

void help() {
    write("指令用法 : <consider [对象]>\n\n"+
           "比较你和对方的强度\n");
}
