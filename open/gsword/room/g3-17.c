// Room: /open/gsword/room/g3-15.c
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
这是通往仙剑七侠寝居的木制走廊, 在这儿听不到外面的吵杂声, 有的只是
淡淡得花香, 和和煦的光线。东边是张乘云之寝居, 西边是范松之寝居, 而南边
正是七侠之首 -- 张乘风之寝居 .

LONG);

  set("exits", ([ /* sizeof() == 4 */
    "west" : "/open/gsword/room/g3-20",
    "north" : "/open/gsword/room/g3-16",
    "south" : "/open/gsword/room/g3-18",
    "east" : "/open/gsword/room/g3-19",
]));

  set("light_up", 1);

  setup();
}
