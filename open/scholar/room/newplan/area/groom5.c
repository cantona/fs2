// Room: /u/s/sueplan/newplan/area/get3.c
inherit ROOM;

void create ()
{
  set ("short", "小桥边");
  set ("long", @LONG

天空泛着白云, 看起来天气是非常的和煦, 路上可以听到鸟儿
高声歌唱, 让你的心情无比的愉快。眼前是一座小桥, 桥身横过清
澈的水面, 水中还可以看到小鱼游匿哩!!

LONG);

  set("outdoors", "/u/s");
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"groom4.c",
]));

  setup();
}
void init()
{
add_action("do_take","take");
add_action("do_search","search");
}
int do_take(string str)
{
object me=this_player();
object ob;
if(str=="boots")
{
if(me->query_temp("can_get")==1)
        {
        message_vision("$N捞呀捞的, 一个小鞋被$N捞起来了\n",me);
        ob=new("/open/scholar/room/newplan/obj/qboots");
        ob->move(me);
        }
        else
        {
        message_vision( "$N要拿什么??$N不知道吧??\n",me);
        }
if(me->query_temp("get_boots")==3)
        {
        message_vision("$N捞够了吧???\n",me);
        }
return 1;
}
}
int do_search(string arg)
{
        object me;
        me = this_player();
        tell_object(me,"你看到一个青色的小鞋在桥下, 你应该可以捞到(take boots)吧\n");
        return 1;
}
