// room7.c by roger
inherit ROOM;
#include <ansi.h>
void create () {
set ("short", "古堡三楼");
        set ("long","
墙壁上点着青绿色的鬼火，仔细一看是由\酷\似\骷\髅\的\银器\作\成灯座，绿
光便\由\骷\髅\的\两\只\眼\睛里\射\出\，\豪\华\中\透\着\恐\怖\的\气\息。地上也铺着厚
厚的地毯，令人不禁惊奇地东张西望。四周的妖魔似乎也都披金戴银，
性情也温和的多，但一身武艺看起来比楼下的是有过之而无不及，你不
禁怀疑自己真是在魔界？但这里却有一扇大门，写着"HIW"‘白虎室’。
"NOR);

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 1 */
            
        "west" : __DIR__"room43",   
            
      ]));
        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/tiger-guard.c" : 1,
      ]));

        setup();
}
void init()
{
        add_action("do_unlock", "unlock");
}

int do_unlock(string str){
   object me,obj;
   object key;
   string tigerkey;
   me = this_player();
   
        if(!str || str != "door with tigerkey"){
                return notify_fail("你想开什么？\n");
                return 0;
                                 }
        else{
        if(present("tigerkey",me)){
          if(present("guard",environment(me))){
           message_vision(HIY"白虎守卫瞪了你一眼\n"NOR,me);
           return 0;
                                            }              
        message_vision(HIC"$N用白虎之钥打开白虎密室\n"NOR,me);                                
            set("exits/enter",__DIR__"room45");
                  set_temp("have_open",1);
        if (!key) key = present("tigerkey", me);
        if (!key) key = present("tigerkey", environment(me));
        if (!key) key = find_object( resolve_path(me->query("cwd"), tigerkey) );
                  destruct(key);
                  remove_call_out("do_closed");
                  call_out("do_closed",15);
                  return 1;
                                  }
        else write("你没有这东西\n");
           }
}
void do_closed()
{
        delete_temp("have_open");
        delete("exits/enter");
        tell_room(this_object(),"大门碰的一声又关起来。\n");
}
