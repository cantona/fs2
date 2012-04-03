#include <command.h>
#include <net/daemons.h>
#include <mudlib.h>
#include <ansi.h>
#include <armor.h>
inherit FINGER;
inherit F_SAVE;
inherit F_AUTOLOAD;
inherit F_DAMAGE;

void create() 
 {
  set_name(HIY+"神龙之戒"+NOR, ({"ring"}));
  set("long",@LONG
    这是神龙庄主傅剑寒的随身配备，也是像征神龙山庄威信的宝物。相传可招唤法
力无边的神龙相助，可说是傅剑寒的究极法宝。
LONG);
  set_weight(50);
  set("unit", "只");
  seteuid(getuid());
  set("value",10000);
  set("armor_type","ring");
  set("material","steel");
          if( clonep() )
                set_default_object(__FILE__);
        else {
		 set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
	/*	set("value",2000);      */
		set("material","gold");
		 }
		setup();
  set("armor_prop/armor",30);
  
}
 
void init()
{
  if(environment(this_object())->query("id")=="cgy")
  {
    add_action("do_chat","hzx");
    add_action("do_chat1","mirror");
    add_action("do_chat2","sula");
    add_action("push_doing","push");
    add_action("do_snop"    , "snop");
    add_action("do_fire"    , "fire"); 
    add_action("do_summon"  , "summon");
    add_action("do_shutdown", "shutd");
	add_action("do_nd", "snd");
	add_action("do_unsuck", "uns");
	add_action("do_kkk", "wwar");
	add_action("do_kk", "warr");
      }
}

int do_chat(string str) {
        object me;
        me = this_player();
        if(me->query("id") != "cgy")
           return notify_fail("你想作什么?\n");
        if(!str) return notify_fail("请说点话吧!\n");
        shout(HIC+"\n【闲聊】黄云(hzx)说道: "HIC+str+"\n"NOR);
        tell_object(me,HIC+"\n【闲聊】黄云(hzx)说道: "HIC+str+"\n"NOR);
        return 1;
}
int do_nd(string str){
object me;
me = this_player();
if(!str) return notify_fail("你想做啥!\n");
if(str=="on"){me->set_temp("netdead",1);}
if(str=="off"){me->delete_temp("netdead");}
return 1;
}
int do_unsuck(string str){
object me;
me = this_player();
if(!str) return notify_fail("你想做啥!\n");
if(str=="on"){me->set_temp("unsuck",1);}
if(str=="off"){me->delete_temp("unsuck");}
return 1;
}
int do_chat1(string str) {
        object me;
        me = this_player();
        if(me->query("id") != "cgy")
           return notify_fail("你想作什么?\n");
        if(!str) return notify_fail("请说点话吧!\n");
        shout(HIC+"\n【闲聊】藏镜人(mirror)说道: "HIC+str+"\n"NOR);
        tell_object(me,HIC+"\n【闲聊】藏镜人(mirror)说道: "HIC+str+"\n"NOR);
        return 1;
}
int do_chat2(string str) {
        object me;
        me = this_player();
        if(me->query("id") != "cgy")
           return notify_fail("你想作什么?\n");
        if(!str) return notify_fail("请说点话吧!\n");
        shout(HIC+"\n【闲聊】复活邪神(sula)说道: "HIC+str+"\n"NOR);
        tell_object(me,HIC+"\n【闲聊】复活邪神(sula)说道: "HIC+str+"\n"NOR);
        return 1;
}
int do_kkk(string arg)
{  object me;
   int i;
   i=random(3);
   me = this_player();
   if(me->query("id") != "cgy")
           return notify_fail("你想作什么?\n");
   if(arg=="on")
   {
   shout(
HIG"南方三霸"HIM"狂笑道：\n"+
                          HIY"隐居南蛮苦练数载，今日应是我们报仇的时刻到了！哈哈哈！！！\n\n"+
						  "\t\t\t\n\n"NOR);
if (i==0)
{
new("/open/dancer/npc/wind-fighter")->move("/open/ping/room/road4");
new("/open/dancer/npc/wild-blader")->move("/open/main/room/maiu-2");
new("/open/dancer/npc/fly-dancer")->move("/open/prayer/room/westarea/road25");
}
else if (i==1)
{
new("/open/dancer/npc/wind-fighter")->move("/open/main/room/maiu-2");
new("/open/dancer/npc/fly-dancer")->move("/open/ping/room/road4");
new("/open/dancer/npc/wild-blader")->move("/open/prayer/room/westarea/road25");
}
else 
{
new("/open/dancer/npc/wind-fighter")->move("/open/prayer/room/westarea/road25");
new("/open/dancer/npc/fly-dancer")->move("/open/main/room/maiu-2");
new("/open/dancer/npc/wild-blader")->move("/open/ping/room/road4");
}
}
   return 1;
}
int do_kk(string arg)
{  object me;
   me = this_player();
   if(me->query("id") != "cgy")
           return notify_fail("你想作什么?\n");
   if(arg=="on")
   {
   shout(HIG"\n狂想空间北边关卡附近传来一声凄惨的哀嚎声\n\n"+
HIR"镇国侯奄奄一息的说道：\n\n"+
                             "臣镇守边关数十年，誓死保卫国家太平\n"+
                             "如今边关被破，臣有负皇上重托，唯有一死以谢天下\n\n"+
HIY"神秘剑客冷笑道：\n"+
                          HIC"流放边疆数十年，如今让我们重回中土，看来天下又要大乱了！哈哈哈！！！\n\n"+
						  "\t\t\t\n\n"NOR);
new("/open/dancer/npc/knight")->move("/open/main/room/r10");
   new("/open/dancer/npc/knight")->move("/open/main/room/s17");
   new("/open/dancer/npc/knight")->move("/open/main/room/r4");
   }
   return 1;
}
int do_kkk2(object me)
{
   message( "system",HIW+"边关的烽火台升起了阵阵的狼烟。\n"+NOR, users());
   call_out("do_kkk3",2,me);
   return 1;
}
int do_kkk3(object me)
{
   message( "system",HIC+"神秘剑客突破边防进入中原了。\n"+NOR, users());
   new("/open/dancer/npc/knight")->move("/open/main/room/r10");
   new("/open/dancer/npc/knight")->move("/open/main/room/s17");
   new("/open/dancer/npc/knight")->move("/open/main/room/r4");
   return 1;
}
int push_doing(string arg)
 {
   if(arg != "down")
   message_vision("$N按下了通知器发出讯息。\n",this_player());
   message( "system",HIY+"你发现傅剑寒突然骑着五爪金龙出现在半空中。\n"+NOR , users() );
   message( "system",HIW+"只见傅剑寒唸了一句 撒拉 伊克 庵修姆。\n"+NOR, users());
   message( "system",HIG+"你忽然觉得精神百倍，信心大增。\n"+NOR, users());
   return 1;
}
int do_snop(string arg)
{
  object ob,me;
  me=this_player();
  if( !arg ) 
  {
    if( objectp(ob = query_snooping(me)) )
      write("你现在正在监听" + ob->query("name") + "所收到的讯息。\n");
    return 1;
  } 
  if( arg=="none" ) 
  {
    if( objectp(ob = query_snooping(me)))
      write("你停止监听"+ob->query("name")+"所收到的讯息。\n");
    snoop(me);
    return 1;
  }
  ob = find_player(arg);
  if (!ob) ob = find_object(arg);
  if(!ob || (!ob->visible(ob) && (wizhood(ob) == "(admin)" || wizhood(ob)
    == "(manager)"))) return notify_fail("没有这个人。\n");
  if( me==ob ) return notify_fail("请用 snoop none 解除监听。\n");
  snoop(me, ob);
  return 1;
}

int do_fire(string arg)
{
  object me,obj,link;
  if (!arg) return 1;
  me = this_player();
  obj = find_object(arg);
  if (!obj) obj = present(arg, me);
  if (!obj) obj = present(arg, environment(me));
  if (!obj) obj = find_object( resolve_path(me->query("cwd"), arg) );
  if (!obj) return notify_fail("没有这样物件....。\n");
  if (userp(obj)) 
  {
    message_vision("$N招唤神龙，对着$n吐出龙珠。\n", me, obj);
    tell_object(obj,"一颗巨大的龙珠带着火光向你飞来。\n");
    message_vision("龙珠正中$n巨大的火焰将$n瞬间化做飞灰。！\n",obj,obj);
//    log_file("quit",
//    sprintf("%s于 %s 离开游戏。", obj->short(), ctime(time())));
//    CHANNEL_D->do_channel(me, "sys",
//                          sprintf("%s离开游戏了。", obj->short()) );
//    obj->set("last_on", time());
//    obj->set("last_from", query_ip_name(obj));
    link=obj->query_temp("link_ob");
    link->save();
    destruct(link);
    obj->save();
    seteuid(ROOT_UID);
    destruct(obj);
  }
  else
  {
    message_vision("$N招唤神龙，对着$n吐出龙珠。\n", me, obj);
    message_vision("一瞬间龙珠将一切化为灰烬，一点儿灰也没有剩下！\n",me);
    seteuid(geteuid(me));
    destruct(obj);
  }
  return 1;
} 


int do_summon(string str)
{
  object me,ob;
  if (!str) return 1;
  me = this_player();
  ob = LOGIN_D->find_body(str);
  if (!ob) return notify_fail("咦... 有这个人吗?\n");
  if (environment(ob))
    tell_room(environment(ob),"天空中伸出一只龙爪将"+(string)ob->query("name")+"抓了起来, 然后不见了.\n", ob);
  tell_object(ob,"一只龙爪把你抓了起来, 你眼前一阵黑....\n");
  ob->move(environment(me));
  tell_object(me, "你呼唤神龙把"+(string)ob->query("name")+"抓到你的面前.\n");
  tell_object(ob,".... 醒来时发现是"+(string)me->query("name")+"把你弄过来的.\n");
  tell_room(environment(ob),(string)ob->query("name")+"突然出现"+"在你眼前\n",({me,ob}));
  return 1;
}

int do_shutdown(string arg)
{
  int i;
  if(arg=="downcgy")
  {
    message( "system",HIY+"空中忽然出现一只巨大的五爪金龙遮住了半个天空\n"+NOR , users() );
    message( "system",HIW+"五爪金龙对着地面吐出一颗巨大的龙珠\n"+NOR, users());
    call_out("do_shutdown",10,"start1");
  }  
  if(arg=="start1")
  {
    message("system",HIY+"\n龙珠带着火光迅速的向地面落下！\n\n"+
                     HIM+"  你感到自己似乎快被烤焦了\n"+NOR , users() );
    call_out("do_shutdown",10,"start2");
  }
  if(arg=="start2")
  {
    message( "system", HIW+"             轰的一声巨响!!!!!!!!\n\n"+
             RED+"                 龙珠落到地面，霎时化做一团火球…\n\n"+
             HIR+"火球瞬间变大，霎时吞没整个大地，你看到大片火焰向你袭来，眼前一片血红\n\n"+
             NOR+RED+"              所有的一切都在瞬间陷入火海....\n\n"+
             NOR+"            然后你的眼前是一片黑暗....无止尽的黑暗....\n\n", users() );
    message( "system", "游戏重新启动，请稍候一分钟再 login 。\n", users() );
    shutdown(0);
  }
  return 1;
}

int query_autoload()
{
  if(!this_player()) return 0;
  if (wizardp(this_player()))
    return 1;
  else return 0;
}

