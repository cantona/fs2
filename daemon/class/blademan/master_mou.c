#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
inherit SSERVER;
string do_mdragon();
string do_mblade();
void create()
{
set_name("莫无愁",({"master mou","mou","master"}));
set("long","神秘老人的爱儿，二十余年来忍辱偷生，为的是找寻独孤愁，报其父债，其狂龙刀法以快
达到其父的水准，又因鉴于当初父亲所犯下的错误，改良【狂龙怒斩】研发出【魔龙诀】
虽威力不及父亲，但确有其隐藏的后劲，且立誓与独孤愁后代传人势不两立。\n");
set("gender","男性");
set("attitude","heroism");
set("age",35);
set("class","blademan");
set("nickname",HIR"复仇魔刀"NOR);
set("title","魔刀门第二代掌门");
create_family("魔刀门",2,"掌门");
set("score",100000);
set("force",4000);
set("max_force",4000);
set("env/魔性六斩","YES");
set("max_kee",30000);
set("force_factor",25);
set("mpower",1);
set("cor", 35);
set("str", 35);
set("per", 20);
set("int", 25);
set("functions/mdragon-dest/level",100);
set("cps", 35);
set("con", 35);
set("spi", 25);
set("kar", 35);
set("combat_exp", 1000000);
set("bellicosity", 3000);
set_skill("riding",80);
set_skill("force", 90);
set_skill("parry", 90);
set_skill("move", 60);
set_skill("dodge", 60);
set_skill("cure", 50);
set_skill("dragon-blade",105);
set_skill("powerforce", 90);
set_skill("blade", 100);
set_skill("literate", 40);
set_skill("unarmed", 20);
set_skill("spells", 20);
set_skill("magic", 20);
map_skill("parry","dragon-blade");
map_skill("blade","dragon-blade");
map_skill("force","powerforce");
set("chat_chance",40);
set("chat_msg",({
HIW"唉！都找不到我父亲～魔刀莫测\n"NOR,
HIW"我的狂龙刀法已达上限，但和父亲比起来又差了一截\n"NOR,
HIY"听说我父亲有一把镇教之宝，不过详情也只有我父亲知\n"NOR,
}));
set("inquiry",([
"魔龙诀"  : (: do_mdragon :),
"魔刀莫测":"听说我父亲被关在雪苍后山里，但我一直找不到，摸不着头绪。",
"狂龙怒斩":"那是我父亲研究出来的，比我的魔龙诀强上数倍。",
"狂龙刀法":"那是我父亲当年所自豪的刀法，听说还有失传奥义和狂龙怒斩及三斩归元。",
"失传奥义":"我不太清处，传到我时以没那招了，那招只有我父亲会。",
"三斩归元": (: do_mblade :),
]));
set("chat_chance_combat",100);
set("chat_msg_combat",({
(: perform_action, "blade.mdragon-dest" :),
}));
set_temp("apply/armor",65);
set_temp("apply/damage",65);
setup();
carry_object("/daemon/class/blademan/obj/ublade.c")->wield();
carry_object("/daemon/class/blademan/obj/shield.c")->wear();
carry_object("/daemon/class/blademan/obj/six-neck.c");
add_money("gold",10);
}

// by acky 找出作弊者
void greeting(object ob)
{
    if(!ob) return ;
	if( ob->query("get-evil-mblade")==1 ) {
        if( ob->query("family/family_name")!="魔刀门" && ob->query("family/family_name")!="魔刀莫测" && !wizardp(ob)) {
			command( "chat "+ob->query("name")+"("+ob->query("id")+")你这个作弊的无耻之徒, 给我去死吧!" );
			kill_ob(ob);
			log_file( "BUG/妖刀", sprintf("%s %s(%s)非魔刀门人, 却持有妖刀\n"
				,ctime(time())[0..15], ob->query("name"), ob->query("id") ) );
			return;
		}
		if( !present( "evil-mblade", ob ) ) {
			new("/data/autoload/blademan/evil-mblade.c")->move(ob);
			command( "say 你竟然把我门的镇教之宝给弄丢了!" );
			command( "waggle "+ob->query("id") );
			command( "say 要是下回再弄丢, 可就不管你!" );
			message_vision( HIY"莫无愁从身旁拿出妖刀交到$N手中!\n"NOR, ob );
			command( "say 请好好保管好吧!" );
		}
	}
}

void attempt_apprentice(object obj)
{
      command("l "+obj->query("id"));
    if(obj->query("title") == HIR"杀手全力追杀的人头"NOR)
	{
		command(" say 死小孩....又想来作弊！！");

	return ;
}
if(obj->query("kar",1)<25||obj->query("have_officer",1)==1||obj->query("family/family_name")=="金刀门")
      {
          command("sigh "+obj->query("id"));
          command("say 莫某与你无缘，你走吧。\n");
          command("shake");
          return;
      }
command(":)");
command("say 好小子，果然有无比的胆量。");
command("say 好，我收"+this_player()->name()+"为我门徒。");
obj->delete("family");
command("recruit "+obj->query("id"));
if(this_player()->query("m_blade")==1) {
this_player()->set("title","[1;31m魔刀[1;37m‘三斩归元’[1;35m传人[0m");
}
message("system",HIW"莫无愁纵声长笑:
\n哈哈哈哈～～魔刀复仇将至。"NOR,users());
message("system",HIR"\n\n今后"+this_player()->name()+"将会替我血洗独孤老贼。\n"NOR,users());
this_player()->set("no_recruit", 1);
 return ;
}
void init()
{
object ob;
::init();
if(interactive(ob =this_player()) && !is_fighting() ) {
remove_call_out("greeting");
if(ob)
call_out("greeting",1,ob);
}
add_action("do_verify","verify");
}
int do_verify(string arg)
{
object me,ob;
me=this_player();
ob=new("/data/autoload/blademan/mblade");
if(arg!="blade")
{
  write("你要拿什么啊？\n");
  return 1;
  }
if((me->query("family/family_name")!="魔刀门")&&me->query("family/family_name")!="魔刀莫测")
  {
    write("只有魔刀门徒才会有喔。\n");
    return 1;
  }
if(arg=="blade")
{
if(present("mblade",me))
{
      write("你有刀了还要。\n");
      return 1;
}
      write("啊？你把刀子丢啦，我再给你好了。\n");
      ob->move(me);
      return 1;
} 
}
string do_mdragon()
{
object who;
who=this_player();
if(who->query("family/family_name")!="魔刀门"&&who->query("family/family_name")!="魔刀莫测")
{
command("say 你怎会知到魔龙诀，难道是独孤老贼派你来的。");
command("say 既然如此，我就不能让你活着回去，嘿嘿嘿。");
command("kill "+who->query("id"));
return "杀死你，可恶的间碟。";
}
command("say 这是为师毕生所研究出来的，这就传授给你了。");
command("say 用法(perform blade.mdragon-dest)，但要狂龙刀法‘105’才能用。");
return "希望你能好好用之。";
}

string do_mblade()
{
  object me;
  me=this_player();
  if( me->query_skill("dragon-blade",1) < 90 ) {
  command("say 你狂龙刀法需要再加强些，不要胡思乱想");
  return "去加强你的刀法吧"; }
  if( me->query("combat_exp") < 3000000 ) {
  command("say 你实战经验不足。");
  return "去加强你的实战经验吧"; }
  if( me->query("snow-head",1) < 700 ) {
  command("say 你杀的雪苍弟子还不够，等够了再说吧");
  return "去多杀点雪苍弟子吧"; }
command("say 那是魔刀至阴至毒的招式，我父亲传我心法之后，也才习得一式");
command("say 除非，你能拿独孤嵊的人头来，那样你才有资格能习得此心法");
command("say 独孤嵊是魔刀的世仇，被关在魔刀门内，但是一直有人想去解救他");
command("say 且独孤嵊的弟子占据魔龙塔多年，等待独孤嵊的归来，想一举消灭我门");
return "所以，只要你能消灭独孤嵊我就传你心法";
}

int accept_object(object who, object ob)
{
object mid;
if(ob->query("id") == "sa-head")
{
destruct(ob);
say("莫无愁看了看独孤嵊的头说道 : 这是‘武天至圣’独孤嵊的头。\n");
if(who->query("family/family_name")=="魔刀门"||who->query("family/family_name")=="魔刀莫测")
{
     if(!who->query("m_blade",1))
     {
if(who->query("combat_exp") < 3000000 ) {
say("你实战经验不足，再去多修练吧！\n");
return 1;
}
if(!who->query_temp("ko_sa")) {
say("他又不是你杀的，别想蒙骗过关！\n");
return 1;
}
if(who->query("snow-head",1)<700)
{
say("你还不够邪恶，再去多杀一些人吧！\n");
}
else
{
        say("没想到你竟能杀的了他，好吧，算你对本派有所贡献。\n"
            "我将魔刀的‘三斩归元’心法传授给你吧。\n"
            "至于如何运用，自己去体会吧，哈哈哈！\n");
        message("system",HIC"莫无愁诡异笑道：\n"HIW"
                魔刀‘三斩归元’"HIC"终于后继有人了\n
                看来铲平雪苍之日不远呀！\n"HIR"
        哈！哈！哈！"+this_player()->name()+"魔刀复仇全靠你了！\n"NOR,users());
        who->set("m_blade",1);
        who->set("title","[1;31m魔刀[1;37m‘三斩归元’[1;35m传人[0m");
log_file("mblade/m_blade",sprintf("%s解到魔刀后三\n",
who->short()));
}}
/*
       else if(who->query("t_standby")<who->query("max_standby"))
       {
        say("你心法已经会了，但魔刀人要有邪恶之气为辅住！！\n"
            "那我就送你一个保命金身吧，危险时能保你邪恶之气！！\n");
log_file("mblade/standby",sprintf("%s换了一个替身\n",
who->short()));
who->add("standby",1);
who->add("t_standby",1);
       }
	   else message_vision( HIW"\n小雪球说道：你曾经拥有的替身总数已达上限，无法再增加，我无法帮助你。\n\n"NOR, who );
*/
     }
else
{
      if(!who->query("get_atman",1))
       {
        say("没想到我魔刀门的宿敌，竟会被你所杀，看来天意难违。\n"
            "好！既然人是你杀，我就传我部份灵力和法力给你吧。\n");
message_vision(HIC"莫无愁将手指向$N眉心，瞬时灵气贯顶，$N身上散发出阴灵之气。\n"NOR,who);
        who->add("max_atman",200);
        who->add("max_mana",200);
        who->add("atman",200);
        who->add("mana",200);
        who->set("get_atman",1);
       }
/*.
      else if(who->query("t_standby")<who->query("max_standby"))
       {
        say("嘿嘿！你已得我灵力与法力，但人心险恶那我再送你\n"
            "一个保命金身好了！小心邪恶之人呀！哈哈哈！\n");
log_file("mblade/standby",sprintf("%s换了一个替身\n",
who->short()));
who->add("standby",1);
who->add("t_standby",1);
       }
	   else message_vision( HIW"\n小雪球说道：你曾经拥有的替身总数已达上限，无法再增加，我无法帮助你。\n\n"NOR, who );
*/
     }
  }
}
void heart_beat()
{
 object env,mob,*enemy,target;
 int i;
 mob = this_object();
 env = environment(mob);
   if( random(100) > 70)
 {
    enemy=mob->query_enemy();
	if( i = sizeof(enemy) ) {
   target=offensive_target(mob);
    if(target)
    if( env == environment(target) )
    {
message_vision(HIY"
莫无愁施展出魔刀‘三斩归元～鱼龙嗜元’\n"+
"．．．‘鱼龙毒鸩～～煌岚丛灭’．．．\n"+
"$N闪避不及，被打中要害，血流满地\n"NOR,target);
    target->receive_damage("kee",600,mob);
      COMBAT_D->report_status(target,1);
    }
	}
 }
   ::heart_beat();
}
int accept_kill(object who)
{
who=this_player();
command("wear all");
command("kill "+who->query("id"));
command("perform blade.mdragon-dest");
return 1;
}
int accept_fight(object who)
{
who=this_player();
command("wear all");
command("kill "+who->query("id"));
command("perform blade.mdragon-dest");
return 1;
}

void die()
{
	object winner = query_temp("last_damage_from");

	int j;
	if(!winner)
	{
	::die();
	return ;
	}

   if (winner && userp(winner))  {
tell_object(users(),HIR"\n\n莫无愁仰天怒吼：\n\n\t可恨的"+winner->name()+HIR"竟阻碍我复仇大业！
\n\t老子会再回来报仇的！等着吧！\n\n"NOR);
   }

	if( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {
	  new("/open/sky/obj11/orange-crystal")->move(environment(winner));
	  message_vision(HIM"\n从莫无愁的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/orange_crystal",sprintf("%s(%s) 让莫无愁掉下了橙色光晶于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj11/orange-crystal")->move(environment(winner));
	  message_vision(HIM"\n从莫无愁的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/orange_crystal",sprintf("%s(%s) 让莫无愁掉下了橙色光晶于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}

        :: die();
}
