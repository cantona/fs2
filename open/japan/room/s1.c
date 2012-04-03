inherit ROOM;

void create ()
{
  set ("short", "不知名的空间");
  set ("long", @LONG
这是一个神秘的地方，四周不断的有人影在闪动
你能感觉到你来到一个未知的空间，并且被监视中，
或许讯速离开这个地方是你最好的选择，你可以试着
使用轻功离开。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s3",
  "south" : __DIR__"s1",
  "north" : __DIR__"s2.c",
  "northwest" : __DIR__"s3",
]));

  setup();
}
void init()
{
add_action("do_jump","jump");
}
int do_jump()
{
if(this_player()->query_skill("dodge",1)<10) return 0;
message_vision("$N施展独门轻功一纵而上，离开了神秘空闲。\n",this_player());
this_player()->move("/u/c/cyw/room/p12.c");
return 1;
}