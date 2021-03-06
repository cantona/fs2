#include <ansi.h>
inherit NPC;
inherit SSERVER;
string ask_gblade();
string help_yuan();
string ask_ba();
string ask_lotch();
string ask_blade();
void do_surrender();

void create()
{
        set_name("陈元贵",({"yuan"}));
        set("long","一个正在打杂的仙剑弟子 , 当你看他的时后 , 你发现他的眼角闪过一丝狡猾的神色 !\n");
        set("gender","男性");
        set("combat_exp",20000);
        set("attitude","peaceful");
        set("age",26);
        set("class","blademan");
        set("str",20);
        set("cor", 30);
        set("per", 25);
        set("int", 30);
        set("cps",20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        set_skill("unarmed",30);
        set_skill("dodge",30);
        set_skill("parry",30);
        set("chat_chance_combat",100);
        set("chat_msg_combat",({
        (: do_surrender :)
        }));
        set("inquiry",([
        "下落"  : "靠 , 干走我的宝刀还敢来向我问东问西的 \n",
        "宝刀"  :  "哇勒 , 寻我开心啊 ? \n",
        "紫金六阳刀法"  : (: help_yuan :),
        "炼妖壶"   :  (: ask_lotch :),
        "王元霸"  : (: ask_ba :),
        "金刀门"  :  (: ask_gblade :),
        "龙虎刀"  :  (: ask_blade :)
        ]));
        setup();
        add_money("silver",1);
        set("chat_msg",({"chat chat \n"}));
}
void init()
{
        object ob;
        ::init();
        if(interactive(ob=this_player() ) && !is_fighting() )
        {
        remove_call_out("greeting");
        call_out("greeting",2,ob);
        }
        set_heart_beat(1);
}
void greeting(object ob)
{
        if(ob->query_temp("help_yuan") )
        {
        command("say 谢谢你啦 , 我就告诉你炼妖壶的下落吧 !");
        command("say 其实炼妖壶是被魔教所偷走的 !");
        ob->set("lotch",5);
        ob->delete_temp("help_yuan");
        }
}
void do_surrender()
{
        object target, *enemy;
        int i;
        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target = offensive_target(this_object());
        if(!target) return ;
        if(target->query_temp("know_blade")&&target->query_temp("know_gblade") )
        {
        if(!target->query("marks/得龙虎刀") && this_object()->query("kee")<60 )
        {
        message_vision("陈元贵说道 : 大侠 , 饶命啊 , 这把龙虎刀给你好了 !\n",target );
        new("/open/gblade/obj/dragon-blade")->move(target);
        target->set("marks/得龙虎刀",1);
        target->delete_temp("know_blade");
        target->delete_temp("know_gblade");
        message_vision("陈元贵拿出了龙虎刀 , 交给了$N\n",target);
        target->remove_enemy(this_object());
        this_object()->remove_enemy(target);
        }
        }
}
string help_yuan()
{
         if(this_player()->query("quests/lotch") || this_player()->query("lotch")>4)
        return "这是一门极强的刀法 !";
        if(this_player()->query("lotch")>3)
        {
        command("say 我还是较喜欢学此刀法 !");
        this_player()->set_temp("can_help_yuan",1);
        return "你能帮我向师父求情 , 重入师门吗 ?";
        }
        return "嗯 , 好刀法 !";
}
string ask_lotch()
{
        if(this_player()->query("quests/lotch") )
        return "哇 , 你有炼妖壶了 , 可别抓我啊 !\n";
        if(this_player()->query("lotch")<4)
        return "什么炼妖壶炼魔壶 , 走开 , 别烦我啦 !\n";
        command("say 你以为是我拿的 ? ");
        command("say 我跟你一样 , 只看到一个空盒子 !");
        return "不过我倒是知到炼妖壶的下落 ! \n";
}
string ask_ba()
{
        if(this_player()->query("quests/lotch") || this_player()->query("lotch")>4)
        return "正是恩师 !\n";
        if(this_player()->query("lotch")<3)
        return "王元霸 , 是谁啊 , 听这名子倒挺威风的 !\n";
return "哼 , 老贼 , 说什么我心术不正 , 硬是不传我紫金六阳刀法 \n";
}
string ask_blade()
{
        if(!present("dragon-tiger blade",this_player()) && this_player()->query("marks/得龙虎刀")&& this_player()->query("marks/还龙虎刀")!=1)
        {
            command("say 弄丢了吧 ？ 还好被我检了回来 ");
        new("/open/gblade/obj/dragon-blade")->move(this_player());
        message_vision("陈元贵将龙虎刀还给了 $N .\n",this_player());
        return "好好保管好 , 下次可没这么幸运了 !\n";
        }
            if(this_player()->query("quests/lotch") || this_player()->query("lotch")>4)
        return "你以经拿去还给恩师啦 !\n";
        if(this_player()->query("lotch")<3)
        return "我不知道你在说什 ?";
        if(this_player()->query("marks/得龙虎刀") )
        return "我不是给你了 !\n";
        if(!this_player()->query_temp("know_gblade") )
        {
        this_player()->set_temp("know_blade",1);
        command("fear");
        return "你还知道些什么 ?";
        }
        command("say 看来你都知道了 !");
        this_player()->set_temp("know_blade",1);
        this_object()->kill_ob(this_player() );
        return "一不做 , 二不休 , 纳命来 !\n";
}
string ask_gblade()
{
        if(this_player()->query("quests/lotch") || this_player()->query("lotch")>4)
        return "就是江湖上最好的门派啊 ! 赶快加入我们吧 !\n";
        if(this_player()->query("lotch")<3)
        return "什么金刀门啊 , 没听过 , 会比我们仙剑强吗 ?\n";
        if(!this_player()->query_temp("know_blade"))
        {
        this_player()->set_temp("know_gblade",1);
        command("hmm");
        return "你还知道些什么 ?\n";
        }
        command("say 既然你都知道了 , 我就留不得你 !");
        this_player()->set_temp("know_gblade",1);
        this_object()->kill_ob(this_player());
        return "小子 , 算你命苦 !\n";
}
void heart_beat()
{
        if(this_object()->query("kee") < 60){
        do_surrender();
        if(!this_object()->query_temp("回复")){
        this_object()->add("kee",10);
        this_object()->add("gin",10);
        this_object()->add("sen",10);
        this_object()->set_temp("回复",1);
        }
        }
        ::heart_beat();
}
