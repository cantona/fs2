// Room: /u/o/ookami/newarea/aa4 
inherit ROOM;
 
void create ()
{
  set ("short", "点苍山腰");
  set ("long", @LONG
当你走到这里,你看到前方有一栋金碧辉煌的建筑物,好像是一座佛
寺,但是远远看去又好像是一座宫殿,令人叹为观止,仔细想想,这应该就
是有名的天龙寺了吧
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"aa3.c",
  "north" : __DIR__"aa5.c",
]));
  set("outdoors", "/u/o/ookami/newarea");

  setup();
  replace_program(ROOM);
}
