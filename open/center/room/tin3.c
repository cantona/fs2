// Room: /u/l/lotus/girl/tin3.c

inherit ROOM;

void create ()
{
  set ("short", "穿堂");
  set ("long", @LONG
挂了两盏明晃晃的花灯, 煞是好看。东面有一座楼梯, 西面通往
客人休息的房间, 最好不要乱闯房间, 被打扰的客人脾气会很不好...
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"guest2.c",
  "west" : __DIR__"w1.c",
  "east" : __DIR__"tin4.c",
]));
  set("light_up", 1);

  setup();
}
