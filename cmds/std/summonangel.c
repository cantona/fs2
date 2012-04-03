//      天使召唤

#include <ansi.h>
inherit F_CLEAN_UP;

int main(object me, string arg)
{
    object obj, angel;
    int wis, skill, i;
    object *attackers;
    obj = this_player();
    if(!wizardp(me)) return 0;
    if (obj->query("scores") < 100)
        return notify_fail("天使只愿意帮助良好秉性的人\n");
/*
    if(environment(obj)->query("no_fight"))
        return notify_fail("这里有结界无法召唤天使\n");
*/
    attackers = obj->is_fighting();
    
    wis = (int)obj->query("int");
    skill = (int)obj->query_skill("summon");
    if(wis < 25)
        return  notify_fail("你的睿智不足, 无法召唤天使\n");

    if((int)obj->query("atman") < 110)
        return  notify_fail("你的灵力不足\n");
    obj->add("atman",-100);
    write("你说道 :‘天使呀 ! 请求你挥动正义之剑砍碎地面的一切邪恶吧 !’\n");
    tell_room(environment(obj),obj->query_short()+"说道 :‘天使呀 ! 请求你, 请求你挥动正义之剑砍碎地面的一切邪恶吧 !’\n",({obj}));
    tell_room(environment(obj),HIY"在金色光芒下, 一位鼓动翅膀的天使从天缓缓而降\n"NOR,({}));
    skill = random(skill);
    if(skill < 20)
      angel = new("/u/a/anmy/npc/angel/angel1");
    else if(skill < 40)
      angel = new("/u/a/anmy/npc/angel/angel2");
    else if(skill < 60)
      angel = new("/u/a/anmy/npc/angel/angel3");
    else if(skill < 80)
      angel = new("/u/a/anmy/npc/angel/angel4");
    else angel = new("/u/a/anmy/npc/angel/angel5");
    angel->move(environment(obj));
    for(i=0;i<sizeof(attackers);i++) {
      if(attackers[i]->query("bellicosity") > 0) continue;
      angel->kill_ob(attackers[i],0);
    }
    obj->start_busy(3);
/*
    obj->improve_skill(skill,random( me->query("int")+
              obj->query_skill(skill,1)/10) ); */
      
   return 1;
}

