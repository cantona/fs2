// Room: /open/poison/room/road7
inherit ROOM;

void create ()
{
  set ("short", "断崖");
  set ("long", @LONG
这里视野十分辽阔，阵阵清风吹佛，内心一切阴霾恐惧
消失的无影无踪，眼前乃一谷地，四周群峰环抱，处处绿意
苍苍，往西南望去，点点红瓦，向西北眺望，可见一雄伟大
院，东边则是一大片高大的杂草丛，其上则是一面光秃秃的
绝壁。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road19",
  "northwest" : __DIR__"road8",
]));
  set("outdoors", "/open/poison");

  setup();
}
void init()
{
 add_action("do_go","go");
 add_action("do_east","east");
}

int do_go(string str)
{
 object me;
 me = this_player();
if(str == "east")
{
   message_vision("$N穿过高高的草丛，发出沙沙的声音。\n",me);
    me->move(__DIR__"path9");
    return 1;
}
return 0;
}
int do_east()
{
object me;
me = this_player();
  message_vision("$N穿过高高的草丛，发出沙沙的声音。\n",me);
me->move(__DIR__"path9");
return 1;
}
