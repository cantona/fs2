// Room: /open/capital/room/r55.c

inherit ROOM;

void create ()
{
  set ("short", "云洋大街");
  set ("long", @LONG
你来到了镇远侯府门口，一扇由天山雪木制成的大门及两旁栩栩如
生石狮，显示了镇远侯不凡的气势与刚正的性格。
    北边门上的匾额有皇帝亲题的四个字：「fl;[4D镇远侯府fcm[4D”

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/capital/room/general",
  "west" : "/open/capital/room/r54",
  "east" : "/open/capital/room/r56",
]));

  set("outdoors", "/open/capital");

  setup();
}
