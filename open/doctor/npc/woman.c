#include <ansi.h>
inherit NPC;

void create()
{
    set_name("老妇人", ({"old woman","woman"}) );
    set("title",HIR"焦急无助"NOR);
    set("long", "一个焦急无助的老妇人。\n");
    set("gender", "女性");
    set("age", 73);
    set("attitude", "peaceful");
    set("chat_chance", 4);
    set("chat_msg", ({
         "老妇人焦急的走来走去，一脸悲伤的样子！\n",
        }));
    setup();
}
void init()
{
    object me=this_player();
    ::init();

    if(interactive(me) && !is_fighting())
{
        remove_call_out("greeting");
        call_out("greeting", 1, me);
}
    add_action("do_say","say");
}

int do_say(string arg)
{
    object me=this_player();

    if(!me->query("doctor/savedie")==1 && (int)me->query("combat_exp") >= 2000000)
{
    if( arg == "好" )
{
	command("wa "+me->query("id"));
	command("say 真是太感谢您了，我儿子得的是种怪病，麻烦你看看(check)他！");
	me->set("doctor/agree_woman", 1);
	return 1;
}
    if( arg == "不好" )
{
	command("sigh "+me->query("id"));
	command("say 你真是个无人性的医生......");
	return 1;
  }
}
    if(me->query("doctor/check_man")==1)
{
    if( arg == "情况似乎不太乐观" )
{
	write("你告诉老妇人，病人的情况似乎不太乐观...\n"NOR);
	command("nod "+me->query("id"));
	command("say 华神医也是这样说的，但神医好像有提到什么「不传之技”之类的...");
	command("say 要是可以找到有人拥有这样能力的人，该有多好...");
	command("sigh");
	me->set("doctor/tell_woman", 1);
	return 1;
    }
  }
}
void greeting(object me)
{
    if(me->query("doctor/agree_woman")==1)
{
	command("say 麻烦您快看看我的儿子ㄚ！");
}
    if(me->query("class")=="doctor" && !me->query("doctor/savedie")==1)
{
	write(HIY"老妇人紧紧握着你的手，一脸哀伤的望着你！\n"NOR);
	write(HIY"老妇人哭道：这位神医，请您救救我的孩子好不好？！\n"NOR);
	command("sob "+me->query("id"));
}
	else
{
	command("sigh");
	command("say 唉！你是帮不上忙的...");
  }
}