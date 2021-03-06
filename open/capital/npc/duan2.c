// 段家 门人 made by onion
#include </open/open.h>
inherit NPC;
string do_duan();
string do_thief();
string do_linpo();
int do_gone();
object ob=this_object();
void create()
{
        set_name("京城大盗",({"great thief","thief"}));
        set("long","虽然他是一名被通缉的大盗, 但眉目间却隐隐有一股不凡的气质。\n"+
            "似乎向来与流水行云同渡, 跟落霞孤骛齐飞。\n");
        set("gender","男性");
        set("class","scholar");
        set("combat_exp", 100000);
        set("attitude","heroism");
        set("age",44);
        set("inquiry", ([
        "duan" : (: do_duan :),
        "段家" : (: do_duan :),
        "chao" : (: do_duan :),
        "thief" : (: do_thief :),
        "凌波微步秘笈" : (: do_linpo :),
        "小师弟" : "你以为我会跟你说吗!哼，想都别想!!",
        ]));
        set("chat_chance_combat", 100);
        set("chat_msg_combat", ({
        (: this_object(),"do_gone" :),
        }));
        set("force",1000);
        set("max_force",1000);
        set("force_factor", 20);
        set_skill("force",40);
        set_skill("dodge",70);
        set_skill("unarmed",30);
        set_skill("sunforce",40);
        set_skill("linpo-steps",60);
        set_skill("six-fingers",71);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("stabber","six-fingers");
        map_skill("unarmed","six-fingers");
        set_temp("apply/dodge",50);
        set_temp("apply/damage",50);
        set_temp("apply/armor",100);
        setup();
        carry_object(CAPITAL_OBJ"cloth1")->wear();
        carry_object(CAPITAL_OBJ"pen0")->wield();
        carry_object(CAPITAL_OBJ"pen0")->wield();
        add_money("silver",10);
}

void init()
{
        add_action("do_forgive","forgive");
        add_action("do_want","want");
}
string do_duan()
{
        set_name("赵琴风",({"chao"}));
        return("原来你已经知道我是段家的人了。\n");
}
string do_thief()
{
        object me=this_player();
        if( !this_object()->queyr_temp("lost") )
        {
        me->set_temp("thief",9);
        remove_call_out("do_flee");
        call_out("do_flee",3);
        set_name("赵琴风",({"chao"}));
        return("不错, 我便是赵琴风, 京城的案子都是我做的, 但我所偷的是那些文臣武官在民间搜括、"+
        "强征得来的钱财古玩, 账济的是给搜括一空的贫众, 虽违理, 却合情。这等事, "+
        "别人不敢做, 我偏偏要做, 只要是合于我心, 又有什么不可以。\n");
        }
        else
        return("这不关你的事。\n");
}
string do_linpo()
{
        object me=this_player();

        if(this_object()->query("name")!="赵琴风")
          return 0;
        if(me->query("family/family_name")!="段家")
          return "我不懂你在说什么。";
        if(me->query("marks/ask_linpo")!=1)
          return "你别乱说，打死我也不会作出对师门不敬的事!!\n";
        me->set("marks/ask_linpo",2);
        command("hmm");
        return "真没想到你竟然知道这件事，不过你找我也没用，因为我已经把秘笈送给我的小师弟了。";
}
void do_flee()
{
        object me=this_player();
        tell_room(environment(ob),query("name")+"身形一退, 似乎想要逃走, 但你眼明手快的把他挡了下来。\n");
        message_vision("$N和$n打了起来。\n",me,ob);
        ob->fight_ob(me);
}

int do_gone()
{
        object *me;
        me=ob->query_enemy();
        if( me[random(sizeof(me))]->query_temp("thief") != 9 )
        {
          command("say 连话都不说明白是吧..告辞了。");
          tell_room(environment(ob),query("name")+"身形一动, 人影一晃, 便不知所踪了。\n");
          destruct(ob);
        }
        return 1;
}

void unconcious()
{
        object winner = query_temp("last_damage_from");
        if( !query_temp("lost") )
        {
          message_vision("$N从急急忙忙的从怀里掏出一颗小还丹运功服化。\n",ob);
          command("say 既然我技不如人  那就任凭你处置吧");
          tell_object(winner,"[1;36m你要原谅(forgive)他吗?[0m\n");
          set_temp("lost",getuid(winner));
          ob->remove_all_enemy();
          set("kee",100);
        }
        else
        {
          ob->delete_temp("undead");
          :: unconcious();
        }
}

int do_forgive(string str)
{
        object me=this_player();
        if(ob->query_temp("lost") == getuid(me) || !me->query("quests/catch_thief") )
        {
          command("say 好, 承蒙"+RANK_D->query_respect(me)+"看的起我, 给我这"+
          "一次机会, 我这就洗手不干了。");
          if( !ob->query_temp("get_reward") )
          {
            message_vision("$N从怀中掏出两件东西。\n",ob);
            command("say 这两件宝物是我多年前无意中得来的, 一是一颗九转金丹(pi"+
            "ll), 二是一把神兵利器(weapon), 为了感谢你, 就送你其中一件吧, 你想"+
            "要(want)什么呢?");
            if( !me->query("quests/catch_thief") )
            {
            write("\n\n[1;36***完成京城大盗之谜***[0m\n得到实战经验 200。\n");
            me->set("quests/catch_thief",1);
            me->set_temp("can_get_reward",1);
            me->add("combat_exp",200);
            me->delete_temp("thief");
            }
          }
          else
          {
            command("say 这就告辞了。");
            destruct(ob);
          }
          return 1;
        }
        return 0;
}
int do_want(string str)
{
        object me=this_player();
        object reward;
        int kind;
        if( me->query("quests/catch_thief") || !ob->query_temp("get_reward") || me->query_temp("can_get_reward") )
        {
          if( str == "pill" || str == "weapon")
          {
            if( str == "weapon" )
            {
              if( me->query("class") == "blademan" || me->query("class") == "swordsman" )
              {
              if( me->query("class") == "blademan" )
                kind=random(2)+3;
              if( me->query("class") == "swordsman" )
                kind=random(2)+1;
              }
              else
                kind=random(4)+1;
              switch(kind)
              {
              case 1 :
              reward=new(CAPITAL_OBJ"4-1");                     break;
              case 2 :
              reward=new(CAPITAL_OBJ"4-4");                     break;
              case 3 :
              reward=new(CAPITAL_OBJ"4-3");                     break;
              case 4 :
              reward=new(CAPITAL_OBJ"4-2");                     break;
              }
            }
            if( str == "pill" )
              reward=new(CAPITAL_OBJ"gold_pill");
            message_vision("$N将手上的"+reward->query("name")+"交给$n。\n",ob,me);
            if( me->query_max_encumbrance() - me->query_encumbrance() > reward->query_weight() )
              reward->move(me);
            else
            {
              message_vision("$N身上太重了, 故$n将"+reward->query("name")+"置于地上。\n",me,ob);
              reward->move(environment(me));
            }
            if( str == "weapon" )
              command("say 此把武器业已封尘多年, 必须要以自身精气神先开光(blood)后才有威力。");
            ob->set_temp("get_reward",1);
            me->delete_temp("can_get_reward");
            command("say "+RANK_D->query_respect(me)+"告辞了, 就此拜别。");
            tell_room(environment(ob),ob->query("name")+"转动石桌后, 上头露出"+
            "一个大洞, 他便从此洞爬了出去, 之后这个大洞又缓缓的关闭。\n");
            destruct(ob);
          }
          else
            command("say 什么?");
          return 1;
        }
        else
          return 0;
}
