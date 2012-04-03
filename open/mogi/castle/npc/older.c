
// by roger

inherit NPC;
int do_acc();
void create()
{      
        set("title","仙剑派第二代掌门");
        set_name("上官无极",({"older"}));
        set("gender","男性");
        set("age",90);
        set("str",30);
        set("long","他是仙剑派第二代掌门掌门，几十年前将掌门传给郑士欣后从江湖上退
隐，没想到竟在「妖魔古堡”里。\n");   
        set("inquiry",([
        "妖魔古堡" : "我本是仙剑掌门，前来寻找我师弟风清扬的下落，没想到这些妖魔实在太厉害了，尤其是「焚天魔王”。\n我现在正想办法「逃出去”。\n" ,
        "焚天魔王" : (:do_acc:),
        "逃出去"   : "我师弟当年在古堡里找到一个「地点”，这地点的妖气较薄弱且比较特殊，只要花一点灵力就可逃出去。\n不过我师弟当年受伤过重，因此在逃出不久后仍被抓回。\n",
        "地点"     : "上二楼后往北到底再往西即是，后悔的话就快走吧\n",
        "风青云" : "他是我师弟，传承本门祖师逍遥子之另一绝学「连阳七诀剑法”，不过他甚少涉足江湖你应该没听过\n",
        ]));
        add_action("do_acc","acc");
        set("combat_exp",4000000);
        set("max_gin",3000);
        set("gin",10);
        set("max_kee",3000);
        set("kee",10);
        set("max_sen",3000);
        set("sen",10);

        setup();
        add_money("gold",5);
}
int accept_fight(object who)
{
 return notify_fail("上官无极说:我快死了...还想打我？\n");
}
int accept_kill(object who)
{
 return notify_fail("上官无极说:我快死了...还想杀我？\n");
}
void init() {
        object obj;

        ::init();
        if(interactive(obj=this_player()) && !is_fighting()) 

        {
        remove_call_out("greeting");
        call_out("greeting",1,obj);
        }
}
void greeting(object ob)
{
        command("sigh");
}
int do_acc()
{
object me;
me = this_player();
    command("say 焚天魔王是妖魔古堡之主，武\功非常强，最可怕的是什么极火三掌的...");
    command("say 极火三掌一出，焚天烈地，威不可挡，实在是太可怕了..."); 
    command("fear");
    command("say 听说「风青云”「被关”在古堡里，地点由魔王亲自把守。");
    return 1;
}

