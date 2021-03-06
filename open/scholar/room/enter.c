// Room: /u/j/judd/room/enter_room.c
inherit ROOM;

void create ()
{
  set ("short", "儒门入口");
  set ("long", @LONG
前方有一栋看起来相当特别的建筑，想必就是儒门了，然而
却看不到任何的入口，只有一枝巨型石笔立在眼前，上面写着”
七孔凤凰笔(pen)”，地上还有各式奇怪的图案，不知道有什么意
义。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"newplan/area/groom1.c",
  "north" : "/open/start/room/r3.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "pen" : "你仔细的瞧了瞧，发现这支笔有被转动(turn)过的痕迹。
",
]));
  set("outdoors", "/open/start");

  setup();
}
void init()
{
  add_action("do_turn", "turn");
}
int do_turn(string str)
{
  object who;
  who = this_player();

       tell_object(who,"\n你小心翼翼的转动七彩凤凰笔。\n\n");

tell_object(who,"咻的一声，你整个人不知不觉的被一股吸力给吸进去了。\n\n");
        who->move(__DIR__"r24");

tell_room(this_object(),"你只听到"+who->query("name")+"惊叫一声，已经看不到他的身影了。\n");
        return 1;
}

