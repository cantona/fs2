//written by acelan...../u/a/acelan/room/wood12.c

inherit ROOM;

void create()
{
        set("short", "小径的尽头");
        set("long", @LONG
你来到了小径的尽头, 你讶异竟然没有路了, 但正当你要往回走
的时候, 你发现地上若隐若现的隐约有个奇怪的符号(sign), 不知道
到底是写着什么。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : "/open/killer/mon/room/wood5.c",
   ]));
   set("item_desc", ([
       "sign" : "你仔细的看过这个符号之后, 发现它是指向一个拉杆(level),\n你可以试着拉拉看(pull)。\n",
   ]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/npc/grnnpc1.c" : 2,
]));
        setup();
}

void init()
{
   add_action("do_pull", "pull");
}

int do_pull( string str)
{
   object me;
   me= this_player();
   if( str== "level")
   {
      tell_object( me, "你发现了一个往下的密道\n");
      set("exits/down", "/open/killer/mon/room/wood16.c");
      return 1;
   }
   return notify_fail("拉什么?，不要乱拉好不好?\n");
}

int valid_leave(object me, string dir)
{
  if (dir != "down")
  {
     this_object()->delete("exits/down");
     return 1;
  }
  return 1;
}
