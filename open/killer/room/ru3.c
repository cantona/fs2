// Room: /open/killer/room/ru0.c
inherit ROOM;
void create ()
{
  set ("short", "大厅");
  set ("long", @LONG
这里是黑牙联总坛的大厅，布置非常的平常，但是却暗藏杀机。
连四周的烛光，似乎也传来阵阵的杀机，看来这不是一般人该进来的地方。
看似平常的一盆花，搞不好就是你致命的原因。你最好小心一点。
这里也经过特殊设计，例如此处特别狭窄就是防止敌人可大举侵入。
前方就是传说中的超级杀手叶秀杀，接见来访客人的地方。
戒备非常的森严，你最好不要轻举妄动。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"masterm.c",
  "south" : __DIR__"ru1.c",
]));
  set("objects",([
      "/open/killer/npc/killer_a.c":2,]));
  set("light_up", 10);
  setup();
}