inherit NPC;

void create()
{
	set_name("王福",({"wang fu","wang","fu"}));
	set("long","你看他正匆忙的准备宴席 ,看来 , 又有要客造访金刀了 .\n");
	set("title","金刀门仆役");
	set("gender","男性");
	set("combat_exp",3000);
        set("attitude","heroism");
	set("age",38);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("unarmed",40);
	set_skill("dodge",30);
	set_skill("parry",30);
	setup();
	add_money("silver",10);
}
 int accept_kill(object me)
 {
  command("angry "+me->query("id"));
   return notify_fail("金刀仆役说道 :要不是有客人来 , 我就宰了你 !\n");
  }
 int accept_fight(object me)
 {
   return notify_fail("金刀仆役说道 :我很忙 , 没空陪你练功夫!\n");
 }
