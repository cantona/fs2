#include <ansi.h>
#include <mudlib.h>
inherit ROOM;
int do_list();
void create() {
set("short",CYN"专门座骑集散中心"NOR);
set("long",@LONG

这里是传说中的专门座骑发散中心。只有传说中的大侠方能在这里
取得专门的座骑。座上这些座骑将可以使你的战斗力大为提升至极
高境界。你可以使用(list)查看这里有那一些大侠可以取得座骑!!

LONG);
        set("exits",([ /* sizeof() == 1 */
         "east" : "/open/wiz/skroom",
      ]));
        set("light_up", 1);
        set("no_kill", 1);
        set("no_fight", 1);
        set("no_magic", 1);
        setup();
}

void init() {
        add_action("do_list","list");
        add_action("do_get_horse","get_horse");

}

int do_list() {
write("          大侠名称                    座骑名称
       ----------------------------------------------------------
                 crythree                    紫云幻龙
                 ddt                         超级坏马
                 dunga                       九天仙龙
                 hikki                       八焚杀魔
                 killer                      天诛神兽
                 leon                        杀人凶马
                 lovesui                     风残雪影
                 ollie                       赤血妖龙
                 rry                         人间凶兽
                 sdgudam                      啸天犬
                 smirk                       炽热炎兽\n"); 
write("          victor                       征服者
                 pony                         冷血专用坐骑
                 zard                        的卢马
                 kaze                        的卢马
                 bloodblade                  痞子马
                 snowcraft                   诸神的黄昏
       ---------------------------------------------------------
           您只需下 get_horse 即可叫来您的座骑，谢谢您的光临！\n\n");
        return 1;
}
int do_get_horse() {
        object me = this_player(),mid;
        string name=me->query("id");
        if(me->query_temp("get_net_horse"))
         return notify_fail("一次上线只能领一次自己的座骑了!!!。\n");
        switch(name) {
  case "cyr" :
              mid = new("/nets/horse/cyrthree");
                break;
           case "ddt"    :
              mid = new("/nets/horse/ddt");
                break;
           case "dunga"    :
              mid = new("/nets/horse/dunga");
                break;
           case "hikki"     :
              mid = new("/nets/horse/hikki");
              break;
case "yukigirl"     :
		mid = new("/nets/horse/yukigirl"); 
              break;
           case "leon"  :
              mid = new("/nets/horse/leon");
              break;
           case "lovesui"  :
              mid = new("/nets/horse/lovesui");
              break;
           case "ollie"     :
              mid = new("/nets/horse/ollie");
              break;
           case "rry"  :
              mid = new("/nets/horse/rry");
              break;
           case "sdgudam"  :
              mid = new("/nets/horse/sdgudam");
              break;
           case "smirk" :
              mid = new("/nets/horse/smirk");
              break;
           case "victor" :
              mid = new("/nets/horse/victor");
              break;
           case "pony" :
                mid = new("/nets/horse/pony");
             break;
/*
           case "julio" :
                mid = new("/nets/horse/julio");
             break;
*/
           case "snowcraft" :
                mid = new("/nets/horse/snowcraft");
             break;
           case "bloodblade" :
                mid = new("/nets/horse/bloodblade");
             break;
           case "zard" :
                mid = new("/nets/horse/zard");
             break;
           case "kaze" :
                mid = new("/nets/horse/kaze");
             break;
           case "smallthree" :
                mid = new("/nets/horse/smallthree");
             break;
/*
           case "libra" :
                mid = new("/nets/horse/libra");
             break;
           case "libraa" :
                 mid = new("/nets/horse/libra");
              break;
*/
default : return notify_fail(HIY
"对不起!!!您不是传说中的大侠,因此没有专属的座骑!!\n"NOR);
        }
        if(!me->query("fs_net3/horsestby")) {
         write("由于时间拖太久了.所以补发二个替身给各位!!\n");
         me->add("standby",2);
         me->set("fs_net3/horsestby",1);
         }
        mid->move(environment(me));
        mid->set_leader(me);
        me->set_temp("get_net_horse", 1);
        message_vision(HIW"一道白光降下!!$N的专属座骑出现在$N之前！\n"NOR,me);
     log_file("net/horse", sprintf("%s(%s) 领取专属座骑!!时间是%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
}

