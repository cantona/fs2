#include <ansi.h>
inherit NPC;

string ask_help();

void create()
{
    set_name("跛脚老头", ({"old man","man"}));
    set("age",80);
    set("long", "一个跛脚的老头，他的脚好像被什么生物咬伤了似的。\n");
    set("inquiry",([
         "救命"     :  (: ask_help :),
    ]));
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
    add_action("do_help","help");
    add_action("do_feed","feed");
    add_action("do_accept","accept");
    add_action("do_unaccept","unaccept");
}
int do_feed(string arg)
{
    object me, ob;

    me=this_player();

    if(arg == "man" && me->query_temp("get_pill")==1 && ob=present("tiger_cornu-pill",me))
{
	destruct(ob);
	write("你将药丸放入老头的口里，并喂了他一些水...\n"NOR);
	write("老头将药丸「咕噜！”一声给吞了下肚...\n"NOR);
	command("say ㄚ...果然是舒服多了，脚也没那么痛了，嗯！看来我是错怪你了...");
	command("sorry "+me->query("id"));
	write("老头提起笔又写了封信，交给了你...\n"NOR);
	command("say 这封信是我为我的鲁莽向你跟华神医他老人家道歉的，请收下...");
	write("你欣然的收下了这封信，内心感到相当的快乐！\n"NOR);
	ob=new("/open/doctor/obj/sec-letter");
	ob->move(me);
	me->delete_temp("get_pill");
	me->set_temp("sec_letter",1);
	return 1;
  }
}
int do_accept()
{
    object me, ob;

    me=this_player();
    ob=new("/open/doctor/obj/letter");

    if(me->query_temp("sos_man")==1)
{
	write("你收下了老头的信...\n"NOR);
	command("say 你给我老实点，把信给交到华神医他老人家的手上啊！！");
	ob->move(me);
	me->delete_temp("sos_man");
	me->set_temp("sos_letter",1);
	return 1;
  }
}
int do_unaccept()
{
    object me=this_player();

    if(me->query_temp("sos_man")==1)
{
	write("你对着老头说：你个死老头！我好心救你竟还如此嚣张，这信你要送救自己送，我才懒得理你！\n"NOR);
	command("say 唷呵！你这臭小子这么凶ㄚ！你肯定会后悔的...嘿嘿！");
	me->set("quest/sosman",1);
	return 1;
  }
}
string ask_help()
{
    object me=this_player();

    if(me->query("class")=="doctor" && !me->query("quest/sosman")==1 && me->query("combat_exp")>=500000)
{
	write("你见到老头的脸色瞬间大变...\n"NOR);
	command("cow "+me->query("id"));
	call_out("do_help1",1,me);
  }
}
int do_help1(object me)
{
	write(HIY"跛脚老头怒道：你是个医生ㄟ！你居然问我如何救命？\n"NOR,me);
	call_out("do_help2",2,me);
}
int do_help2(object me)
{
	write(HIY"跛脚老头怒道：我看你实在是该好好的检讨检讨了！\n"NOR,me);
	call_out("do_help3",2,me);
}
int do_help3(object me)
{
	write(HIY"跛脚老头怒道：真不知道为何以华老如此神医之尊，竟会教出你这样的弟子！\n"NOR,me);
	call_out("do_help4",2,me);
}
int do_help4(object me)
{
	write(HIY"跛脚老头怒道：你给我在这站好，我写封信给他老人家！\n"NOR,me);
	call_out("do_help5",2,me);
}
int do_help5(object me)
{
	write(HIY"跛脚老头开始写起告状信来...还不时以鄙视的眼神瞄你...使你感到浑身不自在...\n"NOR,me);
	call_out("do_help6",7,me);
}
int do_help6(object me)
{
	write(HIY"跛脚老头拿着信对你说道：呐！你给我收好这封信...(accept/unaccept)\n"NOR,me);
	me->set_temp("sos_man",1);
	return 1;
}
void greeting(object me)
{
    if(me->query("class")=="doctor"
    && !me->query("quest/sosman")==1
    && !me->query_temp("sos_man")==1
    && me->query("combat_exp")>=500000)
{
	command("sos "+me->query("id"));
	command("say 你是一位医生吧？求求你帮帮我！救命ㄚ！");
}
	else
{
	command("sos");
  }
}
