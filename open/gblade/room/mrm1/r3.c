// Room: /u/m/moner/tree/room19.c
inherit ROOM;

void create ()
{
  set ("short", "囚室");
  set ("long", @LONG

这里是天邪峰囚禁犯人的牢房，儿臂粗细的铁杆内一对对阴森的眼
睛，满怖杀意的凝视着你，你每踏出一步，心里便寒寒的发毛着，牢笼内
并没有哀嚎声，反而是一片的宁静才令人越害怕。牢房内来来回回的走动
着狱卒。

LONG);

  set("exits", ([ /* sizeof() == 1 */
"east":"/open/gblade/room/room22.c",
]));
  set("light_up", 1);
set("no_transmit", 1);
  setup();
}
void init()
{
  add_action("do_search", "search");
}

int do_search(string arg)
{
  object        me=this_player();
      int    query;
message_vision("$N找来找去终于发现一条往下的路。\n", me);
set("exits/down","/open/gblade/room/mrm1/r4.c");
  return 1;
}

int valid_leave(object me, string dir)
{
if(dir =="down")
    this_object()->delete("exits/down");
    return 1;
  if (this_object()->query("exits/"+dir)) return 1;
  else return 0;

 }
