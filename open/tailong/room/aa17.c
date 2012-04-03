inherit ROOM;

void create ()
{
  set ("short", "牟尼院外");
  set ("long", @LONG
这里就是天龙寺的武学重地牟尼院外,天龙寺的高僧都是在此潜修武
学奥秘,因此牟尼院也就成为天龙寺对外人的三禁地之一,在这里有两位
天龙寺的上级武僧在此把守。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"aa18",
  "east" : __DIR__"aa16",
]));
  set("objects", ([ /* sizeof() == 1 */
"/open/tailong/npc/monkf5.c":2,
]));

  setup();
  replace_program(ROOM);
}
