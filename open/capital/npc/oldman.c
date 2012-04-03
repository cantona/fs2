// /open/center/npc/vendor.c
// 加入银针解谜物件-by nike-
#include <ansi.h>
inherit NPC;

string ask_wine();
string ask_cup();
			
void create()
{
	set_name("卖酒的老头", ({ "oldman"}) );
	set("gender", "男性" );
	set("age", 81);
	set("long", @LONG
一个卖酒的老头，看他红红的鼻子，就知道他平时也喜欢来两杯。
LONG);
	set("attitude", "friendly");
	set("combat_exp",230);
        set("inquiry", ([
                "冰清冽酒"     :  (: ask_wine :),
                "十锦珐琅杯"     :  (: ask_cup :),
        ]) );
	set("greeting_msg", ({
 	    "老头说道: 好喝的酒喔!\n",
	    "老头说道: 来盘花生下酒如何?\n",	
	}) );
	setup();
}
string ask_wine()
{
    object me=this_player();

    if(me->query("doctor/ask_flor")==1)
{
	command("haha");
	command("say 我猜猜...是任大少爷要你来的吧？");
	command("say 呵呵...每次都找别人来帮他买酒...");
	command("say 更怪的他还一定要用十锦珐琅杯来喝...");
	command("say 不如这样，你去找出珐琅杯...然后我来酿造二锅头...");
	command("say 咱们分头进行如何...好！既然没异议，那就这样说定啰！");
	me->delete("doctor/ask_flor");
	me->set("doctor/ask_cup",1);
	return "";
  }
}
string ask_cup()
{
    object me=this_player();

    if(me->query("doctor/ask_cup")==1)
{
	command("think");
	command("say 这...我是有听说在王家有不少十锦珐琅杯...");
	command("say 但我不知道在哪就是了...");
	command("hoho");
	me->delete("doctor/ask_cup");
	me->set("doctor/find_cup",1);
	return "";
  }
}
int accept_object(object me, object ob)
{
    if(me->query("doctor/get_cup") && ob->query("id")=="ten-cup")
{
	destruct(ob);
	command("nod "+me->query("id"));
	command("say 没错！就是这玩意儿...");
	command("say 我酒也好了...你等等，我来去斟酒...");
	command("say 偌！拿去...");
	command("say 别让任大少爷久候了...快去...");
	ob=new("/open/doctor/obj/wine");
	ob->move(me);
	me->delete("doctor/get_cup");
	me->set("doctor/get_wine",1);
	return 1;
  }
}