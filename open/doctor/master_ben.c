//master of cure
//change by adam

#include <ansi.h>
inherit NPC;
inherit F_MASTER;
int time=0;

void create()
{
	set_name("扁鸠",({"Master Ben","master","ben"}) );
        set("long",
	"扁鹊的第四代子孙，继承先组的遗志，广传医学，\n
	别看他个头小小的，被他扎上一针可就有你受的。\n");
	set("nickname",HIC"药到病除"NOR);
	set("gender", "男性" );
	set("combat_exp",1000000);
	set("force"       , 4000);
	set("max_force"   , 4000);
        set("force_factor", 20);
	set("class","doctor");
        set("title","医者工会的老大");
        set("guild_master",1);
	set_skill("unarmed",60);
	set_skill("parry",40);
	set_skill("dodge",60);
	set_skill("force", 60);
	set_skill("literate",60);
	set_skill("cure",100);
	set_skill("dagger", 60);
	set_skill("move",40);
	set_skill("poison",70);
	set_skill("throwing",90);
	
	set("inquiry", ([
	"扁鹊":"此人乃在下之先祖，为造福世人，穷尽\n
	毕生精力研究医学，也是本门之开山始祖。\n",
	"name":"在下乃是扁鹊的第四代子孙，请多多指教.\n",
	]) );

	setup();
}

void init()
{
	add_action("do_join","join");
	set_heart_beat(1);
}
void heart_beat()
{
	object pill;
	if(time++ > 1000)
	{
	pill=new(CLASS_D("doctor/medicine/curesick"));
        pill->set("value", 100000);
	pill->set("medicine_power",200);
	pill->move(this_object());
	command("auc pill");
	time=0;	
	}
        :: heart_beat();
}

int do_join(string str)
{
	object me=this_player();
	if(str!=0)
	  return notify_fail("请打\"join\"即可。\n");
	if(me->query("class")=="doctor")
	return notify_fail("你不要开玩笑了，你不是早就加入了吗？\n");
	if( me->query("class") )
	  return notify_fail("你已经加入了别的工会了\n");
	me->set("class","doctor");
/*
	printf("%s给%s一组针灸用的银针。\n",
	this_object()->name(),me->name());
*/
	tell_object(me,"恭禧你！你已经成为医者的一员了。\n");
	 message("system",HIC "扁鸠纵声大笑 :\n
	 欢迎" +this_player()->name()+ "加入银针门 !\n
	 我们医者终于后继有人了 !\n
	 各位伙伴们 , 让我们一起欢迎他吧 !!\n\n"NOR,users());
	        
	
	
	return 1;
}
