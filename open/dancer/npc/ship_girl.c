inherit NPC;

void create()
{
	set_name("船孃",({"ship girl","girl"}));
	set("long","一个双十年华的姑娘 , 以优美的姿态操控着船 !\n");
	set("gender","女性");
	set("combat_exp",30000);
        set("attitude","heroism");
	set("age",20);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("unarmed",40);
	set_skill("dodge",60);
	set_skill("parry",60);
	set("chat_chance",20);
	set("chat_msg",({
	"海浪拍打着船身 , 溅起一阵阵的海花 !\n",
	"耳边传来阵阵的海浪声及海鸟的叫声令人悠然入梦 !\n",
	"放眼望去是一片的碧海蓝天 , 真是美丽啊 !\n",
	}));
	setup();
	add_money("silver",10);
}
 int accept_kill(object me)
 {
	return notify_fail("船孃说道 : 既然如此我就不客气了!\n");
  }
 int accept_fight(object me)
 {
	 return notify_fail("船孃害怕道 : 不要欺负弱小好吗:~~~~\n");
 }
