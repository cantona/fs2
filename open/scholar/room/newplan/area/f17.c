// Room: /u/s/sueplan/newplan/area/f17.c
inherit ROOM;

void create ()
{
  set ("short", "树道");
  set ("long", @LONG
树荫夹道的小径，两旁盛开的野玫瑰，如火如荼，花把枝儿都压弯了，
一路延伸的草径上，遍布着小得不能再小的雏菊，好像一片绿黄相间的地毯
，迎接你前来。你哼着不知名的小调，漫步而走，远方隐约传来三两声响，
似乎是风声，抑或是音乐声。
LONG);

  set("outdoors", "/u/s");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"q1.c",
  "south" : __DIR__"f16",
]));

  setup();
}
