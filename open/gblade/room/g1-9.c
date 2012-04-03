inherit ROOM;

void create ()
{
  set ("short", "练武场");
  set ("long", @LONG
 
看到青石地板被踏出一个个的脚印，你惊讶的说不出话，心想好深厚的功
力。旁边有两个金刀门的弟子正在练武，你看到他们手中掷出的暗器，竟
然是白花花的银子，真是有钱的一个门派。

LONG);

  set("objects", ([ /* sizeof() == 3 */
  "/open/gblade/npc/shouhon" : 1,
  "/obj/money/silver.c" : 1,
  "/open/gblade/npc/trainee" : 2,
]));
  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"g1-3",
]));

  setup();
}
