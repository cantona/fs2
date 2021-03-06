inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "金刀门大厅");
  set ("long", @LONG

一进大厅，厅上挂着一赤金盘龙大匾，上头写着斗大的四个字‘六阳金刀
’。大厅中摆着一张大紫檀木案，一边是紫檀架子大理石屏风，一边是三
尺多高的青绿古铜鼎，壁上一块乌木牌写着‘金门玉户神仙府’。地下两
溜十六张楠木圈椅，上头搭着五彩刻丝石青椅袱。右边的墙上挂有由王羲
之亲笔所题的兰亭序，左边则是一块木板，上面刻有金刀弟子的排行榜，
可用list来看排行榜。



LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"g1-4",
  "west" : __DIR__"g1-5.c",
  "east" : __DIR__"g1-6.c",
]));

  set("objects", ([ /* sizeof() == 1 */
 "/daemon/class/blademan/master_ba.c":1,
]));

  set("light_up", 1);
  set("valid_startroom",1);

  setup();
  call_other("/obj/board/gblade_b.c","????");
}
int valid_leave(object me,string dir)
{
        if(dir=="east"||dir=="west"||dir=="south")
        {
        if(me->query_temp("being-apprentice"))
        return notify_fail("你还在拜师中 , 想去哪里 ?\n");
        return 1;
        }
}

void init() {
        add_action("do_billing","list");
}

int do_billing(string str) {
object *user,me;
        int i,j,k;

        user = users();
        me = this_player();

        for(i=j=0; i<sizeof(user); i++)
           if(user[i]->query("family/family_name") == "金刀门" &&
              !wizardp(user[i]))
              user[j++] = user[i];

        if(str == "combat_exp") {
           call_out("do_exp",0,user,j);
           return 1;
        }
        else if(str == "force") {
           call_out("do_force",0,user,j);
           return 1;
        }
        else if(str == "gold-blade") {
           call_out("do_goldblade",0,user,j);
           return 1;
        }
        else
           return notify_fail("使用格式: list <种类>\n"
                              "经验值(combat_exp)\n"+
                              "内力(force)\n"+
                              "紫金六阳刀法(gold-blade)\n\n");
}

int do_exp(object *user,int j) {
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if(user[k]->query("combat_exp") > user[i]->query("combat_exp")) {
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t金刀门经验值排行榜:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t第%2d名       %-18s %s(%s) \n"NOR,i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));

        printf("\n");
}

int do_force(object *user,int j) {
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if(user[k]->query("max_force") > user[i]->query("max_force")) {
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t金刀门内力排行榜:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t第%2d名       %-18s %s(%s) \n"NOR,
                      i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));

        printf("\n");
}

int do_goldblade(object *user,int j) {
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if((int)user[k]->query_skill("gold-blade") > (int)user[i]->query_skill("gold-blade")) {
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t金刀门紫金六阳刀法排行榜:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t第%2d名       %-18s %s(%s) \n"NOR,
                      i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));
        printf("\n");
}
