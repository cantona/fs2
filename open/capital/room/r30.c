// Room: /open/capital/room/r30.c

inherit ROOM;

void create ()
{
  set ("short", "永安胡同");
  set ("long", @LONG
走着走着，人渐渐多了起来，两边有一些杂耍的人，旁边围了一群
观众在鼓掌叫好。原来再往东去就是南市了。北面就是大通驿站，人们
都在那儿传递讯息，偶尔换几匹好马,继续向目的地驰去。
    这里有禁卫军四处的巡逻着，所以你还是不要在城内惹事的好。

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"postoffices",
  "west" : __DIR__"r28",
  "east" : __DIR__"r31",
]));
  set("gopath", "west");
  set("gopath2", "west");

  setup();
}
