// Room: /open/poison/room/room2
inherit ROOM;

void create ()
{
  set ("short", "内室");
  set ("long", @LONG
这是猎人家内室，室内布置不像一般猎户，北面墙上挂
了几幅字画，地上摆了一些盆栽，看来相当清静高雅，西侧
有一布帘，上面绣了一幅巨大的圣火像，似乎其后隐藏些什
么。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"path1",
  "east" : __DIR__"room3",
]));
  set("light_up", 1);

  setup();
}
