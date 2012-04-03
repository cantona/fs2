// Room: /open/wu/room/luroom22.c
// 泷山派的祠堂
// 加入解谜物件 by nike

inherit ROOM;
void create ()
{
  set ("short", "祠堂");
  set ("long", @LONG
这是泷山派的用来贡奉祖先及历代的掌门的祠堂,一进此地就被此地的庄
严肃穆气氛所摄,不敢做出轻率的举动,前方的墙上挂者一幅幅的画,画上
的人物是泷山派历代的掌门。上方有一匾额写着"忠肝义胆、浩气长存"
八个字。
LONG);
  set("exits", ([ /* sizeof() == 5 */
  "north" : "/open/wu/room/luroom19",
  ]));
  set("light_up", 1);
  setup();
}
void init()
 {
    add_action("do_search","search");
    add_action("do_turn","turn");
 }
int do_search(string arg)
{
    object me = this_player();

    if(!arg || arg != "匾额") return 0;
    if(present("delfire-mark",me))
{
	write("你翻了翻墙上的匾额，在匾额后头发现了一个奇特的旋钮！\n");
	me->set("doctor/find_botton",1);
	return 1;
  }
}
int do_turn(string arg)
{
    object me = this_player();

    if(!arg || arg != "旋钮") return 0;

    if(present("delfire-mark",me) && me->query("doctor/find_botton") == 1)
{
	write("你使劲的转了转旋纽...\n");
	write("你终于把旋纽给转动了，旁边竟露出了一扇暗门！\n");
	write("你走进暗门之内，发现竟然别有洞天！\n");
	me->move("/open/wu/room/pnxroom");
	return 1;
  }
}

