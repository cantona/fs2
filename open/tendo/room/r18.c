// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short",HIG"八卦游龙迷阵"NOR);

long = "\n"+
"                         "+BRED"                      \n"NOR+
"                       "+BMAG"                      "+BRED"    \n"NOR+
"                     "+BMAG"                          "+BRED"    \n"NOR+
"                    "+BMAG"                            "+BRED"    \n"NOR+
"                   "+BMAG"                              "+BRED"    \n"NOR+
"                  "+BMAG"             "+WHT"雷象"+HIW"(n)"+"            "+BRED"   \n"NOR+
"                  "+BMAG"            "+WHT" ＿　＿"+"             "+BRED"   \n"NOR+
"                  "+BMAG"     "+WHT"水象"+HIW"(w)"NOR+BMAG+WHT" ＿　＿"+" 山象"
HIW"(e)"+"     "+BRED"   \n"NOR+
"                  "+BMAG"            "+WHT" ＿＿＿"+"             "+BRED"   \n"NOR+
"                  "+BMAG"                                "+BRED"   \n"NOR+
"                  "+BMAG"             "+WHT"风象"+HIW"(s)"+"            "+BRED"   \n"NOR+
"                   "+BMAG"                              "+BRED"   \n"NOR+
"                    "+BMAG"                            "+BRED"   \n"NOR+
"                     "+BMAG"                          "+BRED"   \n"NOR+
"                       "+BMAG"                      \n"NOR+
"\n";

set("long", long);
set("exits", ([
      "east"  : __DIR__"r6",
      "west"  : __DIR__"r7",
      "south" : __DIR__"r8",
       "north" : __DIR__"r19",
  ]));
  set("light_up", 1);
  set("no_magic", 1);
  set("no_fight", 1);
  set("no_clean_up", 1);
  setup();
}
void init()
{
        add_action("no_fanset","fanset");
}

int no_fanset()
{
        object who;
        who = this_player();
        tell_object(who,"由于此处磁场过强，你的唤云扇无法设定。\n");

        return 1;
}
