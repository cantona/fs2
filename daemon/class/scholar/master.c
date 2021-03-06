// 书生公会老大 master.c by Onion
//change by adam 97/11/25
#include <ansi.h>
inherit NPC;
inherit F_MASTER;
string do_agree();

void create()
{
	set_name("杨书文", ({ "master yang", "yang", "master" }) );
        set("long",
        "杨书文是个面貌和蔼的儒生，他在数十年前还是个尚书大人，不过后来决意高悬乌纱帽，"+
        "退出官场，如今已经不问政事，转而研习武术之道，轻轻松松的过日子。\n");
	set("nickname", "春秋笔");
	set("gender", "男性" );
	set("age", 60);
	set("cor", 30);
	set("cps", 27);
	set("int", 24);

	set("max_force", 1500);
	set("force", 1500);
	set("force_factor", 3);

        set("rank_info/respect", "杨尚书");
        set("officer_class","退休大尚书");
        set("guild_master",1);
        set("class","scholar");
	set("title",HIW"书生工会荣誉会长"NOR);
	set("combat_exp",1000000);
   set_skill("dodge",60);
	set_skill("be-officer", 20);
     set_skill("stabber",100);
	set_skill("force", 80);
        set_skill("magic", 20);
	set_skill("move", 60);
	set_skill("parry", 60);
	set_skill("unarmed",40);
	set_skill("literate",95);
  set_skill("spells",20);
   set_skill("cure",60);
	set("inquiry", ([
	"name" : "老夫便是当今书生之首，杨文书，尊敬我的呢，便称我为杨尚书。",
	"here": "这里便是书生工会。",
	"agree" : (: do_agree :),
	"书生工会":"你也想成为一名书生吗?只要加入(join)就行了。",
	]) );

	setup();
        carry_object(CLASS_D("scholar")+"/obj/gold_pen")->wield();
}

void init()
{
	add_action("do_join","join");
}

int do_join(string str)
{
	object me=this_player();
	if(str!=0)
	  return notify_fail("请打\"join\"即可。\n");
	if(me->query("class")=="scholar")
	  return notify_fail("你已经是书生工会的一员了。\n");
	if(me->query("class")!=0)
	  return notify_fail("你已经加入了别的工会了\n");
	me->set("class","scholar");
	write(HIC"杨书文和蔼的对你说：从今后，你便是书生工会的一员了。\n"NOR);
	command("pat "+getuid(me));
	tell_object(users(),query("name")+HIC"长啸道：欢迎"+me->query("name")+
	"加入书生工会。\n"NOR);
	return 1;
}
string do_agree()
{
	object me=this_player();
        if( me->query("class")!="scholar" )
          return("抱歉, 书房并不开放给非书生公会成员。\n");
//关掉以下限制杀气的程式by bss
//  if( me->query("bellicosity") > 100 )
//     return("抱歉, 你的杀气太重, 我的书房不欢迎你这种人, 做些善事先。\n");
        me->set_temp("进入书房",1);
        return("欢迎..欢迎..你可以进入书房了。\n");
}

