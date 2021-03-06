// Room: /open/center/room/auroom.c
// copy from //u/c/chun/shop/auroom.c
// 增加 auc 时就自动先扣款。 by wade 11/19/1999

#include <login.h>
#include <room.h>
#include <ansi.h>

inherit NPC;

object  auc_ob; // 拍卖的东西
string  ob_name;
string  name;   // 抢标的人
int     times;  // 第几次拍卖
int     value;  // 抢标的价钱
int     had_auc;

void create()
{
        seteuid(geteuid());
        set_name("黑市老板", ({ "auction boss", "boss" }) );
        set("long",@LONG
这是黑市老板，专门喊标物价用的。
LONG );

        set("no_clean_up",1);
        set("channels", ({ "mud" }) );
        set("no_kill",1);
        times = 0;
        name = "";
        ob_name = "";
        setup();
}

void auction()
{
  object        *objs, me, auc_man=this_object(), who;
  int           half;

  remove_call_out("auction");
  who = find_player(name);
  if (times == 0) {
    ob_name = "";
    objs = all_inventory(this_object());
    if (half = sizeof(objs)) {
        auc_ob = objs[random(sizeof(objs))];
        ob_name = auc_ob->query("id");
        half = auc_ob->query("value")/2;
        if (!half) half = 1;
        value = random(4*half)+1;
        CHANNEL_D->do_channel(this_object(), "mud", "㊣黑市交易㊣"
          "来来来！"+
          auc_ob->query_temp("auc_master")+
          "拍卖"+auc_ob->name()+"一"+auc_ob->query("unit")+"!!"+
          "起价"+CHINESE_D->cvalue(value)+"。");
        times = 1;
        name = "";
        had_auc = 0;
        call_out ("auction", 10);
    }
    return;
  }

  if (!auc_ob = present (ob_name, auc_man)) {
    ob_name = "";
    CHANNEL_D->do_channel(auc_man, "mud", "㊣黑市交易㊣"
      "拍卖品消失，取消本次拍卖。", users());
    if (arrayp(all_inventory(auc_man))) {
      times = 0;
      call_out ("auction", 10);
    }
    return;
  }
  
  me = find_player(auc_ob->query_temp("auc_master"));
  if ((name=="" && times > 3) || (name!="" && !who)) {  // 退货
    ob_name = "";
    if (!me) {
      CHANNEL_D->do_channel(auc_man, "mud", "㊣黑市交易㊣"
        "物主不在，"+auc_ob->name()+"充公。", users());
      destruct(auc_ob);
    }
    else {
    if(me->is_ghost()) {
      CHANNEL_D->do_channel(auc_man, "mud", "㊣黑市交易㊣"
          "太可惜了，竟然没人想要买"+auc_ob->name()+"。");
      CHANNEL_D->do_channel(auc_man, "mud", "㊣黑市交易㊣"
          "黑市公司送货员不能送"+auc_ob->name()+"到阴间只好充公。");
      destruct(auc_ob); } else {
      auc_ob->move(me);
      CHANNEL_D->do_channel(auc_man, "mud", "㊣黑市交易㊣"
          "太可惜了，竟然没人想要买"+auc_ob->name()+"。");
      CHANNEL_D->do_channel(auc_man, "mud", "㊣黑市交易㊣"
          "黑市公司送货员退还"+auc_ob->name()+"给原主"+me->name()+"。");
    }
    }
    if (arrayp(all_inventory(auc_man))) {
      times = 0;
      call_out ("auction", 10);
    }
    return;
  }
  // 拍卖中…也许有人抢标，也许是拍板，进入下一次喊价
  if (times <= 3) {
    if (had_auc) {
      had_auc = 0;
      CHANNEL_D->do_channel(auc_man, "mud", "㊣黑市交易㊣"
        "嘿呦! 有人以"+CHINESE_D->cvalue(value)+"抢标! 欢迎加价!!");
      times = 1;
    }
    else {
      CHANNEL_D->do_channel(this_object(), "mud", "㊣黑市交易㊣"
        "第"+chinese_number(times)+"次拍卖"+auc_ob->name()+"! 叫价"+
        CHINESE_D->cvalue(value)+"! 请出价!");
      times++;
    }
    call_out ("auction", 10);
    return;
  }
  // 三次喊价了，拍卖完成
  else {
    ob_name = "";
/* 因为已先付钱了，所以玩家不用再付钱一次，这个判断拿掉
 * by wade@FS 11/19/1999
    if (who->pay_money(value))
*/
    {
      CHANNEL_D->do_channel(this_object(), "mud", "㊣黑市交易㊣"+
        auc_ob->name()+"以"+CHINESE_D->cvalue(value)+
        "拍卖给"+who->name()+"。");
      if(who->is_ghost()) {
        CHANNEL_D->do_channel(this_object(), "mud", "㊣黑市交易㊣"
          "喔喔, 你是鬼魂唷, 所买到的东西送不到阴间唷!");
        destruct(auc_ob);
        }
      if ( !auc_ob->move(who) ) {
        CHANNEL_D->do_channel(this_object(), "mud", "㊣黑市交易㊣"
          "喔喔, 你的房间出问题啰!");
        destruct(auc_ob);
        }
      if (me) {
        if (value > 20000) value /= 3;
        else if (value > 5000) value /= 2;
        me->pay_player(value);

        if(auc_ob)
        tell_object(me, "㊣黑市交易㊣"
            "你卖出一"+auc_ob->query("unit")+auc_ob->name()+"，获得"+
            CHINESE_D->cvalue(value)+"。\n");
      }
      else
        CHANNEL_D->do_channel(this_object(), "mud", "㊣黑市交易㊣"
          "卖了一把无主孤魂的东东, 赚死了。");
    }
/* 因为已先付钱了，所以这段根本没有用
 * by wade@FS 11/19/1999
    else {
        CHANNEL_D->do_channel(this_object(), "mud", "㊣黑市交易㊣"
          "哇勒, "+who->name()+"怎么把钱花光了? 下次记得准备好钱喔!");
      if (me)
        auc_ob->move(me);
    }
*/
    if (arrayp(all_inventory(auc_man))) {
      times = 0;
      call_out("auction", 10);
    }
    return;
  }
  if (!all_inventory(auc_man)) {
    times = 0;
    call_out("auction",10);
  }
}

void do_buy (object me, int new_value)
{
  object        who;
  int           diff, exp;

  if (!auc_ob) {
    CHANNEL_D->do_channel(this_object(), "mud", "㊣黑市交易㊣"
      "哇! 东西消失了。无法拍卖啦!");
    return;
  }
  if (name == me->query("id")) {
    tell_object (me, "㊣黑市交易㊣"
      "想哄抬物价？少来了！\n");
    return;
  }
  if (new_value <= value) {
    tell_object (me, "㊣黑市交易㊣"
      "嘿嘿，想比黑市还黑? 干脆自己开黑市好了。\n");
    return;
  }
  exp = (int)me->query("combat_exp");
  if      (exp < 100)    { diff = value/1000; if (diff < 10)    diff = 10; }
  else if (exp < 1000)   { diff = value/100;  if (diff < 20)    diff = 20; }
  else if (exp < 10000)  { diff = value/10;   if (diff < 40)    diff = 40; }
  else if (exp < 100000) { diff = value/4;    if (diff < 100)   diff = 100; }
  else if (exp < 500000) { diff = value/2;    if (diff < 400)   diff = 400; }
  else                   { diff = value;      if (diff < 1000)  diff = 1000; }

  if (new_value - value < diff) {
    tell_object (me, "㊣黑市交易㊣"
      "你出的价钱并不符合黑市运作规则，请提高至少"+
      CHINESE_D->cvalue(diff)+"。\n");
    return;
  }
  // 做到抢标的人先付钱的话，第一步是：
  // 先还钱给上一次抢标的人(也许没人抢过标)
  if (name) {   // 有人抢过标
    if (who = find_living (name)) {
      who->pay_player (value);  // 还给上次抢标的人钱
      tell_object (who, "㊣黑市交易㊣"
        "有人抢你的标，还给你上次出的钱："+
        CHINESE_D->cvalue (value)+"。\n");
    }
	}
    me->pay_money (new_value);  // 这次抢标的人要先付钱
  
  // 有人抢标，所以新价钱是第一次
  times = 1;
  // 把抢标的人记录下来
  name=me->query("id");
  // 记录新价钱
  value = new_value;
  had_auc = 1;
  call_out("auction", 1);
}

// me sell ob.
int do_sell(object me, object ob)
{
  if (ob_name != "") {
    tell_object(me, "㊣黑市交易㊣"" 开卖中\n");
    return 0;
  }

  if (!ob || !ob->move(this_object())) {
    tell_object(me, "㊣黑市交易㊣"
      "嘿嘿, 你想欺骗黑市公司的人员啊。\n");
    return 0;
  }
  ob->set_temp("auc_master", me->query("id"));
  times = 0;
  tell_object(me, "㊣黑市交易㊣"" 开卖啦\n");
  call_out ("auction", 1);
  return 1;
}
