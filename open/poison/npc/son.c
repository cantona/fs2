
inherit NPC;




void create()
{
	set_name("大牛",({"son"}));
	set("age",15);
	set_skill("dodge",10);
	set("combat_exp",100);
	
	set("long","樵夫的儿子,由于天生的弱智,使的他的反应较一般人迟钝,他看起来呆呆的.\n");
	set("chat_chance",6);
	set("chat_msg",({
		"大牛喃喃自语道:阿～～阿达!.\n",
		}) );
	setup();
}



