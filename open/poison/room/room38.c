inherit ROOM;

void create ()
{
  set ("short", "竹林");
  set ("long", @LONG
清新的空气 ,美丽的竹林 ,还有一只大熊猫正一边啃着竹子 ,一
边好奇的打量着你 ,嘿嘿 ,拿来作东坡肉真是刚刚好 ;有竹有肉
 ,刚好做个不俗的胖子 .你邪恶的想着 .前面有一间小屋 .....
住着谁ㄋ ?

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room37",
  "enter" : __DIR__"room39",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/u/h/houng/mob/bearcat.c" : 1,
]));

  setup();
}
