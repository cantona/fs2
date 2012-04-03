//made by fund//change and organization by Urd 女神

#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
string to_kill();
string to_hurt();
string to_miss();
string to_miss2();
string to_miss3();
string to_miss4();
string to_miss5();
string ask_blade();

void create()
{
object ob;
set_name("叶秀杀",({"master yar","yar","master"}));
set("long","他是名震江湖的一代杀手，黑牙联的头目。\n");
set("gender","男性");
set("class","killer");
set("nickname","杀眼无情");
set("combat_exp",1500000);
set("attitude","heroism");
set("age",26);
set("str", 44);
set("cor", 34);
set("cps", 18);
set("per", 24);
set("int", 42);
set("kee",3000);
set("max_kee",3000);
set("gin",1600);
set("max_gin",1600);
set("atman",1200);
set("max_atman",1200);
set("mana",1000);
set("max_mana",1000);
set("force",3500);
set("max_force",3500);
set("quest/rain",1);
set_skill("rain-throwing",100);
set_skill("blade",20);
set_skill("cure",50);
set_skill("magic",20);
set_skill("literate",30);
set_skill("dodge",90);
set_skill("force",80);
set_skill("move",80);
set_skill("parry",60);
set_skill("dagger",90);
set_skill("shadow-kill",90);
set_skill("throwing",120);
set_skill("shade-steps",100);
set_skill("blackforce",95);
map_skill("throwing","rain-throwing");
map_skill("dodge","shade-steps");
map_skill("force","blackforce");
set("bellicosity",1500);
set_temp("apply/armor",70);
set("inquiry",([
"追杀令" : (: to_kill :),
"魔气杀之伤" : (: to_hurt :),
"任务" : (: to_miss :),
"忍者" : (: to_miss2 :),
"追杀" : (: to_miss4 :),
"人头" : (: to_miss5 :),
"黑血神针" : (: to_miss3 :),
"幽灵魔刀" : (: ask_blade :),
]));
set("force_factor",10);
set("chat_chance_combat",40);
set("chat_msg_combat",({
(:perform_action,"throwing.manakee":),
}));
setup();
create_family("黑牙联",2,"主席");
ob=carry_object("/open/killer/obj/hate_knife");
ob->set_amount(200);
ob->wield();
carry_object("/open/killer/weapon/k_cloth3.c")->wear();
carry_object("/open/killer/weapon/k_boot3.c")->wear();
carry_object("/open/killer/weapon/k_arm3.c")->wear();
carry_object("/open/killer/weapon/k_head3.c")->wear();
}

void init()
{
	add_action("do_join","join");
}

string to_kill()
{
	object ob;
	if( this_player()->query("quests/to-kill") ) 
	{
	command("?");
	return "$N想帮我杀谁啊......";
	}
	if( present("letter",this_player() ) )
	{
	command("?");
	return "$N已经拿到密函了...不是吗??";
	}
	command("look "+this_player()->query("id"));
	command("hmm");
	ob = new(__DIR__"letter");
	ob->move( this_player() );
	message_vision("$N递给$n一封密函。\n",this_object(),this_player());
	return "这里面写着被追杀的人........";
}

string to_hurt()
{
 object ob;
 object me;

 me=this_player();
 if( me->query_temp("hurt") !=1 )
 {
   command("?");
   return "$N在说什么呀？";
 }
 tell_object(me,HIY"你中的不是魔气杀，而是天魔解体大法的阴性气指，目前只有庄静柔
会使用。\n");
 tell_object(me,"因此，我想天魔解体大法被她拿走了吧\n");
 tell_object(me,"唉。。。看来她还是找上门来了，这是六年前的事情了。。。\n");
 tell_object(me,"当年柴荣受了说法大长老之托，假装背叛而忍痛离开了庄静柔\n");
 tell_object(me,"并且为了避免庄静柔因恨而走火入魔，而将天魔解体大法取走\n");
 tell_object(me,"并且来到了黑牙联，在前代主席叶孤城的指导下创出了霸雨式\n");
 tell_object(me,"当时，师父他原本要将主席之位传给柴荣，但是因为庄静柔的缘故\n");
 tell_object(me,"为了杀手的安全，师父他便将主席之位传给了我，而与柴荣联袂离开，
钻研更上层的武学\n");
 tell_object(me,"但是柴荣他心中一直挂念着静柔，而拜托了当时的兵器使完颜宏烈\n");
 tell_object(me,"将天魔解体大法，交给庄静柔并且解释清楚\n");
 tell_object(me,"岂知，完颜宏烈心生贪念，将天魔解体大法独吞，并且连杀了好几位魔
教徒\n");
 tell_object(me,"嫁祸给柴荣，而引起了庄静柔的全面追杀令，逼使柴荣只好宣布脱离黑
牙联\n");
 tell_object(me,"以免引起黑牙联与冥蛊魔教的全面对决，才使事件平静了下来\n");
 tell_object(me,"但是，静柔她并不原谅柴荣，因为她的心已死\n");
tell_object(me,"或许你将他们的定情信物-灭神匕首。交给静柔她，也许她会想起当时
的甜蜜\n");
 tell_object(me,"灭神匕首在三楼的北边房间，我派了一个尸魂人守住，杀了他就可以得
到\n"NOR);
 me->set_temp("god",1);
 return "$N在三楼调查一下，可以找到进去的开关";
}
string to_miss()
{
 object ob;
 object me;

 me=this_player();
 if( me->query("quest/rain") !=1 )
 {
   command("sm");
   return "$N连魔气杀都还不会，还想出什么任务？";
 }
 tell_object(me,"你想知道哪一个任务？\n");
 tell_object(me,"目前有(忍者),(黑血神针)，（追杀），(人头)四个任务\n");
 return "你想出任务吗？";
}
string to_miss2()
{
  object ob,me;
 
 me=this_player();
 if (me->query("quest/rain") != 1)
   return "$N连魔气杀都不会，还要出任务？";
 tell_object(me,"据说，红叶组有东瀛伊贺派的忍者潜入，只有独自一人\n");
 tell_object(me,"你去把他杀了，装备在三楼，自己去拿\n");
  me->set_temp("mission1",1);
 return "人头自己拿去换钱";
}
string to_miss3()
{
  object ob,me;
 
 me=this_player();
 if (me->query("quest/rain") != 1)
   return "$N连魔气杀都不会，还要出任务？";
 tell_object(me,"那是一个没有人知道的秘密，也就是黑血神针的所在地\n");
 tell_object(me,"那是当年杨小邪击败血变后，被潜入的黑巾杀手，由寒玲手中所偷走的
\n");
 tell_object(me,"目前似乎有人，拿着黑血神针到处伤人，你去把黑血神针追回来吧\n");
  me->set_temp("mission2",1);
 return "黑血神针可以找婆婆问它的下落";
}

string to_miss4()
{
  object ob,me;
 
 me=this_player();
 if (me->query("quest/rain") != 1)
   return "$N连魔气杀都不会，还要出任务？";
  if(present("black blood",me))
 {
   tell_object(me,"你也拿到神针了呀！你知道神针的厉害了吧？\n");
   tell_object(me,"目前，那位拿着黑血神针到处伤人的人，似乎已经被黄龙祖组长发现
了\n");
   me->set_temp("mission3",1);
   return "$N可以去找他问看看(追杀者)";
 }
 return "$N你到底知不知道为何要追杀呀！先证明你知道神针之谜吧！";
}

string to_miss5()
{
  object ob,me;
 
 me=this_player();
 if (me->query("quest/memory") != 1)
   return "$N连杀手密令都没有，还要出这一个重大任务？";
 tell_object(me,"近来，许多人逐渐骑到杀手的头上来了，看来其他门派羽翼已成\n");
 tell_object(me,"看来是蓝凤组出动的时间了，但是我也不能直接驱使蓝凤组\n");
 tell_object(me,"你帮我去执行任务吧！在花园那里有蓝凤组的联络人\n");
 tell_object(me,"记住下列口诀，那是通过花园迷阵的方法\n");
 tell_object(me,"树木逢三减一，石头十丈反左。\n");
 tell_object(me,"花园迷阵景色会很相近，有如通吃小筑那里的迷阵\n");
 tell_object(me,"但是性质不同，你要相信你自己，勇敢的按照口诀所说，一定可以通过迷阵\n");
  me->set_temp("head",1);
 return "利用蓝凤组去将杀手全力追杀的人头拿回来给我";
}

void attempt_apprentice(object ob)
{
command("l "+ob->query("id"));
if(this_player()->query("cor")<20)
{
command("sigh "+ob->query("id"));
command("say 你的胆识不够, 我不能收。\n");
return;
}
command("smile");
command("nod");
command("say 好！！");
command("recruit "+ob->query("id"));
}
int accept_fight(object ob)
{
command("say 真有骨气！！好, 我接受挑战！！");
message_vision( this_object()->name()+"脸上露出高兴的样子。\n",ob);
this_object()->set("bellicosity",1800);
command("cmd bellup");
return 1;
}
int accept_kill(object ob)
{
command("say 没想到居然有人敢来这撒野！！");
message_vision( this_object()->name()+"突然变脸，脸上出现杀气。\n",ob);
this_object()->set("bellicosity",3000);
command("cmd bellup");
return 1;
}
int do_join()
{
object ob=this_player();
if(!ob->query("class"))
{
ob->set("class","killer");
command("nod "+ob->query("id"));
}
else
{
command("say 志不同道不合, 另找明师去吧。\n");
return 1;
}
message("system",
HIB "纷乱动荡的武林中～～\n\n又出现一名恐怖的杀手～～\n" NOR,users());
return 1;
}

int accept_object( object me , object ob )
{
object obj;
if(!ob->query("killer_wanted"))
{
	command("say 甚么东西啊?");
	return 0;
}
if( me->query("quest/head-kill") == 1) return 0;
if( me->query_temp("head") != 10)  
	return notify_fail("看来你的任务有人帮过你，你还是请没资格晋升\n");
command("nod");
command("chat* spank "+me->query("id"));
command("say 好小子，居然让你完成这项任务，就让我赐你当代杀手之名吧！！");
me->set("title",HIR"当"+HIG"代"+HIY"杀"+HIB"手"NOR);
me->set("quest/head-kill",1);
command("say 老夫为了奖励你，就传你杀意魔气吧！");
message_vision("$N由掌心窜出一道紫气射入$n体内。\n",this_object(),this_player());
me->set("sec_kee","mkill");
command("say 你已经资格知道到蓝凤组所在地，就是在地下水道二层，但目前仍没有获乔小雨同意。");
command("say 等小渡一段时间，他把蓝凤组机关做好，或许乔小雨就会同意你去吧！");
message("system",
HIM "叶秀杀大笑：‘哈哈。。。江山代有才人出！一代新人换旧人\n\n"+me->query("name")
    +"你就代替老夫在武林里面，将与黑牙联作对的人一一消灭吧！’\n"NOR,users());
}

string ask_blade()
{
object ob;
if( present("ghost blade",this_player()) ) return "想要甚么 ?";
if( !this_player()->query("quests/to-kill") ) return "想要甚么 ?";
ob = new("/open/snow/obj/ghost-blade");
ob->move(this_player());
message_vision("$N给$n一把幽灵魔刀。\n",this_object(),this_player());
return "不要再弄掉了...";
}

void unconcious()
{
       object hu_fa;
        object winner = query_temp("last_damage_from");
       
       message("system",HIM"想不到我叶秀杀，居然会败在"+winner->query("name")+"
手中\n"+
                "看来"+winner->query("id")+"你是皮在痒了！！！！\n",users());
       message("system"
                ,HIR"可恶！！红叶组，银狼组！把"+winner->query("name")+"人头提来
见我！\n"NOR,users());

       hu_fa = new("/open/killer/npc/silnpc2.c");
       hu_fa->move(environment(winner));
       hu_fa->command("guard behavior_elder");
       hu_fa->command("follow "+winner->query("id"));
       hu_fa->kill_ob(winner);
       hu_fa = new("/open/killer/npc/rednpc2.c");
       hu_fa->move(environment(winner));
       hu_fa->command("guard behavior_elder");
       hu_fa->command("follow "+winner->query("id"));
       hu_fa->kill_ob(winner);
       new("/open/killer/npc/spy3")->move("/open/killer/room/masterm.c");
        :: unconcious();
}

void die()
{
 string head;
        object winner = query_temp("last_damage_from");
       if (winner->query("class") != "killer")
       {
         message("system",HIR "超级杀手柴容放声大叫，\n各位杀手听着，"+winner->query("name")+
                "把叶秀杀给挂了\n各位杀手给我全力追杀，"+winner->query("id")+"！！\n"NOR,users());
		/*	这样设会有问题..修正 by chan
			winner->set("title",HIR"杀手全力追杀的人头"NOR);
		*/
        head=winner->query("title");
        winner->set("KILLTITLE",head); //暂存.等回来,回来在damage.c中
	winner->set("title",HIR"杀手全力追杀的人头"NOR);
        }
        :: die();
}


