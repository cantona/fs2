inherit NPC;

void create()
{
         set_name("猎人阿三",({"hunter"}));
	set("long","一个从小在森林中长大的猎人,看他只身空手,却令森林中的猛兽如此
畏惧,难道他曾学过些武功?\n");
	set("gender","男性");
	set("combat_exp",23590);
        set("attitude","heroism");
	set("force",500);
	set("max_force",500);
	set("force_factor",5);
        set("age",25);
        set("score",100);
        set("str", 50);
        set("cor", 30);
        set("per", 15);
        set("int", 15);
	set("cps", 30);
	set("con", 30);
        set("kar", 20);
   /*
	set("chat_chance",10);
	set("chat_msg",({
	"猎人阿三说:死老虎,看我不扒下你的皮当地毯.\n",
	"猎人阿三说:其实我最感兴趣的还是那只白老虎.\n"}));
      */
        set_skill("dodge",30);
        set_skill("unarmed",30);
        set_skill("parry",20);
       set_skill("snow-martial",30);
        map_skill("dodge", "snow-martial");
        map_skill("unarmed", "snow-martial");
	set("inquiry",([
	"白老虎": "前几天我有看到一只白老虎,可惜被它溜了,唉,身为一个猎人,毕生
最大的心愿莫过于能得到白虎皮.\n",
	"白虎皮": "如果我能一睹白虎皮,三某死亦无憾.\n",
	]));
	setup();
        carry_object("/u/w/wugi/obj/hunter_cloth")->wear();
}
	int accept_object(object who,object ob)
	{
	string ob_id;
	ob_id=ob->query("id");
	if(ob_id=="white tiger skin")
	{
	command("say 这这..我实在太高兴了,你这个朋友我交定了,为了报答你的恩情
我告诉你一个秘密,在峭壁上的动穴里,住着一位仙人,三某承蒙仙人指导了几天,
因而身强力壮,受用无穷,你到洞穴中找找看(search hole),也许能有此机缘,得
遇高人.\n");
	}
	return 1;
	}
         
      
