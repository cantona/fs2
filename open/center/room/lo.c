// Room: /open/center/room/loto.c

inherit ROOM;

void create ()
{
  set ("short", "骆驼行");
  set ("long", @LONG
这是一家骆驼行, 店老板就就刘骆驼, 大概是长年累月跟骆驼
为伍, 长得倒是有三分像人七分像骆驼. 不过别看他弯腰驼背的模
样就以为他好欺负, 塞北明驼木高峰的名头可是响遍北卢关附近三
寨十八窝. 双手两把弯刀不知砍死多少英雄好汉, 想来你口袋里的
荷包得看紧一点, 否则, 嘿嘿...
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"road1",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/loto" : 2,
]));

  set("light_up", 1);

  setup();
}
