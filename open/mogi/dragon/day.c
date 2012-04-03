//by casey

inherit ROOM;

void create ()
{
  set ("short", "一线天");
  set ("long", @LONG
这里是炎龙谷里最狭窄的地方 ,往里面去是龙族的栖息
之地 ,但是通路似乎被延长出来的藤蔓(rattan)给封闭
住了,看还要拨开才能往前行了...

LONG);
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("evil", 1);
  set("no_auc", 1);



  set("item_desc", ([ /* sizeof() == 1 */
  "rattan" : "这里的藤蔓似乎长的特别的茂密，密到完全掩盖\住了山壁。
",
]));
         set("exits", ([ /* sizeof() == 1 */
  

  "north" : __DIR__"b10",
]));


  set("search_desc", ([ /* sizeof() == 1 */
  "rattan" : "你拨开藤蔓，猛然发现后面竟然有个通道，但从外观上却完全看不出来。
或许你能通过(pass)它。
",
]));


  setup();
}

void init()
{
        add_action("do_pass", "pass");
}

int do_pass(string arg)
{
        object who;
        who = this_player();

        if( !arg || arg!="rattan" )
                return notify_fail("你要通过什么？\n");
        tell_object(who,"你用手拨开藤蔓，向后面的通道走了进去。\n");
        who->move("/open/mogi/dragon/d-2.c");
        tell_room(this_object(),"你看到"+who->query("name")+"慢慢向藤蔓走去，忽
然就不见踪影了。\n");
        return 1;
}
