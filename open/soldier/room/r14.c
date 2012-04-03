
inherit ROOM;

void create()
{
        set("short", "战备处");
	set("long", @LONG

    这里三面都是墙，南倒是路的尽头了吗??你突然发现
上面有微微的灯光，莫非上面还有路走～你眼睛瞄了一下
发现在旁边有绳索(cord)通到上面，在面前也有一座长楼
梯(stairs)通到上面，在另一边墙(wall)特别低，这时你
终于遇到人生的转折点了。。。

LONG
);

  set("exits", ([ /* sizeof() == 2 */
    "northeast" : __DIR__"r11",
]) );
  set("item_desc", ([ /* sizeof() == 3 */
  "cord" : "一条细细的绳子,你可以爬爬(creep)看。\n",
  "wall" : "一面高而挺拔的白墙,你可以爬爬(mount)看。\n",
  "stairs" : "一个高大的竹梯,你可以爬爬(upper)看。\n",
]));

  set("light_up", 1);
  setup();
}

void init()
{
  add_action ("do_creep","creep");
  add_action ("do_upper","upper");
  add_action ("do_mount","mount");                                                                                                                    
}

int do_creep (string str)
{
  object	me;
  if (!str || (str != "cord" && str != "绳" && str != "绳子"))
    return notify_fail("你发觉自己不成才..想要上吊自尽了。\n");

  me = this_player();
  message_vision("$N两手抓住绳索，使劲的往上爬去。\n", me);
  message_vision("没多久$N又掉下来了。。。\n", me);
  me->move(__DIR__"r14"); 
  return 1;
}
 
int do_upper (string str)
{
  object	me;
  if (!str || (str != "stairs" && str != "长楼梯" && str != "楼梯"))
    return notify_fail("你是吨位太重吗??\n");

  me = this_player();
  message_vision("$N轻轻的踏上楼梯，慢慢的往上爬去。\n", me);
  message_vision("$N发觉楼梯怪怪的..咚一声～～像香蕉般的砸在地上了。。。\n", me);
  me->move(__DIR__"r14");
  return 1;
}
int do_mount (string str)
{
  object	me;
  if (!str || (str != "wall" && str != "墙"))
    return notify_fail("你发觉自己又不是蜘蛛人..干嘛爬上去。\n");

  me = this_player();
  message_vision("$N像壁虎般往上爬，动作神迅犹如扒仔。\n", me);
  message_vision("$N爬到一半忽然觉的自己像神般的神～～。。\n", me);
  me->move(__DIR__"r19");
  tell_room(environment(me), sprintf ("%s像神般的爬了上来。\n",
	me->short()), me);
  return 1;
}
