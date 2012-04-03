inherit NPC;

void create()
{
	set_name("陆柏",({"lu bo","bo"}));
  set("long","张乘风之弟子 ,因武功远不及师兄而加紧勤练中 .\n");
	set("gender","男性");
	set("combat_exp",3613);
        set("attitude","heroism");
	set("age",21);
        set_skill("shasword",10);
       set_skill("sha-steps",3);
       map_skill("sword","shasword");
       map_skill("dodge","sha-steps");
	set("class","swordsman");
	set("force",150);
	set("max_force",150);
	set("family/master_name","张乘风");
	set("force_factor",3);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("sword",35);
	set_skill("dodge",35);
	set_skill("parry",35);
	setup();
	carry_object("/obj/longsword.c")->wield();
	carry_object("/open/gsword/obj/robe_1")->wear();
	add_money("silver",5);
	create_family("仙剑派",5,"弟子");
}

         
      
