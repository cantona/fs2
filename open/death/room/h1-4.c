// Room: /open/death/room/h1-4
inherit ROOM;

void create ()
{
  set ("short", "第一殿--分尸地狱");
  set ("long", @LONG
你一走进这里，便听到阵阵的惨叫声，放眼看去，只见生前拆散别
人骨肉，及破坏良家妇女名节的人，被鬼卒用木板前后夹住，然后拿锯
子从头往下锯成两半，霎时鲜血四溅，接着鬼卒再把尸体拖到一旁，缝
合后，浇上复活水使其复活，再重复刚刚的刑罚。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"h1-2",
]));
  set("light_up", 1);

  setup();
}
