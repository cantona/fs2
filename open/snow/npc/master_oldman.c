#include <ansi.h>
inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("神秘老人",({"oldman"}));
set("long", "一个看起来全身脏盻盻的老人，脚上还有一个脚铐，看起来像是被关在这里的。\n");
        set("gender", "男性" );
        create_family("魔刀莫测",1," ");
        set("title","");
        set("age",70);
        set("str",44);
        set("class","blademan");
        set("guild_class","blademan");
        set("cor", 30);
        set("cps", 27);
        set("int", 24);
        set("max_force",3000);
        set("force",3000);
        set("force_factor",15);
        set("kee",5000);
        set("max_kee",5000);
        set("bellicosity", 1500);
        set_skill("force", 100);
        set_skill("blade", 100);
        set_skill("dodge", 70);
        set_skill("move", 70);
        set_skill("powerforce", 100);
        set_skill("dragon-blade", 120);
        set_skill("parry", 95);
        map_skill("parry","dragon-blade");
        map_skill("blade","dragon-blade");
        map_skill("force","powerforce");
        set("combat_exp", 1500000);
        set("chat_chance_combat",80);
        set_temp("apply/armor",90);
        set_temp("apply/damage",90);
        set("chat_msg_combat",({
        (: perform_action, "blade.power-dest" :),
      }));

        set("inquiry", ([
"脚铐":
 "这个脚铐是用千年寒铁石打造的，一般兵器是砍不断的。\n",
           "千年寒铁石":
"这是经过千年孕育而成的坚硬石块，除非有神兵利器，不然无
法砍断。\n",
           "神兵利器":
"听说人间至宝「金鳞蟒邪”配上「天邪石”可以毁灭千年寒铁石。\n",
           "金鳞蟒邪":  "听说金鳞蟒邪好像落在茅山派手上。\n",
           "天邪石":   "天邪石在独孤愁传人的手里。\n",
        ]) );

        add_temp("apply/attack",30);
        add_temp("apply/dodge",30);
        setup();
        carry_object("/daemon/class/blademan/obj/iceblade")->wield();
}
void attempt_apprentice(object ob)
{
        if(this_player()->query_skill("dragon-blade",1)<105)
        {
        command("say 滚！你给我滚开！\n");
        return ;
        }
        command("smile");
        command("say 嗯，果然青出于蓝，从今后老夫亲自传授于你。");
        command("say 但是魔刀武学不能外传，切记，切记。");
        ob->delete("family");
        command("recruit "+this_player()->query("id"));
        this_player()->set("title","魔刀绝世传人");
        this_player()->set("no_recruit", 1);
        this_player()->delete("can_apprentice");
        message("system",HIB"魔刀莫测纵声狂笑:
哈哈哈哈～～魔刀一出～～血流成河～～无所匹敌。\n"NOR,users());
        return ;
        }
int accept_object(object who,object ob)
{
    string ob_id;
    ob_id=ob->query("id");
    if(who->query("quests/blade_out")==0)
    {
    if(ob_id=="stone")
    {
    destruct(ob);
    command("say 我没看错吧，你竟然能将天邪石拿到手！");
    this_player()->set("give_1",1);
    }
    if(ob_id=="snake sword")
    {
    destruct(ob);
    command("say 太好了，这正是我需要的东西！");
    this_player()->set("give_2",1);
    }
    }
if(who->query("give_1")==1 && who->query("give_2")==1)
{
    command("say 太好了！");
    message_vision(
             HIY
"$n将天邪石的神力注入金鳞蟒邪之中，然后运劲一砍，将脚铐砍断。\n" NOR,this_player(),this_object());
    CHANNEL_D->do_channel(this_object(),"mud",HIR
"远处传来魔刀莫测的大喝:\n我自由了！哈哈哈哈！\n独孤愁！你这个老贼等着吧！我要一雪这十几年禁锢之恨！\n"NOR);
           command("say 感谢你释放了我，我这就去宰了独孤老贼。");
           command("say 不过看在你曾帮我，好吧，我将部分内力传给你。");
           this_player()->add("max_force",100);
           this_player()->add("force",100);
           who->set("quests/blade_out",1);
           who->delete("give_1");
           who->delete("give_2");
   }
      else
{
             if(ob_id!="snake sword" && ob_id!="stone" ) 
             return 1;
}
}
