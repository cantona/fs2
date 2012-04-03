//master_yua.c 
//cgy
//把heart beat的conjure reflection拿掉..改成temp设定..
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

string magic();
string ask_get_fdragon();

void create()
{
            set_name("月半弯",({"master yuaa","yuaa"}));
            set("long","她是夜梦小筑上任宫主,也是现任宫主月牙儿的姊姊。\n");
            set("gender","女性");
            set("class","dancer");
            set("nickname","朝霞仙子");
            set("combat_exp",7000000);
            set("attitude","heroism");
            set("age",20);
            set("str", 38);
            set("cor", 35);
            set("cps", 50);
            set("per", 40);
			set("adv_dancer",1);
			set("allow_hellfire",1);
            set("int", 40);
          set("kee",50000);
          set("max_kee",50000);
          set("gin",30000);
          set("max_gin",30000);
          set("atman",20000);
          set("max_atman",20000);
          set("mana",4000);
          set("max_mana",4000);
          set("force",20000);
          set("max_force",20000);
		  set("max_sen",30000);
         set("sen",30000);
            set_skill("array",60);
            set_skill("parry",60);
            set_skill("spells",50);
            set_skill("magic",130);
            set_skill("cure",60);
            set_skill("force",60);
            set_skill("literate",70);
            set_skill("move",100);
            set_skill("dodge",100);
            set_skill("sword",50);
            set_skill("unarmed",70);
            set_skill("paull-steps",130);
            set_skill("dremagic",100);
            set_skill("dreamforce",100);
            set_skill("dreamdance",100);
			set("no_poison",1);
			set("no_askgod",1);
        map_skill("magic","dremagic");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        map_skill("move","paull-steps");
        map_skill("unarmed","dreamdance");
        set_temp("apply/armor",70);
        set_temp("apply/dodge",20);
		set_temp("ref_shield",1);
        set("get_dan_sp",1);
        set("/spells/reflection/level",100);
        set("/spells/confuse/level",100);
        set("/spells/fireball/level",100);
        set("/spells/thunder/level",100);
		set("/spells/hellfire/level",75);
        set("/spells/firedance/level",100);
		set("/spells/dreamcure/level",100);
        set("/spells/dreamwings/level",100);
                
        set("force_factor",30);
        setup();
        create_family("夜梦小筑",2,"宫主");
        carry_object("/open/dancer/obj/yuacloth.c")->wear();
        carry_object("/open/dancer/obj/maple_ribbon.c")->wield();
        carry_object("/open/dancer/obj/yuawaist.c")->wear();
//                add_money("diamond",2)

        set("inquiry", ([
            "傅剑寒"  : "你说的是神龙山庄庄主傅剑寒吗??他是我倾慕的偶像耶!!",
                        "炎之龙" :  (: ask_get_fdragon :),
        ]));
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
         (: magic :),
        }));
}
void init()
{
        set_heart_beat(1);
}

void heart_beat()
{
//      object me=this_object();
        :: heart_beat();
        
        if( is_fighting() ){
                if(is_busy()){
                delete_busy();
                message_vision(HIW+"\n月半弯笑道:想定住我??门都没有。\n"+NOR,this_object());
                }
           if(random(100)>85)
		   {command("conjure hellfire");
           }
        }
        else{
		if( query("sen") < query("eff_sen") ) // 125
			command( "exert refresh" );
                if( query("eff_kee") < query("max_kee") )
                        command("conjure dreamcure");
        }

//      return;
}



string ask_get_fdragon()
{ 
 if(this_player()->query("spells/fdragon/level"))
  return "妳不是学过了？？";
 if(this_player()->query("class")!="dancer")
      {
          command("stare"+this_player()->query("id"));
          return "妳问那么多干嘛？";
      }
 this_player()->set_temp("ask_fdragon",1);
 return "想学炎之龙??先打赢我再说吧!!!";
 
}
int accept_object(object who,object ob)
{
        string ob_id;
        ob_id=ob->query("id");
        
        if(ob_id=="king's letter")
        {
            command("say 原来是皇上派你来的...\n");
                command("sigh");
         command("say 好吧..你帮我把这封信拿给皇上他就知道了...\n");
                 new("/open/dancer/obj/letter2")->move(this_player());
        this_player()->set_temp("ask_moon7",1);
        }
  return 1;
 }
string magic()
{       
        command("conjure confuse");
        command("conjure fireball");
        command("conjure reflection");
        command("conjure firedance");
        command("conjure thunder");
        command("conjure dreamwings");
        return "\n";
}
 
int accept_fight(object ob)
{
        command("say 小女子怎是您的对手呢??\n");
                command("conjure reflection");
                command("conjure dreamwings");
                command("conjure confuse");
        message_vision( this_object()->name()+"一付弱不禁风的样子。\n",ob);
        return 1;
}
int accept_kill(object ob)
{
        command("say 没想到你忍心欺负弱小女子，那我就不客气了!!!\n");
                command("conjure reflection");
                command("conjure dreamwings");
                command("conjure confuse");
        return 1;
}
void die()
{
        object ob;
        ob=query_temp("last_damage_from");

    if( ob->query("class")=="dancer" && 
        ob->query_temp("ask_fdragon"))
        {

        tell_room(environment(ob),HIY"月半弯说:看来"+ob->name()+"的确有这个能力学习炎之龙!\n"NOR);
        ob->set("spells/fdragon/level",1);
        ob->set("allow_fdragon",1);
        message("system",HIM"月半弯高兴的说道：恭喜"HIW""+ob->name()+""HIM"通过考验成为"HIR"炎□舞者。\n"NOR,users());
        ob->set("title",HIW"【"HIR"炎□舞者"HIW"】"NOR);
        }
        else   
        {
        tell_room(environment(ob),HIC"月半弯说:想不到妳的武功如此厉害\n"NOR);
        }
        ::die();
}  
