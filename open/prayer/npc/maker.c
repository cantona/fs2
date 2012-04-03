#include <command.h>
#include <ansi.h> 

inherit NPC;
int start_check( object me )
{
remove_call_out("start_check");
if( !me ) return 0;
command("say 你身上散发出阴灵之气，难道你得到妖刀‘村雨’？");
}
int start_blade(object who)
{
object wea;
remove_call_out("start_blade");
who=this_player();
if( !who ) return 0;
if(who->query_skill("fireforce",1)>=100&&who->query("get-evil-mblade")==0)
{
write("\n[1;33m铸匠将魔龙鳞丢入熔炉熔化后，加上你纯正极火功炼金，一会儿就打好了妖刀！\n[0m");
command("say 不过妖刀要血光才能发挥其功用(blood)！");
command("say 传说妖刀有某种神秘力量(power)！");
wea=new("/data/autoload/blademan/evil-mblade.c");
wea->move(who);
who->set("get-evil-mblade",1);
message("system",HIC"天空突然乌云密布，霎那间从天空中心击落一道闪电。\n"NOR,users());
message("system",HIC"\n这道闪电霎有灵性般的击向"+who->query("name")+"。\n"NOR,users());
message("system",HIY"\n同时间，大地震裂无数阴灵飞出聚集在"+who->query("name")+"身上。\n"NOR,users());
message("system",HIR"\n只见"+who->query("name")+"眼露红光狂笑道 : \n\n\t\t妖刀终于现世\n\n\t\t我称霸武林之日\n\n\t\t即将到来\n\n\t\t哈哈哈哈哈哈\n\n"NOR,users());
message("system",HIW"天雷地动～～"+who->query("name")+"纵声长笑 : \n\n\t\t哈哈哈哈～～"HIG"妖刀"HIW"现世了。\n"NOR,users());
who->set("title","[1;32m妖[1;37m刀[1;32m传[1;37m人[0m");
return 1;
} else {
if(who->query_skill("fireforce",1)<100) command("say 你极火功不够纯正(lv 100)！");
if(who->query("get-evil-mblade")==1) command("say 你已经有妖刀了！");
return 1;
}
}
int do_nod()
{
object me = this_player();
if(me->query("evil-mblade")!=1) return 0;
message_vision(HIY"$N看了看$n手上的妖刀。\n"NOR,this_object(),this_player());
command("sigh "+me->query("id"));
command("say 可惜刀身以毁，不过没关西，我父亲教了我一身好功夫。");
command("say 只要你能拿到魔龙鳞和练得纯正极火功我就能帮你。");
        return 1;
}
void create()
{
    set_name("工匠",({"maker"}));
    set("title", "武器铸造的");
    set("gender", "男性");
    set("age",43);
    set("attitude","friendly");
    set("long",@LONG

        他是铸造武器的工匠, 专门为武林侠客们铸造顺手的兵器, 
        不过这些兵器不是随便就能打造出来的, 材料方面可得费心
        一点去收集........

LONG);
 
    set("combat_exp",2000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",50);
    set("kee",50);
    set("max_force",50);
    set("force_factor", 1);
    set("force",50);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set("chat_chance",3);
    set("chat_msg", ({
        "[36m我的双手啊～最是灵巧了～!!\n\n"
        "[36m各种长短兵器～都能做的让客官您满意的～[0m!!\n\n",
        "[36m至于[33m工钱[36m嘛!! 可是不能马虎的哟![0m!\n\n",
    }) );
    set("inquiry",([
    "工钱":"那就要看客官您要打造何种兵器了!!刀, 剑, 棍, 扇, 爪....都得要付钱哟!!\n",
    "刀":"铸刀的价格嘛也不会很多啦!!就算您 10 两金子好了!!不好意思, 骗加骗加啦\n",
    "剑":"打剑的时间花费最久了!!收个 20 两金子可不算过份哪!!不好意思, 骗加骗加啦\n",
    "棍":"磨棍要花的功夫较多!!酌量给您收个 12 两金子!!不好意思, 骗加骗加啦\n",
    "扇":"扇子的制作较繁杂!!可得收个 15 两金子呢!!不好意思, 骗加骗加啦\n",
    "爪":"空手武器的造型较简单!!就算您 5 两金子好了!!不好意思, 骗加骗加啦\n",
    ]));
    setup();
}

void init()
{
        object me = this_player();
        object ob;
if((ob=present("bad-evil-mblade",me))&&ob->name()=="受损的妖刀‘村雨’")
        {
                call_out("start_check",1,me);
                add_action("do_nod","nod");
        }
        add_action("do_select","select");
if(me->query_temp("sumblade")==1&&me->query_temp("bad-blade")==1) {
    call_out("start_blade",1,me); }
}

int accept_object(object who, object obj)
{
object wea;
who=this_player();
        if( obj->value() == 50000 )
        {
        write("[36m小的马上拿这些工钱去准备一下铸造空手武器的工具!![0m\n");
        who->set_temp("money/unarmed",1);
        destruct(obj);
        return 1;
        }
        if( obj->value() == 100000 )
        {
        write("[36m小的马上拿这些工钱去准备一下铸刀用的工具!![0m\n");
        who->set_temp("money/blade",1);
        destruct(obj);
        return 1;
        }
        if( obj->value() == 120000 )
        {
        write("[36m小的马上拿这些工钱去准备一下铸棍用的工具!![0m\n");
        who->set_temp("money/stick",1);
        destruct(obj);
        return 1;
        }
        if( obj->value() == 150000 )
        {
        write("[36m小的马上拿这些工钱去准备一下铸扇用的工具!![0m\n");
        who->set_temp("money/fan",1);
        destruct(obj);
        return 1;
        }
        if( obj->value() == 200000 )
        {
        write("[36m小的马上拿这些工钱去准备一下打剑用的工具!![0m\n");
        who->set_temp("money/sword",1);
        destruct(obj);
        return 1;
        }
        if( obj->query_temp("name") == "[33m黄甲金龙的眼珠[0m" )
        {
        command("say 这位客官, 你真利害!!竟然能够拿到黄甲金龙的眼珠!!\n");
        who->set_temp("marks/dragon",1);
        destruct(obj);
        return 1;
        }
        if( obj->query("name") == "[33m黄甲金龙的皮革[0m" )
        {
        command("say 这位客官, 你真利害!!竟然能够拿到黄甲金龙的皮革!!\n");
        who->set_temp("marks/dragon",2);
        return 1;
        destruct(obj);
        }
        if( obj->query("name") == "[33m黄甲金龙的鳞片[0m" )
        {
        command("say 这位客官, 你真利害!!竟然能够拿到黄甲金龙的鳞片\n!!");
        who->set_temp("marks/dragon",3);
        destruct(obj);
        return 1;
        }
        if( obj->query("name") == "[33m黄甲金龙的锐齿[0m" )
        {
        command("say 这位客官, 你真利害!!竟然能够拿到黄甲金龙的牙齿!!\n");
        who->set_temp("marks/dragon",4);
        destruct(obj);
        return 1;
        }
        if( obj->query("name") == "[33m黄甲金龙的骨骼[0m" )
        {
        command("say 这位客官, 你真利害!!竟然能够拿到黄甲金龙的骨骼!!\n");
        who->set_temp("marks/dragon",5);
        destruct(obj);
        return 1;
        }
if(who->query("family/family_name")=="魔刀莫测"&&who->query("evil-mblade")==1)
{
if(obj->query("id")=="dragon scale"&&who->query_temp("sumblade")!=1)
        {
        command("say 哈哈！你拿到魔龙鳞了！妖刀现世咫日可待！\n");
        who->set_temp("sumblade",1);
        destruct(obj);
 } else
if(obj->query("id")=="bad-evil-mblade"&&who->query_temp("bad-blade")!=1)
        {
        command("say 呵呵！妖刀就要现世啦！\n");
        destruct(obj);
        who->set_temp("bad-blade",1);
        }
command("say 把我须要的东西给我，等一下再来！\n");
        return 1;
}
        if( obj->query("name") == "生铁" )
        {
        command("say 这位客官, 这是块生铁哪!!您可是要打点兵器吧!!\n");
        who->set_temp("marks/metal",1);
        destruct(obj);
        return 1;
        }
        if( obj->query("name") == "黄铜" )
        {
        command("say 这位客官, 这是块黄铜哪!!您可是要打点兵器吧!!\n");
        who->set_temp("marks/metal",2);
        destruct(obj);
        return 1;
        }
        if( obj->query("name") == "白银" )
        {
        command("say 这位客官, 这是块白银哪!!您可是要打点兵器吧!!\n");
        who->set_temp("marks/metal",3);
        destruct(obj);
        return 1;
        }
        if( obj->query("name") == "金子" )
        {
        command("say 这位客官, 这是块黄金哪!!您可是要打点兵器吧!!\n");
        who->set_temp("marks/metal",4);
        destruct(obj);
        return 1;
        }
        else
        {
        command("say 这位客官真是大方, 那小的就恭贺不容从命啰\n!!");
        return 0;
        }
}

int do_select(string arg)
{
        object who=this_player();
        object bl,sw,st,un,fa;

        if( ( arg == "blade") && who->query_temp("money/blade") )
        {
          if ( who->query_temp("marks/metal",1) )
          {
          write("铸匠将金属丢入熔炉熔化后, 开始乒乒乓乓的锤打起来了......\n\n");
            if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",3) ) 
            bl=new("data/autoload/prayer/bl2");
       else if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",1) ) 
            bl=new("data/autoload/prayer/bl4");
       else if( who->query_temp("marks/metal",3) && who->query_temp("marks/dragon",5) ) 
            bl=new("data/autoload/prayer/bl6");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",2) ) 
            bl=new("data/autoload/prayer/bl5");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",4) ) 
            bl=new("data/autoload/prayer/bl3");
       else bl=new("data/autoload/prayer/bl1");
          }
          who->delete("marks/dragon");
          who->delete("money/blade");
          who->delete("marks/metal");
          bl->move(who);
          write(this_object()->query_temp("name")+"将铸好的刀拿给你看了看。\n\n"+
          "你觉得这一把刀异常地锋利, 拿在手上顿觉自己刀法益发成长许多。\n\n");
          return 1;
        }
    
        if( ( arg == "sword") && who->query_temp("money/sword") )
        {
          if ( who->query_temp("marks/metal",1) )
          {
          write("铸匠将金属丢入熔炉熔化后, 开始乒乒乓乓的锤打起来了......\n\n");
            if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",3) ) 
            sw=new("data/autoload/prayer/sw2");
       else if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",1) ) 
            sw=new("data/autoload/prayer/sw4");
       else if( who->query_temp("marks/metal",3) && who->query_temp("marks/dragon",5) ) 
            sw=new("data/autoload/prayer/sw6");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",2) ) 
            sw=new("data/autoload/prayer/sw5");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",4) ) 
            sw=new("data/autoload/prayer/sw3");
       else sw=new("data/autoload/prayer/sw1");
          }
          who->delete("marks/dragon");
          who->delete("marks/metal");
          who->delete("money/sword");
          sw->move(who);
          write(this_object()->query_temp("name")+"将打好的剑拿给你看了看。\n\n"+
          "你觉得这一把剑所散发出来的剑气可以使自己剑法益发成长许多。\n\n");
          return 1;
        }

        if( ( arg == "stick") && who->query_temp("money/stick") )
        {
          if ( who->query_temp("marks/metal",1) )
          {
          write("铸匠将金属丢入熔炉熔化后, 开始乒乒乓乓的锤打起来了......\n\n");
            if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",3) ) 
            st=new("data/autoload/prayer/st4");
       else if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",1) ) 
            st=new("data/autoload/prayer/st6");
       else if( who->query_temp("marks/metal",3) && who->query_temp("marks/dragon",5) ) 
            st=new("data/autoload/prayer/st2");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",2) ) 
            st=new("data/autoload/prayer/st3");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",4) ) 
            st=new("data/autoload/prayer/st5");
       else st=new("data/autoload/prayer/st1");
          }
          who->delete("marks/dragon");
          who->delete("marks/metal");
          who->delete("money/stick");
          st->move(who);
          write(this_object()->query_temp("name")+"将打好的棍子拿给你看了看。\n\n"+
          "你觉得这一根棍子异常地顺溜, 拿在手上顿觉自己棍法比武松强多了。\n\n");
          return 1;
        }

        if( ( arg == "unarmed") && who->query_temp("money/unarmed") )
        {
          if ( who->query_temp("marks/metal",1) )
          {
          write("铸匠将金属丢入熔炉熔化后, 开始乒乒乓乓的锤打起来了......\n\n");
            if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",3) ) 
            un=new("data/autoload/prayer/un4");
       else if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",1) ) 
            un=new("data/autoload/prayer/un6");
       else if( who->query_temp("marks/metal",3) && who->query_temp("marks/dragon",5) ) 
            un=new("data/autoload/prayer/un3");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",2) ) 
            un=new("data/autoload/prayer/un5");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",4) ) 
            un=new("data/autoload/prayer/un2");
       else un=new("data/autoload/prayer/un1");
          }
          who->delete("marks/dragon");
          who->delete("marks/metal");
          who->delete("money/unarmed");
          un->move(who);
          write(this_object()->query_temp("name")+"将打好的武器拿给你看了看。\n\n"+
          "你觉得这一把空手使用的武器很特别, 装备在手上给你一股力量感。\n\n");
          return 1;
        }

        if( ( arg == "fan") && who->query_temp("money/fan") )
        {
          if ( who->query_temp("marks/metal",1) )
          {
          write("铸匠将金属丢入熔炉熔化后, 开始乒乒乓乓的锤打起来了......\n\n");
            if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",3) ) 
            fa=new("data/autoload/prayer/fa5");
       else if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",1) ) 
            fa=new("data/autoload/prayer/fa4");
       else if( who->query_temp("marks/metal",3) && who->query_temp("marks/dragon",5) ) 
            fa=new("data/autoload/prayer/fa2");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",2) ) 
            fa=new("data/autoload/prayer/fa3");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",4) ) 
            fa=new("data/autoload/prayer/fa6");
       else fa=new("data/autoload/prayer/fa1");
          }
          who->delete("marks/dragon");
          who->delete("marks/metal");
          who->delete("money/fan");
          fa->move(who);
          write(this_object()->query_temp("name")+"将打好的武器拿给你看了看。\n\n"+
          "你觉得这一把扇子很称手, 装备在手上给你一股安全感与威风之态。\n\n");
          return 1;
        }

}

