inherit ROOM;

void create ()
{
  set ("short","东院走廊");
  set ("long", @LONG
走到这里,忽然觉得有一股清风吹来,让人心旷神怡,环顾四周,看到庄
严雄伟的大雄宝殿,使你由衷地想进去参拜一下。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"aa27",
  "south" : __DIR__"aa22",
]));
}
