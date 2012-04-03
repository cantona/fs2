inherit NPC;

void create()
{
	set_name("小童",({"little boy","boy"}));
	set("long","一个十来岁的小童 .\n");
	set("gender","男性");
	set("combat_exp",147);
	set("attitude","friendly");
	set("age",11);
	set("class","blademan");
	set("str",12);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("blade",10);
	set_skill("dodge",10);
	set_skill("parry",10);
	setup();
	carry_object("/open/gsword/obj/suit")->wear();
}
  void greeting(object ob)
   {
    say("小童恭恭敬敬的行了个礼 .\n");
    call_out("do_act1",1);
    }
   void do_act1()
   {
    say("小童将手上之盘子端于王元霸前 .\n");
	call_out("do_act2",3);
    }
    void do_act2()
    {
    say("小童说道: 小的告退 .\n");
    call_out("do_act3",1);
 }
   void do_act3()
   {
   say("小童退了下去 .\n");
   destruct(this_object());
   }
