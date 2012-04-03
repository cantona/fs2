// Room: /open/ping/room/p9
inherit ROOM;

void create ()
{
  set ("short", "寝居");
  set ("long", @LONG
这里是大师哥柳毅风的居所, 但此刻他却不在房里, 大概是有事外
出了吧, 你大概看了一下, 整间房间只有一张桌(table), 一把椅(chair)
, 和其他一些东西, 任何多余的摆设多没有。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"p8",
]));
  set("item_desc", ([ /* sizeof() == 3 */
  "table" : "一张方方正正的桌子, 没有特别的地方, 只是在桌子的正中央放了
一张字条(note)。
",
  "chair" : "粗糙的木头制成的椅子, 不过摸起来却很光滑。
",
  "note" : "                 ┌───────────┐
                 │ 有事, 至蜀中城将军府 │
		 │  一趟, 代我向师父交代│
		 │			 │
		 │		柳毅风 笔│
		 └───────────┘
",
]));
  set("light_up", 1);

  setup();
}
void init()
{
   add_action("do_enter","enter");
}
int do_enter(string str)
{
   object me = this_player();
   if(me->query_skill("linpo-steps",1)==80 && me->query_skill("six-fingers",1)==100)
   me->move("open/ping/room/p11.c");
   return 1;
}
