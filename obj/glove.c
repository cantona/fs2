
// fight glove   make by chilice
#include <mudlib.h>
#include <ansi.h>
#include <armor.h>
#include <command.h>
inherit ITEM;
inherit F_SAVE;
inherit F_AUTOLOAD;
inherit F_DAMAGE;


void create()
{
	set_name("战斗手套",({"fight glove","glove"}) );
	set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
set("long",@LONG
这是一双受过魔崇神--拿各--诅咒的手套,能带给人无穷的爆发力
但只有拥有巫师神力的人才能使用它,否则将会招到天谴的(砍档)

用法:add <技巧> <数值>


用法:change <属性> <数值>

属性: kee,gin,sen,force,mana,atman,bellicosity,food,water
	max_kee,eff_kee

用法:trans <种类> <名称> 

example->trans name 白痴
LONG);
set("unit","双");
        set("value",1750);
        set("material","crimsonsteel");
        set("armor_prop/armor", 8);
        }
        setup();
}

int query_autoload()
{
  if (wizardp(this_player()))
    return 1;
  else return 0;
}

void init()
{
  object me;
  seteuid(geteuid());

  me = this_player();
  if (me)
	set_name (me->name(1)+ "战斗手套", ({ "fight glove","glove" }));
  else
	set_name ("战斗手套", ({ "fight glove","glove" }));
add_action("do_add","add");
add_action("do_change","change");
add_action("do_trans","trans");
  this_player()->set_temp("heat",1);
}

int do_add(string str){
	int amount;
	string skil;
	object me;
if (!wizardp(this_player())) {
	write("hmm.......想被砍档喔!!\n");
return 1;
}
if(!str||sscanf(str, "%s %d",skil,amount)!=2)
	return notify_fail("[glove]:add <技巧> <数值>\n");
	me=this_player();
	me->set_skill(skil,amount);
message_vision( sprintf("$N手套的四周忽然射出"+CYN+"诡异的蓝光"+NOR+",%s暴增为%d！！！\n",skil,amount),me);
return 1;
}

int do_change( string str) {
	int num;
	string po;
	object me;
if (!wizardp(this_player())) {
	write("hmm.......想被砍档喔!!\n");
return 1;
}
if(!str||sscanf(str, "%s %d",po,num)!=2)
	return notify_fail("[glove]:change <属性> <数值>\n");
	me=this_player();
	me->set(po,num);
message_vision( sprintf("$N的手套忽然发出强烈的"+CYN+"蓝色异光"+NOR+",%s变为%d！！！\n",po,num),me);
return 1;

}

int do_trans(string str){
	string ch1,ch2;
	object me;

if (!wizardp(this_player())) {
	write("hmm.......想被砍档喔!!\n");
return 1;
}
if(!str||sscanf(str, "%s %s",ch1,ch2)!=2)
return notify_fail("[glove]:trans <种类> <名称>\n");
	me=this_player();
	me->set(ch1,ch2);
	message_vision( sprintf("$N的%s改为%s\n",ch1,ch2),me);
return 1;
}
