// Room: /u/d/devils/school3.c

inherit ROOM;

void create ()
{
  set ("short", "练武场");
  set ("long", @LONG
这里是正晴武馆教授棍法之处,一位彪形大汉正挥舞着冰火风雷棍
,其臀力之强,令方圆三丈的人都感觉劲风扑面....地上还躺着三,四个
武馆弟子(可能不小心被打到的吧!),你想了想决定还是快离开比较安全
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"school2",
  "east" : __DIR__"school4",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/trainee1" : 1,
]));

  set("outdoors", "/open/wu");
  setup();
}
