//shop.c by chun 1995.10.19
#include <ansi.h>
#include <room.h>

inherit ROOM;
inherit CHINESE_D;
inherit F_FINANCE;
inherit F_MORE;


#include <shop.h>
mapping sells = ([ ]);          //      sells[id] = short();
mapping names = ([ ]);          //      names[id] = file_name(id);
mapping v = ([ ]);              //      v[id] = value;
mapping tradename = ([ ]);      //      tradename[id] = id;
mapping total = ([ ]);          //      total[id]=个数;
int goods_amount;               //      总商品个数

void do_more(object me, string cmd , int line );
int sell_ob(object ob, int trade_lv);
int sell_all(int trade_lv);
int new_list(object ppl,string arg);
int delete_sell_all(object ppl);

void create()
{
  seteuid(getuid());
  set("no_clean_up",1);
}

void init()
{
  add_action("do_sell","sell");
  add_action("do_buy","buy");
  add_action("do_list","list");
  add_action("do_value","value");
  add_action("do_view","view");
  if(wizardp(this_player())) add_action("do_know","know");
}

void buy_thing(string arg)
{
  if(total[arg] > 1)
    total[arg]--;
  else{
    map_delete( tradename , arg );
    map_delete( sells , arg );
    map_delete( names , arg );
    map_delete( v , arg );
    map_delete( total,arg);
  }
}


int do_value(string arg)
{
  object *inv;
  if(arg)
  return 0;
  inv=all_inventory(this_player());
  if(!inv)
  return notify_fail("你身上没有任何东西可供估价。\n");
  printf(HIC "你身上带着这些东西：\n%s" NOR,
    implode(map_array(inv,"ob_value",this_object()),"") );
  return 1;
}

int do_sell(string arg)
{
  object ob, me=this_player();
  int trade_lv, index=1;

  if( !arg )
    return notify_fail("你要卖什么东西？\n");

  // 调整 trade skill 到 1..100 之间
  if(!trade_lv = me->query_skill("trade",1) )
    trade_lv = 1;
  if (trade_lv>100) trade_lv = 100;

  if(arg=="all"){
    if(this_player()->query_temp("just_sell_all"))
      return notify_fail("商店老板说道:我还正在整理你刚刚卖的东西, 麻烦你等一下!!\n");
    else
      return sell_all(trade_lv);
  }

  // 这样可以卖第二项物品, good 范例
  if (sscanf (arg, "%s %d", arg, index) == 2)
    if (index < 1) index = 1;

  if( !(ob = present(arg+" "+index, me)) )
    return notify_fail("要卖空？\n");

  if (!sell_ob(ob, trade_lv))
    write ("卖东西失败.\n");
  else
    write ("卖完了.\n");
  return 1;
}

int sell_all(int trade_lv)
{
  object *inv;
  int i,max;

  inv = all_inventory(this_player());
  max=sizeof(inv);
  if(max>7) max=7;
  for (i=0; i<max; i++)
    sell_ob(inv[i], trade_lv);
  this_player()->set_temp("just_sell_all",1);
  call_out("delete_sell_all",3,this_player());

  write ("卖完了.\n");
  return 1;
}

int sell_ob(object ob, int trade_lv)
{
  object me=this_player();
  string arg,file_name,temp;
  int valu;

  if(!ob) return 0;
  arg = ob->query("id");
  valu=ob->query("value");
  if( ob->query("no_drop") || ob->query_temp("secured") || ob->query("no_sell") )
    return 0;

  if (ob->query("money_id"))
    return 0;

    if(!valu){
    write ("你卖掉没价值的东西, 店老板看了一眼就丢进垃圾桶了.\n");
    destruct(ob);
     return 1;
    }
    if(!intp(valu)){
     write ("你卖掉没价值的东西, 店老板看了一眼就丢进垃圾桶了.\n");
    destruct(ob);
     return 1;
    }
   if (valu < 100) {
    write ("你卖掉没价值的东西, 店老板看了一眼就丢进垃圾桶了.\n");
    destruct(ob);
    return 1;
  }

  valu=(int)(valu/400*(300+trade_lv));
  printf("回收的中古货要打个折扣，\n你卖掉%s得到%s\n",ob->short(),
        cvalue(valu) );
  me->pay_player(valu);
  message_vision(HIC "$N卖掉一"+ob->query("unit")+ob->query("name")+"\n" NOR,
    me );
  if(      me->query_skill("trade",1)
        || me->query_skill("trade") < 100 )
    me->improve_skill("trade",(random(me->query("int"))+
          random(me->query("per"))/2) );

  file_name=base_name(ob);
  if(!sscanf(file_name,"%s.c",temp)) file_name+=".c";
  if(names[arg] != file_name) {
    v[arg] = (int)ob->query("value");
    names[arg] = file_name;
    sells[arg] = ob->short();
    tradename[arg] = arg;
    total[arg]=1;
  }
  else{
    total[arg]++;
  }
  destruct(ob);
  return 1;
}

int do_list(string arg)
{
  string *k;
  if( arg )
    return new_list(this_player(),arg);

  printf("在这你可以买到：\n");
  if( !k=keys(sells) ) return 1;
  else do_more(this_player(), "",0);
  return 1;
}


int do_buy(string arg)
{
  object ob, me=this_player();
  int trade_lv,valu,per;
  per=me->query("per");
  if(!trade_lv=me->query_skill("trade",1) )
    trade_lv = 1;
  if( !arg )
    return notify_fail("你要买什么东西？\n");
  if( arg != tradename[arg] ){
    write("这里没有卖这种东西，你最好跟我说东西的全名。\n");
    return 1;
  }
  if (trade_lv > 100) trade_lv = 100;
  valu=v[arg]/100*(230-trade_lv);
  if(per > 20)
  {
    valu=valu - v[arg]*per/100;
    write("商店老板说: 您长的那么可人意,就算你便宜点吧...\n");
  }
  if(me->can_afford(valu))
  {
    me->pay_money(valu);
    ob = new(names[arg]);
    ob->move(me);
    buy_thing(arg);
    message_vision("$N花了"+cvalue(valu)+
                   "买下了一"+ob->query("unit")+ob->short()+"\n",
                   me );
    if (me->query_skill("trade",1) ||
       me->query_skill("trade") < 100 )
    {
      me->improve_skill("trade",random( me->query("int") + per/2 ) );
    }
    else {
      tell_object(me,HIB "你没有适合的货币来买" NOR+
      sells[arg]+"\n");
    }
  }
  else
    message_vision("$N身上没有足够的钱币买东西。\n", me);
  return 1;
}

void do_more(object me, string cmd , int line )
{
  int i;
  string *k, list="";
  k = keys(sells);

  switch(cmd) {
    case " ":
    case "":
    if( sizeof(k) < 24 ) {
        for(i = line; line<sizeof(k); line++)
            list += sprintf("%-50s"NOR"\t\t价格：%s\n",sells[k[line]],
                            cvalue(v[k[line]]) );
        me->start_more(list);
        if( line >= sizeof(k) ) return;
        break;
    }
    else {
        for(i = line + 20; line<sizeof(k) && line<i; line++)
            list += sprintf("%-50s"NOR"\t\t价格：%s\n", sells[k[line]],
                            cvalue(v[k[line]]) );
        if( line >=sizeof(k) ) return;
        me->start_more(list);
        break;
    }
    case "b":
        line = line - 40;
        if(line<-19) return;
        for(i=line + 20; line < i;line++)
            list += sprintf("%-50s"NOR"\t\t价格：%s\n", sells[k[line]],
                            cvalue(v[k[line]]) );
        break;
    case "q":
        return;
  }
}
int new_list(object ppl,string arg)
{
    int i,j,flag,cnt,page,start,end;
    string kind,list,temp;
    string *k;
    mapping final=([ ]);
    object ob,aa,bb;


    if(!ppl) return 1;
    page=0;
    if(sscanf(arg,"%s %d",temp,page)==2){
      arg=temp;
    }
    if( arg != "other")
    if( member_array(arg, ALLOW_CHOICE) == -1 )
    {
      write("因为没有你要的选项, 所以就列一些给你看!!\n");
      do_list(0);
      return 1;
    }
    if( member_array(arg, ARMOR_CHOICE) !=-1 )
      kind="armor_type";
    else if( member_array(arg, WEAPON_CHOICE) !=-1 )
      kind="skill_type";
    else if( arg== "other")
      kind="other";
    else {
      write("因为没有你要的选项, 所以就列一些给你看!!\n");
      do_list(0);
      return 1;
    }
    list="";
    k=keys(names);
    cnt=0;


    for(i=0;i<sizeof(k);i++){
      if(!sscanf(names[k[i]],"%s.c",temp)) names[k[i]]+=".c";
      if(file_size(names[k[i]]) <1) continue;
      ob=new(names[k[i]]);
      if(arg=="other"){
        if(ob->query("skill_type") || ob->query("armor_type")) continue;
      }
      else if(arg=="armor"){
        if(!ob->query("armor_type")) continue;
      }
      else if(arg=="weapon"){
        if(!ob->query("skill_type")) continue;
      }
      else{
        if(!ob->query(kind)) continue;
        if(ob->query(kind)!=arg) continue;
      }
      final[cnt]=names[k[i]];
      cnt++;
    }
    if(!cnt)
      return notify_fail("真是抱歉，本店目前没有卖("+KIND_NAME[arg]+")!!\n");

    goods_amount=sizeof(final);
    if(page < 0)
      return notify_fail("请不要开玩笑!!\n");
    if(page) page--;
    if(page*50 > goods_amount)
      return notify_fail(sprintf("没有那么多页，只显示到第 %d 页而已!!\n",goods_amount/50+1));
    start=page*50;
    if(sizeof(final) - start >=50) end=start+50;
    else end=sizeof(final);
    for(i=start;i<(end-1);i++)
    {
      for(j=i;j<end;j++)
      {
        if(i==j) continue;
        if(call_other(final[i],"query","value") < call_other(final[j],"query","value")){
          temp=final[i];
          final[i]=final[j];
          final[j]=temp;
        }
      }
    }
    for(i=start;i<end;i++)
    {
      ob=new(final[i]);
        list += sprintf("%10s%-30s"NOR"%10s：%-30s 还剩%d%s\n", ob->query("name"),"("+ob->query("id")+")","价格",
                      cvalue(ob->query("value")),total[ob->query("id")],ob->query("unit"));
    }
    if(!page) page=1;
    if(goods_amount > end)
      list+=sprintf(HIY"因为商品太多了，没办法一次全部列出，你可以使用list %s %d来查看剩下的(%s)。\n"NOR,arg,page+1,KIND_NAME[arg]);
    write("在这你可以买到的("+KIND_NAME[arg]+")有:\n");
    ppl->start_more(list);
    return 1;
}

int do_view()
{
    string out="";
    int i;
    string *k;

    k=keys(KIND_NAME);
    out+="本店目前提供以下种类的物品进行买卖:\n";
    out+=sprintf("%-10s:%-15s%-10s:%-15s%-10s:%-15s\n","名称","种类","名称","种类","名称","种类");
    out+=sprintf("-----------------------------------------------------------------------------\n");
    for(i=0;i<sizeof(k);i++){
      out+=sprintf("%-10s:%-15s",k[i],KIND_NAME[k[i]]);
      if((i+1)%3==0) out+="\n";
    }
    out+="\n";
    out+="\n
新增加可单独查看某种类商品: list 名称
例如想要找颈部商品，可list neck
list armor->列出所有防具
list weapon->列出所有武器
list other->列出不是防具或武器的物品

";
    this_player()->start_more(out);
    return 1;
}

int delete_sell_all(object ppl)
{
  if(!ppl) return 1;
  if(!ppl->query_temp("just_sell_all")) return 1;
  ppl->delete_temp("just_sell_all");
  return 1;
}
int do_know()
{
  int amount=sizeof(names);
  printf("本店目前共有 %d 件商品待售!!\n",amount);
  return 1;
}
