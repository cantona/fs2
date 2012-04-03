// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","守卫队办公室");
  set ("long", @LONG
这里是守卫队队头办公的地方 . 大厅后方挂了个御赐的匾额 
 , 写着 [保境安民] 四个金字 . 守卫队成立于十五年前枫林立
港 , 建城之时 , 身负着港口安全的使命 , 曾六次成功的击退来
犯的倭寇 . 四年前朝廷在港边建立水军 , 守卫队从此隶属于水
军总督府 , 负责维持枫林港的治安 .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/port/room/r6-3",
]));
	set("objects",([
	"/open/port/npc/leader":1,
	]));

  setup();
}
