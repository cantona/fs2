//master of cure
//change by adam

#include <ansi.h>
#include <marksman.h>
inherit NPC;
inherit F_MASTER;
int time=0;

void create()
{
        set_name("黄忠",({"Master houng","master","houng"}) );
        set("long",
        "三国时代，刘备手下，五虎将之一，曾与武圣关公较量过，\n
        \n");
        set("nickname",HIC"百步穿扬"NOR);
        set("gender", "男性" );
        set("combat_exp",1000000);
        set("force"       , 4000);
        set("max_force"   , 4000);
        set("force_factor", 20);
        set("class","marksman");
        set("title","射日派开山祖师");
        set("family/family_name","射日派");
        set("guild_master",1);
        set_skill("unarmed",60);
        set_skill("parry",40);
set("no_lyssa",1);
        set_skill("dodge",60);
        set_skill("force", 60);
        set_skill("literate",60);
        set_skill("archery",100);
        set_skill("god-shooting", 80);
set("functions/ten_kee/level",100);
        set_skill("move",40);
        set_skill("rain-steps",80);
        map_skill("archery","god-shooting");
        map_skill("parry","rain-steps");
set("chat_chance_combat",1);
set("chat_msg_combat", ({
(: perform_action("archery.ten_kee") :),
}));

        setup();
carry_object(C_OBJ"/bow-10")->wield();
carry_object(C_OBJ"/arrow-9");
}

void init()
{
        add_action("do_join","join");
        set_heart_beat(1);
}

int do_join(string str)
{
        object me=this_player();
        if(str!=0)
          return notify_fail("请打\"join\"即可。\n");
        if(me->query("class")=="marksman")
        return notify_fail("你不要开玩笑了，你不是早就加入了吗？\n");
if( me->query("class"))
return notify_fail("你已经加入了别的工会了。\n");
        me->set("class","marksman");

        tell_object(me,"恭禧你！你已经成为射手派的一员了，好好努力吧。\n");
         message("system",HIC "黄忠纵声大笑 :\n
         欢迎" +this_player()->name()+ "加入射日派 !\n
         我们射手后继有人了 !\n
         各位伙伴们 ,拭目以待吧 !!\n\n"NOR,users());
                
        
        
        return 1;
}
int accept_fight(object ob)
{
command("say 老夫很久没动了.怕打不过你啦");
command("say 不过看这位侠客，如此有诚意，那就来会会你");
command("cmd holdup arrow with bow");
return 1;
}
int accept_kill(object ob)
{
command("say 老夫今天心情好.不至你于死地");
command("cmd holdup arrow with bow");
return 1;
}
