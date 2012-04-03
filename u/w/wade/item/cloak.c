
// 写的有点头昏脑胀..有 bug 的话记的告诉我喔:P..还有新的点子也别忘了:P



#include <mudlib.h>

#include <daemons.h>

#include <money.h>

#include <ansi.h>

#include <language.h>

#include <man.h>



inherit ARMOR;

inherit DAEMON;

string inputstr,verb;



void create()

{

  set("name"," 大魔道士披风");

  set("id",({"Magic cloak","cloak","大魔道士披风"}));

  set("short",
    this_player()->query("chi_name")+ "的大魔道士披风(Magic cloak)");

set("long",@LONG

    这是一件受过古法老王诅咒的披风，听说只要任何人一穿上他就会有..bug出现

    键入<help cloak>以获得更多的资讯。

LONG

);

  set("unit","件");

  set("mass",1);

  set("bulk",1);

  set("type","cloak");

 set("armor",99999999);

  set("light",1);

  set("prevent_drop",1);

  set("prevent_get",1);

}


string query_auto_load()

{

    return "/u/c/cloud/armor/cloak.c" + ":";

}

void init()

{

  add_action("help","help");

  add_action("message2","sh");

  add_action("message1","mes");

  add_action("message3","low");

  add_action("message4","smi");

//add_action("hookcmd","");

  add_action("full","full");

  add_action("rem","rem");

  add_action("vend","vend");

  add_action("mob","mob");

  add_action("whereis","whereis");

  add_action("getobj","getobj");

  add_action("back","back");

  add_action("message","mess");

  add_action("morep","morep");

  add_action("morei","morei");

  add_action("wizard_chat","wiz");

  add_action("list_wizards","wizs");

  this_player()->set_temp("heat",1);

}



//int hookcmd(string str)

//{

//  verb=query_verb();

//  return 1;

//}



//int inputstr(string str)

//{

//  write(str);

//}

int rem(string str)

{

  string ob,player;

  object obj;



  sscanf(str,"%s from %s",ob,player);

  obj=present(ob,get_object(player));

  if(obj==NULL)

  {

    write("这里没有那种东东\n");

    return 0;

  }

  else

  {

    write("你让"+player+"脱下"+ob+"\n");

//    get_object(player)->unequip_armor(obj);   这个 function 也不能 work

    obj->move(this_player());

    obj->move(get_object(player));

    return 1;

  }

}



int back(string str)

{

  string ob,player;

  object obj;



  sscanf(str,"%s to %s",ob,player);

  obj=get_object(ob,this_player());

  if(obj==NULL)

  {

    write("你没有那样东东\n");

    return 0;

  }

  if(get_object(player)==NULL)

  {

    write("这里没有这样东东\n");

    return 0;

  }

  obj->move(get_object(player));

  if(get_object(player)->query("chi_name")!=NULL)

  {

    write("你将"+ob+"送给"+get_object(player)->query("chi_name")+"\n");

  }

  else

  {

    write("你将"+ob+"送给"+get_object(player)->query("cap_name")+"\n");

  }

  return 1;

}



int getobj(string str)

{

  string ob,player;

  object obj;

  sscanf(str,"%s from %s",ob,player);

  obj=get_object(ob,get_object(player));

  obj->move(this_player());

  if(get_object(player)->query("chi_name")!=NULL)

  {

    write("你偷了"+get_object(player)->query("chi_name")+"的"+ob+"\n");

  }

  else

  {

    write("你偷了"+get_object(player)->query("cap_name")+"的"+ob+"\n");

  }

  return 1;

}



int whereis(string str)

{

  write(environment(get_object(str))->query("long"));

  return 1;

}



int mob(string str)

{

  object ob,victim,victim1;

  string temp,real_oid;

  int i,int_oid;



//  if (sscanf(str,"%s from %s", obname, victname)!=2)

//  {

//     return help();

//  }

//  sscanf(str,"%s", obname);

  ob = environment(this_player());

  victim = present(str, ob);



  if (!victim)

  {

    victim=get_object(str);

  }

  if(!victim)

  {

     notify_fail ("这里没有那种东东! \n") ;

     return 0 ;

  }

//  write(identify(file_name(ob)));

//  write(file_name(ob));

  int_oid=getoid(victim);

  write(int_oid);

  real_oid=identify(int_oid);

  temp=file_name(victim);

  temp=replace_string(temp,real_oid,"");

  temp=replace_string(temp,"#","");

  write(temp);

  return this_player()->more(temp+".c");

}





int morei()

{

string str;

object obj;

obj=this_player();

str=file_name(environment(obj));

return this_player()->more(str+".c");

}





int morep(string str)

{

  object obj;

  obj=find_player(str);

write(file_name(environment(obj))+"\n");

write("玩家 "+str+"在 "+file_name(environment(obj))+"\n");

return this_player()->more(file_name(environment(obj))+".c");

}



int full(string str)

{

  int max_hp,max_sp,max_tp;

  object ob;



  if(str==NULL)

  {

    ob=this_player();

  }

  else

  {

    ob=find_living(str);

  }

  max_hp=ob->query("max_hp");

  max_sp=ob->query("max_sp");

  max_tp=(ob->query("level"));

  max_tp=max_tp*50;

  ob->set("hit_points",max_hp);

  ob->set("spell_points",max_sp);

  ob->set("talk_points",max_tp);

  ob->set("bleeding",0);

  write("你唸起终极回复咒文 [32;1m喀塔干荷依米[37;0m  \n");

  if(ob==this_player())

    say(this_player()->query("chi_name")+" 口中唸着咒文,顿时[32;1m天地变色[37;0m ,转眼间他又容光焕发\n");

  else

  {

    say(this_player()->query("chi_name")+" 口中唸着咒文,顿时[32;1m鬼哭神嚎[37;0m ,"+ob->query("chi_name")+"康复了!!\n");

  }

  return 1;

}



int wizard_chat(string str)

{

  object *all_wizards;

  int i;



  if (!str || str==NULL)

  {

    notify_fail("你想要送给其他巫师什么讯息?\n");

    return 0;

  }

  all_wizards = filter_array(users(), "filter_wizards", this_object());

  for (i=0; i<sizeof(all_wizards); i++)

  {

    tell_object(all_wizards[i], "[专操自己] "+this_player()->query("chi_name")+

             " 说 :"+str+"\n");

  }

  return 1;

}





int list_wizards(string str)

{

  object *all_wizards, snooping;

  int i, val, j;

  string idle_time;



  if (str && str!=NULL)

  {

    notify_fail("正确的使用方法: wizards\n");

    return 0;

  }

  all_wizards = filter_array(users(), "filter_wizards", this_object());

  all_wizards = sort_array(all_wizards, "sort_wizards", this_object());

  write("--==--==--==--==--==--==--==--==--==--==--==--==--==--==--==--==--\n");

  write("                目前共有 "+ sizeof(all_wizards) + " 个巫师在线上\n");

  write("--==--==--==--==--==--==--==--==--==--==--==--==--==--==--==--==--\n");

  for (i=0; i<sizeof(all_wizards); i++)

  {

    write(all_wizards[i]->query("short") );

    snooping=query_snooping(all_wizards[i]);

    if(snooping!=NULL)

    {

      write("  调查人物 : ");

     // for(j=0; j<sizeof(snooping); j++)

    //  {

        write(snooping->query("id")+",");

     // }

    }

    val = query_idle( all_wizards[i] );

    if (val >= 3600)

      idle_time = " [已偷懒了 "+ val/3600 + " 小时]";

    if (val >= 60)

      idle_time = " [已偷懒了 "+ val/3600 + " 小时]";

    if (val >= 60)

      idle_time = " [已偷懒了 "+ val/60 + " 分钟]";

    else

    {

      idle_time = "";

      write(idle_time+"\n");

    }

  }

  write("--==--==--==--==--==--==--==--==--==--==--==--==--==--==--==--==--\n");

  return 1;

}



int filter_wizards(object ob)

{

  return (wizardp(ob));

}



int sort_wizards(object ob1, object ob2)

{

  if (((int)ob1->query_level() - (int)ob2->query_level()) != 0 )

  return ((int)ob2->query_level() - (int)ob1->query_level());

  return strcmp((string)ob2->query("name"), (string)ob1->query("name"));

}





int help(string str)

{

  if (str!="cloak") return 0;

write(@Help

  你可以使用以下的几个命令:

       % 系统指令 : localcmd,stat,

       mess <你要送出的讯息>.....< 低声的 shout >

       mes  <你要送出的讯息>.....< 激动的 shout >

       sh   <你要送出的讯息>.....< 轻柔的 shout >

       low  <你要送出的讯息>.....< 无辜的 shout >

       smi  <你要送出的讯息>.....< 顽皮的 shout >

       vend <number> <type>.....<取出哪种钱币的多少数目>

       rem <eqs> from <object>....<让某一 object 解除装备>

       getobj <object> from <object>....<从某玩家或object身上拿某样东东>

       back <object> to <object>...<将某一 object 给一 object>

       whereis <玩家>...........<显示一玩家的所在地>

       Mob <Object>.............<显示一 mob 或 weapon 的档案>

       Morei....................<显示你所在地的档案>

       Morep <玩家>.............<显示玩家所在地的档案>

       Full <玩家>..............<生命. 法力. 谈话点数全满, 玩家若无输入则内定为自己>

       Wiz <讯息>...............<向所有在线上的巫师传讯息>

       Wizs..................<列出目前在线上的所有巫师>

Help

);

  return 1;

}



int vend(string arg)

{

   string type ;

   int number ;

   object obj ;



   seteuid(getuid(this_object()));

   if (sscanf(arg,"%d %s",number,type) != 2)

   {

     notify_fail ("请用: vend <number of coins> <type of coin>\n") ;

     return 0 ;

   }

   if (number<1)

   {

     write ("啥?..钱的数目还会有负的?...你还真天才!\n") ;

     return 1 ;

   }

   obj = clone_object("/std/coins") ;

   obj->set_type(type) ;

   obj->set_number(number) ;

   obj->move(environment(this_player())) ;

   write ("你从你的披风内取出"+number+" "+type+" 的钱币\n") ;

   say (this_player()->query("cap_name")+"从他的大魔导士披风里取出"+number+" "+type+" 的钱出来, 并把他们丢在地上\n") ;

   return 1 ;

}



int message(string str)

{

   if ((!str) || (str == " "))

   {

      notify_fail(" 你想说啥??\n");

      return 0;

   }
   write(GRN+"你低声的说: "+NOR +HIC+ str +NOR+ "\n") ;

   shout(GRN+this_player()->query("chi_name")+" 低沈的声音响彻云宵:"+
         NOR+HIC+ str +NOR+ "\n");
   return 1 ;

}


int message1(string str) {
   if ((!str) || (str == " "))
   {
      notify_fail(" 你想说啥??\n");
      return 0;
   }
   write(GRN+"你激动的喊:"+NOR +HIC+ str +NOR+ "\n");
   shout(GRN+this_player()->query("chi_name")+" 激动的大喊:"+
         NOR+HIC+ str +NOR+ "\n");
       return 1 ;

}

int message2(string str) {

  if ((!str) || (str == " "))
   {
      notify_fail(" 你想说啥??\n");
      return 0;
   }
    write(GRN+"你轻柔的说: "+NOR +HIC+ str +NOR+ "\n") ;
    shout(GRN+this_player()->query("chi_name")+
          " 轻柔的声音穿过你的耳际:"+
          NOR+HIC+ str +NOR+ "\n");
   return 1 ;
}

int message3(string str) {

  if ((!str) || (str == " "))
   {
      notify_fail(" 你想说啥??\n");
      return 0;
   }
    write(GRN+"你无辜的说: "+NOR +HIC+ str +NOR+ "\n") ;
    shout(GRN+this_player()->query("chi_name")+
          " 露出一脸无辜的样子,低下头说:"+
          NOR+HIC+ str +NOR+ "\n");
   return 1 ;
}

int message4(string str) {

  if ((!str) || (str == " "))
   {
      notify_fail(" 你想说啥??\n");
      return 0;
   }
    write(GRN+"你嘻皮笑脸的说: "+NOR +HIC+ str +NOR+ "\n") ;
    shout(GRN+this_player()->query("chi_name")+
          " 顽皮的对你说:"+
          NOR+HIC+ str +NOR+ "\n");
   return 1 ;
}
