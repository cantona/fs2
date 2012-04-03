inherit NPC;

void create()
{
	set_name("金刀门第六代弟子",({"trainee"}));
	set("long","行走于江湖中的金刀派弟子 , 你看他衣着华丽
神采奕奕 , 不禁甚为向往 , 他现在正在跟老板杀价 !\n");
	set("gender","男性");
	set("combat_exp",8000);
	set("attitude","peaceful");
	set("age",22);
	set("class","blademan");
	set("str",20);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("blade",30);
	set_skill("dodge",30);
	set_skill("parry",30);
	 set_skill("fly-steps",30);
	 set_skill("gold-blade",30);
	map_skill("dodge","fly-steps");
	map_skill("blade","gold-blade");
	set("chat_chance",20);
	set("chat_msg",({
	"金刀门第六代弟子正端详着一把钢刀 !\n",
	"金刀门第六代弟子说道 :老板 , 算便宜一点啦 !\n",
	"金刀门第六代弟子说道 : 什么 ? 八两银子 , 这你就不厚道啦 !\n",
	}));
	setup();
	carry_object("/open/gblade/obj/g-blade")->wield();
	add_money("silver",5);
}
