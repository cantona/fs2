
#include <ansi.h>
inherit NPC;
   
void create()
{
        set("long","
焚天魔王，魔界之统治者，他全身火焰绕身，火舌随着他的情绪不停的奔腾着。
仔细一看他竟可以御气凌空，内功之深简直不可思议。另外练就旷世绝学「极火功”
，极火掌一发动更是烈焰奔腾，威不可挡。由极火功所化成的「极火金身”护身
气劲更能在四周形成坚硬火罩。
");
        set("gender","男性");
        set("nickname",HIR"赤狱混沅"NOR);
        set("title",HIW"～幻影～"NOR"魔界之王");
        set_name("焚天魔王",({"fire king","king"}));
        set("combat_exp",20000000);
        set("attitude","aggressive");
        set("score",90000000);
        set("bellicosity",1000000);
        set("age",10000);
        set("max_force",1000000);
        set("force",5000000);
        set("max_kee",100000);
        set("kee",100000);
        set("max_gin",14000);
        set("max_sen",14000);
        set("str", 35);
        set("cor", 35);
        set("cps", 30);
        set("per", 30);
        set("int", 30);
        set("force_factor",45);
        set_skill("dodge",220);
        set_skill("force",250);
        set("clan_kill",1);     //不能派杀手追杀
        set("no_mount",1);
        set("no_plan_follow",1);
        set_skill("move",280);
        set_skill("parry",250);
        set_skill("mogi-steps",200);
        set_skill("firestrike",220);
        set_skill("unarmed",220);
        set_skill("literate",200);
        set_skill("fireforce",250);
        set_temp("armor_vs_force",5000);
        map_skill("force","fireforce");
        map_skill("unarmed","firestrike");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("parry","firestrike");

        set("functions/gold-fire/level",100);
        set("quest/gold-fire",1);
        set("quest/new_gold_fire",1);
        setup();
        carry_object("/data/autoload/mogi/fire-armor")->wear();
        carry_object("/data/autoload/mogi/fire-cloud-boots")->wear();
        carry_object("/data/autoload/mogi/fire-belt")->wear();
        carry_object("/data/autoload/mogi/daemon-cloak")->wear();
        carry_object("/data/autoload/mogi/fire-dragon")->wield();
        carry_object("/data/autoload/mogi/sspill")->set_amount(7);
        carry_object("/open/killer/headkill/obj/world_dag.c");
        add_money("gold",1000);
}

void init()
{
 ::init();
 add_action("do_cmd","cmd");
 add_action("do_exert","exert");
}
int do_cmd(string str){                 //ok by chan
 object who=this_player();
 object ob,king;
 ob=this_object();
 king=present( "king",environment(ob) );
 if(str=="askgod king" || str=="askgod fire king"){
 write(HIY"焚天魔王冷笑：「在本魔王面前求神问卜!?先问问我还差不多。”去死吧!!\n"NOR);
 command("perform fireforce.gold-fire");
 king->kill_ob(who);
 return 1;                                                 
                  }
 if(str=="bak king"){
 write(HIY"焚天魔王冷笑：想暗杀本魔王!!!也不打听谁是暗杀之王呀!!!去死吧!!\n"NOR);
 command("perform fireforce.gold-fire");
 king->kill_ob(who);
 return 1;
                  }
}


void greeting(object me)
{
 write(HIY"焚天魔王发出慑人心神声音：「来者是谁!?”
「能来到这里，真不简单！江湖之上的人物，算你一号！”
「不过若想找我比划，你还差得太远”
"NOR); 
}
int accept_fight(object who)
{
 write(HIY"焚天魔王冷冷的说：「要命的话就快走吧！”\n"NOR);
 return 0;
}
int do_exert(string str){
 mixed all;
 int i=0;
 object king,room,me,obj;
 me=this_player();
 room = environment(me);
 all = all_inventory(room);
 king=present( "king",environment(me) );
 if(str=="roar"){
 say(HIC"$N气凝丹田，用力一吼企图以内力震伤焚天魔王。\n",me);
 say(HIC"焚天魔王冷笑说‘你这也叫吼?让你们见识一下真正的"HIR"天魔狂吼"HIC"吧!!\n");
 say(HIR"\n焚天魔王大吼一声，刹那间天惊地摇，魔界因此而震动!!周遭的生物刹那间非死即伤\n");
 for( i = 0 ; i < sizeof(all) ; i++){
 obj = all[i];
  if( obj->is_character() && !obj->is_corpse() && living(obj)
 && obj->query("id")!="fire king"){
 message_vision(HIR"结果$N被这威力无比的天魔怒吼震伤，哇一声吐出一大口鲜血!!\n"NOR);
 obj->add("kee",-6000);
 king->kill_ob(obj); }
                                    }
 return 1;
                  }
}
int accept_kill(object who)
{
 who = this_player();
 write(HIY"焚天魔王从宝座上豁然站起\n"NOR);
 command("say 鼠辈无礼！嚐嚐我极火功的厉害吧！");
 command("perform fireforce.gold-fire");
 kill_ob(who);
 return 1;
}

void heart_beat()
{

 mixed all;
 object me,room,obj;
 int maxkee,kee,i,count,maxforce;
 count = random(100);
 me = this_object();
 room = environment(me);
 all = all_inventory(room);
 maxforce=me->query("force");
 if(count < 50 && me->is_fighting())
 {
object who;
who=this_player();
if(maxforce < 1000000)
{
 message_vision(HIW"\n                        ～幻～影～心～诀～

焚天魔王内力突受试炼塔系统影响，内力暴增为原来的两倍，万物顿时黯淡失色，一瞬间，
$N受到焚天魔王内力的影响，动弹不得。\n\n",who);
who->start_busy(3);
me->add("force",200000);
}
}
 if(count < 9 && me->is_fighting())
 {
  message_vision(HIR"\n焚天魔王大喝一声，刹那间天惊地摇，魔界因此而震动!!周遭的生物刹那间非死即碎!!\n"NOR,me);
  for( i = 0 ; i < sizeof(all) ; i++)
   {
    obj = all[i];
    if( obj->is_character() && !obj->is_corpse() && living(obj)
    && obj->query("id")!="fire king")
     {
      message_vision(HIR"结果所有人被这威力无比的天魔怒吼震伤，哇一声吐出一大口鲜血!!\n"NOR,obj);
      obj->add("kee",-4000);
      obj->start_busy(2);
      COMBAT_D->report_status(obj, 1);
     }
   }
 }
 if(count < 2 && me->is_fighting())
 {
  message_vision(HIR"
       焚天魔王将全身业火暗运掌上，掌上业火蕴藏着无限吸劲
       眨眼间，焚天魔王叱喝回荡"HIR"‘魔道轮回 业火横行’"HIW"
       业火不断向四周吸引气劲\n"NOR,me);
  for( i = 0 ; i < sizeof(all) ; i++)
   {
    obj = all[i];
    if( obj->is_character() && !obj->is_corpse() && living(obj)
    && obj->query("id")!="fire king")
     {
      message_vision(HIR"结果所有人4/5内力全受业火吸引，泄向四周!!\n"NOR,obj);
      obj->add("force",-((obj->query("force")/5))*4);
      COMBAT_D->report_status(obj, 1);
     }
   }
 }
 if(count <13 && me->is_fighting())
  {
  message_vision(HIW"
       焚天魔王化身炼狱业火，妖气在一瞬间变成沸腾血红魔风，凡被其吹拂
       之物尽挥成汽，熔人口鼻令人窒息
       眨眼间，焚天魔王叱喝回荡"HIR"‘赤狱混沅  魔道遮天’"HIW"，熔融魔气挟着蚀骨
       焚焰之风疯狂的侵袭着一切\n"NOR,me);
  for( i = 0 ; i < sizeof(all) ; i++)
   {
    obj = all[i];
    if( obj->is_character() && !obj->is_corpse() && living(obj)
         && obj->query("id")!="fire king")
     {
      message_vision(HIR"结果$N被熔融极火卷到，哀嚎连连中浑身青烟直冒伴随着阵阵焦肉味!\n"NOR,obj);
      obj->receive_wound("kee",5000);
      COMBAT_D->report_status(obj, 1);
     }
   }
  }


 if( random(10) < 2 )
 {
  if( is_fighting() )
  {
   if( query("kee") < query("eff_kee") )
    message_vision(HIG"\n焚天魔王身冒出熊熊火焰，伤口渐渐的愈合了\n"NOR,me);
    me->receive_heal("kee",8000);
    me->receive_heal("gin",5000);
    me->receive_heal("sen",5000);
    me->delete_busy();
    me->clear_condition();
  }
  else
  {
   if( query("eff_kee") < query("max_kee") )
    command("exert heal");
    me->add("force",100000);
  }
 }
::heart_beat();
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
if(me->query("quest/start_game")< 50)
       {
        tell_object(users(),HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第四十九层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第五十层试炼□塔"HIG"’"HIW"。
	"NOR);
	me->set("quest/start_game",50);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}