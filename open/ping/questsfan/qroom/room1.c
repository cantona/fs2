#include <ansi.h>
#include <room.h>
inherit ROOM;

void create()
{
  set ("short", "虹晶桥前段");
  set ("long", @LONG
你见到三座豪光夺目，华丽不凡的晶桥。桥全长约百
步之远、宽仅可供一人通行而已。桥上全无缆绳之类的扶
手，均需靠自身的平衡感及千斤坠造诣来通行。在右前方
处有一石碑，碑上记载着密密麻麻的甲骨文字，深奥难懂
，似是有关此桥的由来。

LONG);

        set("exits", ([ /* sizeof() == 1 */
  "north" : __FILE__,
  "south" : __DIR__"room0",

]));
set("no_transmit", 1);
        set("objects", ([
]));
        setup();
}
void init()
{
        object me=this_player();
        string nowtime,nowmin,nowhour,nowday,rightway;
        int min,hour,day,trueroad;

        nowtime=ctime(time());
        nowmin=nowtime[14..15];
        nowhour=nowtime[11..12];
        nowday=nowtime[8..9];
        if(sscanf(nowmin,"%d",min))
                min=min;
        if(sscanf(nowhour,"%d",hour))
                hour=hour;
        if(sscanf(nowday,"%d",day))
                day=day;
        switch(hour%3)
        {
                case 0:
                        trueroad=1;
                        break;
                case 1:
                        trueroad=2;
                        break;
                case 2:
                        trueroad=3;
                        break;
                default:
                        write("出现bug啰!!\n");
                        break;
        }
        if(wizardp(me))
        {
        printf(HIY"现在时间 "+ctime(time())+"\n"NOR);
        printf(HIY"分为%d分\n"NOR,min);
        printf(HIY"时辰为%d点\n"NOR,hour);
        printf(HIY"日期为%d日\n"NOR,day);
        printf("trueroad=%d\n",trueroad);
        }
        switch(trueroad)
        {
                case 1:
                        if(min==15)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room2");
                                rightway="north";
                        }
                        if(min>=0 && min<=20 && min!=15)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room2");
                                set("exits/northwest",__DIR__"room3");
                                set("exits/northeast",__DIR__"room4");
                                rightway="north";
                        }
                        if(min>=21 && min<=40)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room4");
                                set("exits/northwest",__DIR__"room2");
                                set("exits/northeast",__DIR__"room3");
                                rightway="northwest";
                        }
                        if(min>=41 && min<=59)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room3");
                                set("exits/northwest",__DIR__"room4");
                                set("exits/northeast",__DIR__"room2");
                                rightway="northeast";
                        }
                        break;
                case 2:
                        if(min==35)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room2");
                                rightway="north";
                        }
                        if(min>=0 && min<=20)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room4");
                                set("exits/northwest",__DIR__"room2");
                                set("exits/northeast",__DIR__"room3");
                                rightway="northwest";
                        }
                        if(min>=21 && min<=40 && min!=35)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room3");
                                set("exits/northwest",__DIR__"room4");
                                set("exits/northeast",__DIR__"room2");
                                rightway="northeast";
                        }
                        if(min>=41 && min<=59)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room2");
                                set("exits/northwest",__DIR__"room3");
                                set("exits/northeast",__DIR__"room4");
                                rightway="north";
                        }
                        break;
                case 3:
                        if(min==55)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room2");
                                rightway="north";
                        }
                        if(min>=0 && min<=20)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room3");
                                set("exits/northwest",__DIR__"room4");
                                set("exits/northeast",__DIR__"room2");
                                rightway="northeast";
                        }
                        if(min>=21 && min<=40)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room2");
                                set("exits/northwest",__DIR__"room3");
                                set("exits/northeast",__DIR__"room4");
                                rightway="north";
                        }
                        if(min>=41 && min<=59 && min!=55)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room4");
                                set("exits/northwest",__DIR__"room2");
                                set("exits/northeast",__DIR__"room3");
                                rightway="northwest";
                        }
                        break;
        }
        if(wizardp(me))
                printf("正确的路为%s\n",rightway);
//add by bss,解过的人怕死,所以解过的可以用飞的
    if(me->query("marks/fan-finger"))
      tell_object(me,HIM"你对于你的轻功充满了信心, 似乎可以飞渡(fly)悬涯!!\n"NOR);
      add_action("do_fly","fly");
}
int do_fly()
{
    object me=this_player();
    int i;
     
    message_vision(HIY"$N使出绝顶轻功, 用力一跳, 往对岸飞去!!!\n"NOR,me);
    if(me->query("marks/fan-finger")){
      me->move("/open/ping/questsfan/qroom/room5");
      message_vision(HIC"$N在空中翻了三个筋斗, 轻轻的落在地上!!\n"NOR,me);
    }
    else{
      message_vision(HIR"$N在空中忽然感到真气不足, 一个不留神, 往下摔去!!\n"NOR,me);
      if(sizeof(this_object()->query("exits")) > 2) i=random(50);
      else i=2;
      switch(i){
        case 0..5:
          me->move("/open/ping/questsfan/qroom/room2");
          tell_object(me,HIM"碰的一声, 你掉到了桥上, 真是好险!!\n"NOR);
          break;
        default:
          me->move("/open/ping/questsfan/qroom/room3");
          tell_object(me,HIG"眼看你就要掉到桥上了, 但是你忽然发现, 那个桥竟然是幻影!!\n"NOR);
          break;
      }
    }
    return 1;
}

