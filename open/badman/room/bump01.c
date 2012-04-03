inherit ROOM;
 void create()
{
  set ("short","庙庭中的大洞");
  set ("long",@LONG
这里是坑洞的尽头，之前所看到的那股蓝光，因为你的更加靠近，显
得更是耀眼！仔细一看，这股蓝光竟是透过地面散出，泥地也因此透出闪
闪蓝光，教人不得不赞叹三声！！！
LONG);
  
  set("outdoors", "/open/badman");

  set("exits", ([ /* sixeof() == 1 */
  "east" : __DIR__"bump.c",
]));

  setup();
}

void init()
{
  add_action("do_search","search");
  add_action("do_dig","dig");
}
int do_search()
{
  object who;
  who = this_player();
  message_vision("你看了看地上的泥地，松松软软的，好像可以挖（dig）。\n",who);
  who->set_temp("marks/dig",1);
  return 1;
}
int do_dig()
{
  object who;
  who = this_player();
  if (who->query_temp("marks/dig",1))
  {
   message_vision("[1;36m你挖呀挖，忽然一阵耀眼的蓝光照耀着你！[1;31m
但这洞穴因为你的翻动，就快要塌了！！[1;32m
突然有人抓着你衣服的后领，将你提了起来！[0m\n",who);
  who->move("/open/badman/room/wolf17.c");
   return 1;
  }
  else
  {
  message_vision("[36m你要挖哪里？[0m\n",who);
  return 1;
  }
}
