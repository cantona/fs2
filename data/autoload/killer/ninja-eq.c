inherit ITEM;
#include <ansi.h>
#include <mudlib.h>
#include <command.h>
void create()
{
set_name(MAG"忍者装束"NOR,({"ninja-eq"}));
set("long",HIC"这是传说中被封印的忍者装备(open ninja or close ninja)。"NOR);
set("unit","套");  
set("no_auc",1);
set("no_put",1);
set("no_sell",1);
set("no_give",1);
set("no_drop",1);
set("no_steal",1);
setup();
}
int query_autoload()
{
return 1;
}
void init() 
{
object me=this_player();
object ob;
ob=present("ninja-eq",me);
if(ob&&ob->name()==MAG"忍者装束"NOR)
{
add_action("do_open","open");
add_action("do_close","close");
}
}

int do_open(string str) 
{
object me,eq01,eq02,eq03,eq04,eq05,eq06,eq07,eq08,eq09,eq10,eq11,eq12,eq13;
object ob;
  string name;
  me=this_player();
  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "ninja")
          return 0;
  ob=present("ninja-eq",me);
if(ob->query_temp("ninja")==1)
return notify_fail("忍者装束的封印已经解除了！\n");
message_vision(HIC"\n$N运用忍术解除封印, $N的忍者装束渐渐换化成许多装备。\n\n"NOR,this_player());
eq01 = new("/daemon/class/killer/obj/nshield");
eq02 = new("/daemon/class/killer/obj/nboots");
eq03 = new("/daemon/class/killer/obj/narmband");
eq04 = new("/daemon/class/killer/obj/ncloth");
eq05 = new("/daemon/class/killer/obj/nhands");
eq06 = new("/daemon/class/killer/obj/nhelmet");
eq07 = new("/daemon/class/killer/obj/nleggings");
eq08 = new("/daemon/class/killer/obj/nneck");
eq09 = new("/daemon/class/killer/obj/npants");
eq10 = new("/daemon/class/killer/obj/nring");
eq11 = new("/daemon/class/killer/obj/nsurcoat");
eq12 = new("/daemon/class/killer/obj/nwaist");
eq13 = new("/daemon/class/killer/obj/nwrists");
eq01->set("no_steal",1);
eq02->set("no_steal",1);
eq03->set("no_steal",1);
eq04->set("no_steal",1);
eq05->set("no_steal",1);
eq06->set("no_steal",1);
eq07->set("no_steal",1);
eq08->set("no_steal",1);
eq09->set("no_steal",1);
eq10->set("no_steal",1);
eq11->set("no_steal",1);
eq12->set("no_steal",1);
eq13->set("no_steal",1);
if (me->query("ninjaeq/getshield")==1) eq01->move(this_player());
if (me->query("ninjaeq/getboots")==1) eq02->move(this_player());
if (me->query("ninjaeq/getarmband")==1) eq03->move(this_player());
if (me->query("ninjaeq/getcloth")==1) eq04->move(this_player());
if (me->query("ninjaeq/gethands")==1) eq05->move(this_player());
if (me->query("ninjaeq/gethelmet")==1) eq06->move(this_player());
if (me->query("ninjaeq/getleggings")==1) eq07->move(this_player());
if (me->query("ninjaeq/getneck")==1) eq08->move(this_player());
if (me->query("ninjaeq/getpants")==1) eq09->move(this_player());
if (me->query("ninjaeq/getring")==1) eq10->move(this_player());
if (me->query("ninjaeq/getsurcoat")==1) eq11->move(this_player());
if (me->query("ninjaeq/getwaist")==1) eq12->move(this_player());
if (me->query("ninjaeq/getwrists")==1) eq13->move(this_player());
ob->set_temp("ninja",1);
me->set_temp("ninja",1);
return 1;
}

int do_close(string str)
{
  object me,ob;
  string name;
  me=this_player();
  ob=present("ninja-eq",me);
  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "ninja")
          return 0;
if(me->query_temp("ninja")!=1)
return notify_fail("你并没有开启忍者装束！\n");
if(ob->query_temp("ninja")==1) {
if (me->query("ninjaeq/getwrists")==1) destruct(present("ninja bracelet",me));
if (me->query("ninjaeq/getwaist")==1) destruct(present("ninja belt",me));
if (me->query("ninjaeq/getsurcoat")==1) destruct(present("ninja surcoat",me));
if (me->query("ninjaeq/getring")==1) destruct(present("ninja ring",me));
if (me->query("ninjaeq/getpants")==1) destruct(present("ninja pants",me));
if (me->query("ninjaeq/getneck")==1) destruct(present("ninja gem",me));
if (me->query("ninjaeq/getleggings")==1) destruct(present("ninja legging",me));
if (me->query("ninjaeq/gethelmet")==1) destruct(present("ninja helmet",me));
if (me->query("ninjaeq/gethands")==1) destruct(present("ninja hands",me));
if (me->query("ninjaeq/getcloth")==1) destruct(present("ninja cloth",me));
if (me->query("ninjaeq/getarmband")==1) destruct(present("ninja armband",me));
if (me->query("ninjaeq/getboots")==1) destruct(present("ninja boots",me));
if (me->query("ninjaeq/getshield")==1) destruct(present("ninja shield",me));
me->delete_temp("ninja");
ob->delete_temp("ninja"); 
message_vision(HIC"\n$N利用忍术再度将忍者装束封印起来。\n\n"NOR,me);
}
return 1;
}
