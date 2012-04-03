// Room: /open/poison/room/road19
inherit ROOM;

void create ()
{
  set ("short", "山路");
  set ("long", @LONG
这里四处片荒芜，到处长满了野草，看来是一个罕有人
迹的地方。西边有一大片的密林，树林林立，看不出有任何
方法可以进入这片森林。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"road7",
]));
  set("outdoors", "/open/poison");

  setup();
}
