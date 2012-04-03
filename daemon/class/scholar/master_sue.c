#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
inherit SSERVER;
string ask_test()
{
 if(this_player()->query("quests/yan")==3)
 {
if(this_player()->query("quests/fear_fighting",1) && this_player()->query("quests/yantestmark2",1) )
  {

  command("say 谢谢您的帮忙.我愿意将appo给我的印记传到你身上!\n");
  tell_object(this_player(),HIW"瞬间由圣贤书将手搭在你的肩上..你顿时觉得
一股暖意由圣贤书的手中传过来\n"NOR);
  this_player()->delete("quests/2ndtest",i);
  this_player()->set("quests/yantestmark3",1);
  return("这是最后一个了...你赶快去完成你的测验吧~\n");
  }
 else if (this_player()->query("quests/yantestmark3")>1)
  return ("我已经把印记给你了..你还要做什么\n");
 else
  return ("解决我的问题..我就跟你说印记在哪\n");
 }
else
 return ("啥印记..你在说什么?\n");
}

string so()

{
        if( this_player()->query("quests/kill-snow") ) return " ??";
        this_player()->set_temp("ask_so",1);
        return "因此我想请人代我前去，不知阁下是否肯帮在下这个忙，圣某当有重酬！\n";
}

string liyu()
{
object me,ob;
me = this_player();
if (me->query("liyu") != 4)
{
command("say 你说开天三灵器之一呀....原本他是在儒门中没错....不过....在先前绿毛老祖率众入侵时....不小心遗失了.....记得当时好像是被七位不知名的人士给偷走.....如果你想知道是谁拿走的.....你去找诸葛神算他可以帮你算算看....");
me->set("liyu",1);
}
else
{
command("say 我才刚刚拿回丽玉蝶兰...你就..唉算了.物赠有缘人..你去拿吧.. 就在此处的enter");
me->set("liyu",5);
}
}
string book()
{
        object ob, me= this_player();
// Add By AceLan....不是儒门的不准拿书....ccc....
    if( me->query_temp("get_war_book"))
    return "书只有一本, 不是已经给你了吗...\n";
    if( present( "war book" , me ) ) 
    return "你不是有了吗 ?\n";
        ob = new("/daemon/class/scholar/book");
        ob->move( me);
        message_vision("$N给$n一本"+ob->name()+"\n",this_object(),
    me);
    me->set_temp("get_war_book", 1);
        return "这本兵法，你好好地看吧。\n";
}

int finish( object me )
{
        object obj ;
        command("say 十分感谢阁下的相助，这有一支青龙之笛，乃圣某家传之宝。");
        message_vision("$N给$n一支笛子。\n",this_object(),me);
        obj = new("/open/snow/obj/de");
        obj->move( me );
        me->set("quests/fear_fighting",1);
}
string ask_picture()
{
        if( present( "snow picture" , this_player() ) )
                return "由于诸葛卧龙的八阵图非常的玄妙，所以你如果没仔细看清楚路观图是没办法找到路口的。\n";
        return "你问我 ? 我问谁啊 ?\n";
}
string ask_place()
{
        object ob;
        command("say 诸葛卧龙就隐居在雪苍山脚，但是一般人是无法轻易找到他的。");
        command("say 因为他在外面布下了「八阵图”，若无特殊方法是找不到的。\n");
        command("say 这有一张路观图，你拿去吧。");
        ob = new( "/open/snow/obj/picture" );
        ob->move( this_player() );
        message_vision("$N给$n一张路观图。\n",this_object(),this_player());
        return "祝你好运 ... ";
}
void create()
{
        set_name("圣贤书",({"master sue","sue"}));
        set("long","他是一个十分儒雅的年轻人，但却是武林中的有名的侠客。\n");
        set("gender","男性");
        set("class","scholar");
        set("nickname","九指书生");
        set("combat_exp",3000000);
        set("attitude","heroism");
        set("age",26);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("max_gin",10000);
        set("s_kee",1000);
        set("max_s_kee",1000);
        set("sec_kee","god");
        set("force",5000);
        set("max_force",5000);
        set("max_kee",10000);
        set("kee",10000);
        set("max_sen",10000);
        set("sen",10000);
        set_skill("literate",120);
        set_skill("cure",60);
        set("force_factor",10);
        set_skill("force",80);
        set_skill("stabber",120);
        set_skill("dodge",70);
        set_skill("knowpen",100);
        map_skill("stabber","knowpen");
        set_skill("parry",70);
        set_skill("poetforce",80);
        map_skill("force","poetforce");
        map_skill("parry","knowpen");
        set_skill("unarmed",20);
        set_skill("move",70);
        set_skill("plan",120);
        set_skill("winter-steps",100);
        map_skill("dodge","winter-steps");
        set_skill("god-plan",100);
        map_skill("plan","god-plan");
        set("chat_chance_combat", 100);
        set("inquiry",([
        "挑战书" : "最近莫名奇妙地接到了一张挑战书，真是令人困扰。\n",
        "困扰" : "我早就不问红尘世事了，但是不去赴约，又恐为天下人所耻笑，因此...\n",
        "血魔" : "ㄚ~~~你问这个.....该不会血魔已经破封了.....唉..苍生不幸....",
        "儒侠" : "这是当年夫子的不传弟子..不过已经消失一阵子了\n",
    "丽玉蝶兰" : (: liyu :),
        "血魔封印" : "当初为了将血魔封印...仙剑逍遥子将其配剑[仙剑连阳]请剑师龙铁心铸成开天三灵器...一传刀神..一传儒侠..一传其传人.并利用三灵器的圣气压制血魔魔气",
        "逍遥子" : "仙剑祖师爷ㄚ~~~仙魔战后已不知去向....",
        "龙铁心" : "先师说是天下间最有才华的铸剑师了...由于个性古怪..所以一般材料他都看不上眼....真不晓得[仙剑连阳]是怎么做成的...",
        "因此" : (: so :),
        "青龙之笛" : "此乃家传之宝，据家父说使用此笛(use)可以召唤出传说中的青龙，但是必须在特定之处使用，至于要在那里使用，我就不得而知。",
        "去老还童术" : "我有听说过武林中有一个宝物「锁元盒”，用这个宝物再加上青龙之气就能产生返老还童的效果，但是方法如果我并不清楚。\n",
        "锁元盒" : "这样宝物似乎早在二十年前左右就已经失落。\n",
        "邢贤书" : "嗯 ... 不瞒阁下，在下本姓邢，后改姓圣，「邢贤书”乃是在下早名也。\n",
        "神算先生" : "此人复姓诸葛名卧龙，乃当今知识之奇葩，无论是兵法、文学、政治、卜卦、医术，他样样精通。\n",
        "诸葛卧龙" : "此人虽有盖\世之才，然不得时也，如今此人隐居于雪苍山下。\n",
        "六韬奇略" : "六韬奇略是兵法家黄石公收集战国奇略所写之书, 不过他行事乖僻, 很难找到他。\n",
        "雪苍山下" : (: ask_place :),
        "路观图" : (: ask_picture :),
        "试炼印记" : (: ask_test :),
        "孔明兵法" : (: book :),
        ]));
        set("chat_msg_combat",({
        (: perform_action,"stabber.movedown" :),
        (: perform_action,"stabber.finger" :),
        (: perform_action,"plan.lock-link" :)
        }));
        setup();
        create_family("儒门",16,"弟子");
        carry_object(START_OBJ"ten_pen")->wield();
        carry_object(START_OBJ"k_cloth")->wear();
}

void attempt_apprentice(object ob)
{
        if(this_player()->query("class")!="scholar")
        {
                command("say 汝非儒生也，焉能收汝为徒乎 ?\n");
                return;
        }
        command(":)");
        command("recruit "+ob->query("id"));
}
void init()
{
        object me = this_player();
        if( me->query("quests/kill-snow") && !me->query("quests/fear_fighting") )
                call_out("finish",1,me);
        add_action("do_nod","nod");
}
int do_nod()
{
        object ob = this_object() , me = this_player();
        object obj;
        if( me->query("quests/kill-snow") ) return 0;
        if( !me->query_temp("ask_so") ) return 0;
        if( me->query_temp("get_letter") ) return 0;
        command("say 那么 .... 就烦劳你了。");
        obj = new("/daemon/class/scholar/letter");
        obj->move( me );
        message_vision("$N给了$n一张书信。\n",ob,me);
        me->set_temp("get_letter",1);
        return 1;
}
int accept_fight(object who)
{
 command("cmd god_kee");
 fight_ob(who);
 command("perform plan.fire");
 return 1;
}

int accept_kill(object who)
{
  command("say 让你尝尝身处烈火之中的滋味！\n");
 kill_ob(who);
 command("cmd god_kee");
 command("perform stabber.movedown");
 return 1;
}
int accept_object(object me, object obj)
{
        if( obj->query("name") == "孙子兵法" )
        {
          command("pat "+getuid(me));
          command("say 有何处不懂呢???让为师来指导你吧。");
          if( me->query("family/family_name") == "儒门" && !me->query("marks/kid-book") )
          {
            command("say 想不到你如此专心，就传授你诸葛神算吧．");

write(this_object()->query("name")+"指导着你心中的疑惑。\n\n"+
            "你觉得心中疑惑豁然贯通, 对兵法的认知更上一层。\n\n"+
            "你的诸葛神算达到上限了。\n\n"+
            "你已经完全了解了兵法的知识了。\n\n");
            if( me->query("force") < me->query("max_force") )
              me->set("force",me->query("max_force"));
            me->set("marks/kid-book",1);
          }
          destruct(obj);
        }
        else
          command("? "+getuid(me));
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
        if(winner->query("family/family_name")=="仙剑派" && winner->query("killyao")==1 && winner->query("bloodsword")==1)
        {
        object me,ob;
        me = this_player();
        ob=new("/open/gsword/obj1/brain.c");
        tell_object(winner,HIR"你从尸体上挖出了一颗血淋淋的大脑.."NOR);
        ob->move(winner);
        winner->set_temp("swordbrain",1);
        }

        if ( winner->query_temp("bless")==1 )
        {
        j=random(6000);
          if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
          {      
          new("/open/sky/obj3/water_feather")->move(environment(winner));
          message_vision(HIM"\n从圣贤书的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/water_feather",sprintf("%s(%s) 让圣贤书掉下了水之流羽于 %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }else{
        j=random(12000);
          if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
          {      
          new("/open/sky/obj3/water_feather")->move(environment(winner));
          message_vision(HIM"\n从圣贤书的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/water_feather",sprintf("%s(%s) 让圣贤书掉下了水之流羽于 %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }
        tell_object(users(),HIW"\n
儒门"HIR"传来了如洪钟般的叹息...\n
             "HIG"‘ 经 纶 百 世 路 绵 延 ， 
                    触 念 尘 缘 不 计 年 ； 
                        慈 心 解 去 风 雨 衣 ，
                            明 灯 长 照 九 重 天 。 ’\n"HIY"
                    「"HIW"风雅书"HIY"..."HIW"广文书"HIY"...汝等要替我报仇也...”\n"HIR"
            儒门九代令公之首「"HIY"圣贤书"HIR"”如今竟不幸命葬于"HIG+winner->name()+HIR"之手....\n\n"NOR);

        ::die();
}






