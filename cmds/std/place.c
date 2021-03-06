//place.c by bss
//瞬间移动之术, 配合/feature/place.c
//有完整的迷, 才有可能开放
#include <ansi.h>
inherit F_CLEAN_UP;

int main(object me, string arg)
{
    int i,num;
    mapping places;
    string txt,verb, replace, *vrbs;
    object room;

    places=me->query_all_place();
    txt="";
    if(!me->query("quests/can_transmit") && !wizardp(me)) return 0;
    if( !arg ) {
      if( !sizeof(places) ) {
        write("你目前并没有设定任何 places。\n");
        return 1;
      } else  {
        write("你目前设定的传送地点记载如下：\n");
        txt+=sprintf("%4s %7s","编号","地点");
        if(wizardp(me))
          txt+=sprintf("%24s\n","档名");
        else
          txt+="\n";
        num=sizeof(places);
        for(i=0; i<num; i++){
          txt+=sprintf("(%2d)\t%-20s",i+1,me->query_place(i,"name"));
          if(wizardp(me))
            txt+=sprintf("\t%-23s\n",me->query_place(i,"file_name"));
          else
            txt+=sprintf("\n");
        }
        me->start_more(txt);
        return 1;
      }
    }
    if(sscanf(arg,"%s %d",verb,num)!=2){
      if(arg=="set"){
        room=environment(me);
        if(room->query("no_transmit") && !wizardp(me))
        {
          write("一阵强大的磁场从地底传出,干扰了你的设定,\n");
          write("似乎这里的大神不愿此地可以传送...\n");
          return 1;
        }
        num=sizeof(places);
        me->set_place(room,num);
        return 1;
      }
       else if(arg=="delete_all")
            return me->delete_all_place();
      else return 0;
    }
    else{
      if(verb=="go"){
        replace=me->query_place(num-1,"file_name");
        if( environment(me)->query("no_transmit") && !wizardp(me))
        {
          write("突然一阵能量从地底发出,使得你觉得全身不对劲,\n");
          write("似乎这里的大神不愿此地可以传送...\n");
          return 1;
        }
        message_vision( HIC+"$N将食中指点在额头，使出瞬间移动之术，「咻.....”的一声，$N消失在众人眼前!\n"+NOR ,me);
        if( !me->move(replace) ){
          write("你发现你还在原地动也不动, 似乎是法术出了点问题。 \n");
          write("最好通知一下wiz吧!!\n");
          return 1;
        }
        message_vision(HIC+"「咻～～～～”的一声，$N突然出现在众人眼前!\n"+NOR,me);
        return 1;
      }
      if(verb=="-d"){
        me->delete_place(num-1);
        return 1;
      }
      if(verb=="display" && wizardp(me)){
        replace=me->query_place(num-1,"file_name");
        if(!replace)
          return notify_fail("没有这个传送点!!\n");
        if(objectp(room=find_object(replace)))
          "/cmds/std/look.c"->look_room(me,room,1);
        else{
          call_other(replace, "???");
          "/cmds/std/look.c"->look_room(me, find_object(replace),1);
        }
        return 1;
      }
      else return 0;
    }
    return 0;
}
int help(object me)
{
    if(!me->query("quests/can_transmit") && !wizardp(me)) return 0;

    write(@HELP
指令格式 : place [set | -d | go | display(巫师专用)] >
指令说明 :
        这个指令主要是方便你在主大陆的移动, 类似一个法术
        可以将你传送到你之前设定的地方。
范例:
        'place set :会把你目前所在的位置记起来, 方便以后传送
        'place -d 数字:把编号某一号的记忆消除掉
        'place :显示你目前所有的记忆地点
        'place display 数字:巫师专用, 可以用千里眼之术看看该地点目前的情况
        'place go 数字:把自己传送到记忆地点, 会损一半的气
HELP
);
    return 1;
}
