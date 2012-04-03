//firedragon2 by casey

#include <combat.h>
#include <ansi.h>
#include <mudlib.h>
inherit NPC;

void create()
{
set_name(HIY"皮卡丘"NOR, ({ "pe-ca","ca" }) );
set("long",""HIY"小二心爱的钥匙圈，虽然看起来小小的并不中用，但牠生\n"
           "气起来可是很可怕的噢。似乎还能骑上去唷(ride)\n"NOR"");
set("no_drop", 1);
set("no_auc", 1);
set("no_sell", 1);
set("unit","只");
set("value","100");
set("race", "野兽");
  set("gender","雄性");
  set("combat_exp",10000000);
  set("age",24710);
 set("cor",40);
  set("str",20);
  set("kee",100000);
  set("max_kee",100000);
  set("sen",70000);
  set("max_sen",70000);
  set("gin",45000);
  set("max_gin",45000);
  set("force",32000);
  set("max_force",32000);
  set("bellicosity",1000);
  set("attitude","peaceful");
  set("chat_chance_combat", 25);
  set_temp("apply/armor",100);
  set_temp("apply/damage",80);
set("limbs", ({ "龙首", "龙爪", "龙身" , "龙腿" , "龙尾" }) );
  set("force_factor",25);
     set_skill("dodge",700);
     set_skill("parry",400);
     set_skill("unarmed",500);
 
  setup();


}


void init()
{

add_action("do_ascend","ride");
add_action("do_descend","dismount");
}

int do_ascend()
{
        object me;
        string name;
        me=this_player();
        name=(string)me->query("id");
        if (name != "smallthree")
           return notify_fail("你不是这座骑的主人(smallthree)无法骑他!!!\n");
        if ( me->query_temp("marks/ascend") )
               return notify_fail("你无法骑在别人的仙龙身上呀。\n");

message_vision(""HIY"$N从身上取下了钥匙圈往地下一丢，钥匙圈上的"+this_object()->name()+"\n"
               ""HIY"居然变的越来越大足足有两个人高!!$N扶着"+this_object()->name()+""HIY"的\n"
               "背鳍一翻便坐在"+this_object()->name()+""HIY"的头上.。\n",me);
        me->set_temp("marks/ascend",1);
        me->add_temp("apply/dodge",30);
        me->add_temp("apply/parry",30);
        me->add_temp("apply/unarmed",30);
        me->add_temp("apply/attack", 30);
        me->add_temp("apply/defense",30);
        me->add_temp("apply/damage",30);
        me->add_temp("apply/armor", 30);
        this_object()->set_leader(me);
        me->add_temp("apply/name",({ me->name()+ HIW"(正骑着"NOR+this_object()->name()+HIW")"NOR}));
        move(me);
        me->set_heart_beat(1);
        return 1;
}

int do_descend()
{
        object me;
        string *name;

        me=this_player();
        if ( !me->query_temp("marks/ascend") )
                return notify_fail("你没在龙上耶。\n");
message_vision("$N"HIY"拉一拉"+this_object()->name()+""HIY"的耳朵，"+this_object()->name()+""HIY"迅速的变回原来的钥匙\n"
               "圈挂在$N"HIY"的身旁。\n",me);
        me->delete_temp("marks/ascend");   
        me->delete_temp("apply/name",name);
        me->add_temp("apply/dodge",-30);
        me->add_temp("apply/parry",-30);
        me->add_temp("apply/unarmed",-30);
        me->add_temp("apply/attack", -30);
        me->add_temp("apply/defense",-30);
        me->add_temp("apply/damage",-30);
        me->add_temp("apply/armor", -30);
        move(environment(me));
  me->set_heart_beat(0);

        return 1;
}

int heal_up()
{
  object *enemy,who,user;
  int i,dodge;
        user = query_leader();
  if( user->is_fighting() )
  {
    if( random(10) > 2 )
    {
     enemy=user->query_enemy();

    i=random(sizeof(enemy));
     dodge = enemy[i]->query_skill("dodge", 1);
  
  if(random(10) > 4)

{
      message_vision(HIW+"道道闪光从仙龙口中疾吐而出,正朝着$N迅速直劈而去!!\n"+NOR,enemy[i]);
      message_vision(HIC+"$N闪躲不及 ,被烧得的全身焦黑。\n"+NOR,enemy[i]);
     COMBAT_D->report_status(enemy[i], 1);
     enemy[i]->receive_damage("kee", 500);     
     enemy[i]->start_busy(random(2));
  COMBAT_D->report_status(enemy[i], 1);
 
}else{
      message_vision(HIW+"道道闪光仙龙的口中疾吐而出,正朝着$N迅速直袭而去!!\n"+NOR,enemy[i]);
     message_vision(HIC+"只见$N飞身侧闪 ,轻轻避开疾光的攻击...\n"+NOR,enemy[i]);

     }
    }
  }
        return ::heal_up() + 1;
}
void die() 
{
        object me;
        string *name;

        me=this_player();
       
        me->delete_temp("marks/ascend");   
        me->delete_temp("apply/name",name);
        move(environment(me));
 me->set_heart_beat(0);

        return;
}
int accept_fight(object me) {
        return notify_fail("这是别人的财产, 你杀不得!\n");
}

int accept_kill(object me) {
        return notify_fail("这是别人的财产, 你杀不得!\n");
}


