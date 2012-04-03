inherit ROOM;

void create ()
{
  set ("short", "神秘出口");
  set ("long", @LONG
四周仍然一片黑暗，但仔细观察似乎可以感到出口就在这
里东方的石壁传来晞微的光现，或许东方的石壁就有出口。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"s1.c",
  "down" : __DIR__"s3",
]));

  setup();
}
void init()
{
add_action("do_search","search");
add_action("do_pass","pass");
}
int do_search(string str)
{
if(str!="east") return 0;
this_player()->set_temp("search",1);
message_vision("$N拨动东方石壁上的碎石,出现了小小的洞口\n",this_player());
return 1;
}
int do_pass(string str)
{
if(str!="hole") return 0;
if(this_player()->query_temp("search")==0) return 0;
message_vision("$N往洞口钻了进去\n",this_player());
this_player()->set_temp("search",0);
this_player()->move("/open/japan/room/port.c");
return 1;
}