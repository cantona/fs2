// Room: /open/gsword/room/gsword1-1.c
inherit ROOM;

void create ()
{
  set ("short", "小径");
  set ("long", @LONG
这是一条通往藏经阁的小径，小径上长满了青苔，似乎甚少人通行，
两旁巨木参天，走在其中，但觉神清气爽，高山上的空气真是新鲜。传说
仙剑派的藏经阁收藏了全天下最齐全的武林秘籍，不过却是甚难进入。

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g5-14.c",
  "east" : "/open/gsword/room/g5-10.c",
]));

  setup();
}
