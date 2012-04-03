// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short",HIW"八卦游龙迷阵"NOR);

long = "\n"+
"                         "+BGRN"                      \n"NOR+
"                       "+BWHT"                      "+BGRN"    \n"NOR+
"                     "+BWHT"                          "+BGRN"    \n"NOR+
"                    "+BWHT"                            "+BGRN"    \n"NOR+
"                   "+BWHT"                              "+BGRN"    \n"NOR+
"                  "+BWHT"             "+HIB"干门"+HIW"(n)"+"            "+BGRN"   \n"NOR+
"                  "+BWHT"            "+HIB" ＿＿＿"+"             "+BGRN"   \n"NOR+
"                  "+BWHT"     "+HIB"兑门"+HIW"(w)"+HIB" ＿　＿"+" 艮门"HIW"(e)"
+"     "+BGRN"   \n"NOR+
"                  "+BWHT"            "+HIB" ＿　＿"+"             "+BGRN"   \n"NOR+
"                  "+BWHT"                                "+BGRN"   \n"NOR+
"                  "+BWHT"             "+HIB"坎门"+HIW"(s)"+"            "+BGRN"   \n"NOR+
"                   "+BWHT"                              "+BGRN"   \n"NOR+
"                    "+BWHT"                            "+BGRN"   \n"NOR+
"                     "+BWHT"                          "+BGRN"   \n"NOR+
"                       "+BWHT"                      \n"NOR+
"\n";

set("long", long);
set("exits", ([
      "east"  : __DIR__"r12",
      "west"  : __DIR__"r7",
      "south" : __DIR__"r8",
       "north" : __DIR__"r9",
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
