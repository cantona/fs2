#include <ansi.h>
#include "/open/open.h"
string magic();
inherit NPC;
object ob1=this_object();
object ob2;
void create()
{
            object ob;
            set("guild_master",1);
            set_name("水灵儿",({"master linr","linr"}) );
            set("long","她是月牙儿的师妹，擅长舞蹈，据说
            她的舞蹈之美会令人以为仙女下凡身处仙境。\n");
            set("gender","女性");
	    set("title",HIW"～幻影～"NOR);
            set("class","dancer");
            set("nickname","虹彩仙子");
            set("combat_exp",11000000);
            set("attitude","heroism");
            set("age",20);
            set("str", 30);
            set("cor", 30);
            set("cps", 45);
            set("per", 24);
            set("int", 40);
          set("kee",30000);
          set("max_kee",30000);
          set("gin",1600);
          set("max_gin",1600);
          set("atman",10000);
          set("max_atman",10000);
          set("mana",400);
          set("max_mana",400);
          set("force",200000);
          set("max_force",200000);
            set_skill("array",50);
            set_skill("parry",40);
            set_skill("spells",30);
            set_skill("magic",90);
            set_skill("cure",60);
            set_skill("force",60);
            set_skill("literate",70);
            set_skill("move",100);
            set_skill("dodge",95);
            set_skill("sword",50);
            set_skill("unarmed",70);
            set_skill("paull-steps",120);
            set_skill("dremagic",95);
            set_skill("dreamforce",100);
            set_skill("dreamdance",90);
        map_skill("magic","dremagic");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        map_skill("move","paull-steps");
        map_skill("unarmed","dreamdance");
        set_temp("apply/armor",70);
                set("get_dan_sp",1);
                set("/spells/reflection/level",100);
                set("/spells/confuse/level",100);
        set("/spells/thunder/level",60);
        set("/spells/firedance/level",100);
        set("/spells/dreamwings/level",1);
                
        set("force_factor",20);
        setup();
        create_family("夜梦小筑",3,"副宫主");
        carry_object("/open/dancer/obj/linrboots.c")->wear();
                carry_object("/open/dancer/obj/maple_ribbon.c")->wield();
        carry_object("/open/dancer/obj/yuawaist.c")->wear();
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
         (: magic :),
        }));
}

void heart_beat()
{
        if( is_fighting() ){
                   if(query_temp("ref_shield")!=1)
                      command("conjure reflection");
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        :: heart_beat();
}

int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"系统：战斗停止，$N回收中，。\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}
void unconcious ()
{
 object me=query_temp("last_damage_from");
if(!present("fight_card",me))
{
tell_object(me,"\n\n系统：由于你没携带晶片，所以无法记录战绩。\n");
destruct (this_object ());
}
else
if(!me->query("quest/start_game"))
{
tell_object(me,"\n\n系统：由于你没有正式登记，资料无法传输。\n");
destruct (this_object ());
}
else
if(me->query("quest/start_game")< 30)
       {
        message_vision(HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第二十九层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第三十层试炼□塔"HIG"’"HIW"。
	"NOR,me);
	me->set("quest/start_game",30);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}
string magic()
{       
        command("conjure reflection");
        command("conjure confuse");
        command("conjure fireball");
        command("conjure firedance");
        command("conjure thunder");
        command("conjure dreamwings");
        return "\n";
}
 
int accept_fight(object ob)
{
        
        command("say 小女子怎是您的对手呢??\n");
        message_vision( this_object()->name()+"一付弱不禁风的样子。\n",ob);
                command("conjure reflection");
                command("conjure dreamwings");
                command("conjure confuse");
        return 1;
}
int accept_kill(object ob)
{       ob2=this_player();
        command("conjure reflection");
        command("say 没想到你忍心欺负弱小女子，那我就不客气了!!!\n");
                command("conjure dreamwings");
                command("conjure confuse");
        return 1;
}
