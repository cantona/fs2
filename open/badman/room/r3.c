// Room: /open/badman/room/r3
inherit ROOM;

void create ()
{
  set ("short", "病房");
  set ("long", @LONG
灰暗的灯光下你看到房间里有一张白色的病床，旁边的小架子
上则放了一些医疗用具，平常要是有谁受了伤得躺上十天半个月的
话，就只好乖乖的待在这里啰。恶人谷中没有任何一个人敢在这里
胡来，因为他们每一个人都不知道何时自己也会住进这间小小的屋
子呢。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r2",
]));
  set("light_up", 1);

  setup();
}
