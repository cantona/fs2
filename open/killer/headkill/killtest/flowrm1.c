inherit ROOM;
void create()
{
set("short", "圣域试炼之间起点");
set("long", @LONG
	经由叶秀杀的忍法幻术，你似乎来到了一种不知名的地方，
	四周的房间几乎都是石头打造的，建筑风格也跟所熟识的中国式建筑不一样。
	难不成你已经不在中国里面了？不会吧？
	根据叶秀杀所说，这里应该是所谓的圣域入口，也是试炼的起点。
	前方有一个似曾相识的花园，似乎在杀手总坛的花园曾经见过。
	或许应该进去吧。。。。。

LONG );
set("exits", ([ /* sizeof() == 2 */
  "enter": __DIR__"flowrm2.c",
]));

set("no_transmit",2);
set("no_auc",1);	//代表这里是圣域之间，必须限制auc
set("valid_startroom", 1);
setup();
}

int valid_leave(object me, string dir)
{//不通过8次试炼出不去
  me->set_temp("killrun",1);
  return 1;
}
