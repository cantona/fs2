// powerup.c

#include <ansi.h>

inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

string *report = ({
	"职政以后，政绩良好，深得民心。\n",
	"为官清正，表现极佳。\n",
	"才学渊博，处事有条有理。\n",
	});

string *down = ({
	"错失一贤，国未必亡，用错一人，贻祸万年，请皇上三思。\n",
	"微臣认为，此人虽佳，但尚年轻，经验未足，皇上宜三思。\n",
	"微臣认为此人尚年轻，不足以担当大任。\n",
	"据微臣所知，此人并非如传闻般好，请皇上三思。\n",
	});
int main(object me, string arg)
{
	object ob;
	string msg;
	int th;
	int i,power,count=0;
	int too,max_power;
	string *name;

	if(!arg||sscanf(arg,"by %s",arg)!=1)
		return notify_fail("格式：powerup by <officer>\n");

	if(!objectp(ob = present(arg, environment(me))) )
		return notify_fail("这里没有这个人。\n");
        
        if( me->query("sen") < 50)
                return notify_fail("你的神不足。\n");
	if(!living(ob)||ob->query("class")!="officer")
		return notify_fail("你只能请朝廷官员帮你提升权力。\n");

	if(userp(ob)&&ob->query("no_power")!=1) return notify_fail("他不愿帮你。\n");

	name=keys(me->query("relation"));
	for(i=0;i<sizeof(name);i++)
		count=count+me->query("relation/"+name[i]+"/value")*me->query("relation/"+name[i]+"/power");
	count+count/2;
	power=count/200+me->query("office_exp")/20000;
	max_power = me->query("max_officer_power");
        if(power==max_power || max_power > 50000)
		return notify_fail("你的权力已达上限。\n");
	me->add("sen",-50);
	message_vision(
	CYN "$N说道：$n大人，能否为下官在皇上面前美言几句 ?\n",me,ob);
	if(me->query("relation/"+ob->query("id")+"/value")+25<ob->query("officer_power")/2)
	{
		message_vision(
		"$n脸色上似乎有难言之隐。\n" NOR,me,ob);
		return 1;
	}
	if(ob->query("officer_power")<50)
	{
		message_vision(
		"$n说道：下官官职卑微，恐怕帮不了你。\n" NOR,me,ob);
		return 1;
	}
	message_vision(
	CYN "$n说道：没问题，包在我身上。\n" NOR,me,ob);
	msg=HIR+ob->name()+"上奏天子：\n";
	msg+=HIY+me->query("officer_class")+me->name()+report[random(sizeof(report))];
	msg+=ob->name()+"：";
	msg+="微臣恳请皇上为"+me->name()+"升职，以尽用其人，造福万民。\n";
	for(too=0;too<sizeof(name);too++)
	if(me->query("relation/"+name[too]+"/value")>0&&name[too]!=ob->query("id"))
		msg+=HIG+me->query("relation/"+name[too]+"/name")+"：微臣也认为"+me->name()+"应受重用。\n";
	for(i=0;i<sizeof(name);i++)
 		if(me->query("relation/"+name[i]+"/value")<0)
		{
			th=me->query("relation/"+name[i]+"/value")*(-1)/10;
			if(th>3) th=3;
			msg+=HIM+me->query("relation/"+name[i]+"/name");
			msg+="："+down[th];
		}
	if(me->query("max_officer_power")<power)
		msg+=HIC+"皇上："+me->name()+report[random(sizeof(report))]+"      "+me->name()+"官升一品。\n";
	else
		msg+=HIC+"皇上：朕素为此人为官办事不力，非国之栋梁也。\n      "+me->name()+"官降一品。\n";

//	message("system",msg+NOR,users());
        message_vision(msg+NOR,me);
	me->set("officer_power",power);
	me->set("max_officer_power",power);


	return 1;
}

int help(object me)
{
   write( @HELP
指令格式：powerup by <officer>

这个指令让你可以由藉由其他大臣帮你提升权力。
HELP
   );
   return 1;
}
