// Room: /u/o/ookami/newarea/aa0.c 
inherit ROOM;
 
void create ()
{
  set ("short", "点苍山脚");
  set ("long", @LONG
这里是平南城附近的名山--点苍山,四周碧草如茵,不时还能看到可
爱的小兔子在草丛中飞跃,往前方一看,雄伟的山峰就耸立在前方, 听说
山中有一座著名的寺庙--天龙寺,是段家历代高手出家为僧的名寺,令你
不禁想要一探究竟
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/ping/room/to_tai.c",
  "east" : __DIR__"aa1.c",
]));
  set("outdoors", "/u/o/ookami/newarea");

  setup();
  replace_program(ROOM);
}
