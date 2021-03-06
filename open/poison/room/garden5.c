// Room: /u/r/ranko/garden5.c
inherit ROOM;

void create ()
{
  set ("short", "毒园中央部份");
  set ("long", @LONG
此处所种的毒花,毒草等已属平时所罕见.各种带着绚丽色彩的
花朵在此争奇斗艳,教人看的目瞪口呆.其中,最引人注意的是生长在
当中的一朵血海棠(Blood flower),此株较寻常植物都要来的高大,颜
色也异常鲜艳,通体的火红似是吸入了人血一般。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"garden4-3.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "flower" : "一株巨大的血海棠,如此异物,想必吸引了不少稀世毒物于此栖息。
",
]));
  set("objects", ([ /* sizeof() == 3 */
  "/obj/source/green_snake.c" : 1,
  "/obj/source/poison_bird.c" : 1,
  "/obj/source/hundred_flower" : 1,
]));
  set("light_up", 1);

  setup();
}
