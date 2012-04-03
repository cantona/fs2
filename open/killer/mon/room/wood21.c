//written by acelan...../u/a/acelan/room/wood21.c

inherit ROOM;

void create()
{
        set("short", "密道的尽头");
        set("long", @LONG
这里是密道的尽头, 有一棵树干看起来表面特别平滑, 你绕到另
外一边去看, 发现树干上面刻满了字(word), 左边和右边各有一条垂
到地上的树藤。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : "/open/killer/mon/room/wood27.c",
   ]));

   set("item_desc", ([
       "word" : "(pull left)通往你想到的地方。\n(pull right)通往你想不到的地方。\n",
   ]));

        set("no_clean_up", 0);

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
   if( str== "left")
   {
      tell_object( me, "你难以置信的发现西边开了一个洞, 可以继续前进。\n");
      set("exits/west", "/open/killer/mon/room/wood20.c");
      return 1;
   }
   if( str== "right")
   {
      tell_object( me, "你一拉下树藤, 脚下出现一个大洞, 你连叫也来不及就掉下去了。\n");
      me->move("/open/killer/mon/room/wood14.c");
      return 1;
   }
   return notify_fail("拉什么?，不要乱拉好不好?\n");
}

int valid_leave(object me, string dir)
{
  if (dir != "west")
  {
     this_object()->delete("exits/west");
     return 1;
  }
  return 1;
}
